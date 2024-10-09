#include <fugui/widgets/widget/window.h>
#include <fugui/internal/wrapper/graphic_utils.h>
#include <fugui/tools/algorithm.h>
#include <fugui/core/drawer.h>
#include <imgui/imgui.h>

namespace fugui {
Window::Window(AbstractWindow* parent, std::u8string_view title, bool show)
	: AbstractWindow{ parent, title, show },
	top_sc_{ false },
	has_close_button_{ true },
	hwnd_{ nullptr },
	prev_hwnd_{ nullptr }
{
	Connect(on_close_btn_clicked_, [this]() {
		Close();
		});
}

void Window::EnableTop(bool b) {
	top_sc_.set_control(b);
}

void Window::EnableCloseButton(bool b) {
	has_close_button_ = b;
}

void Window::OnPaintBegin()
{
	Widget::OnPaintBegin();
	top_sc_.Entry();

	if (is_showing()) {
		bool open = true;
		Drawer::BeginWindow(title_, has_close_button_ ? &open : nullptr, flags_, size_);
		is_docking_ = ImGui::IsWindowDocked();
		// ��ȡ��ǰ������, Ȼ���ж��Ƿ�ı�
		// ����ı���˵����ǰ�����������ͣ������ĳ������
		hwnd_ = internal::GraphicUtils::GetCurrentWindow();
		if (hwnd_ && hwnd_ != prev_hwnd_) {
			OnDockingChanged();
			prev_hwnd_ = hwnd_;
		}
		if (top_sc_.is_changed() && hwnd_) {
			internal::GraphicUtils::EnableWindowTop(hwnd_, *top_sc_);
		}
		if (!open) {
			Emit(on_close_btn_clicked_);
		}
	}
}

void Window::OnDockingChanged() {
	// �����ǰ�����ͣ����, ˵���Ǵ�Ĭ�ϴ����ϰ������, ���ߴ�ͣ��״̬ȡ���Ĵ���, ��Ҫ�����ö�״̬
	// �����ǰ������ͣ����, �򲻸ı��ö�״̬
	if (!is_docking_) {
		internal::GraphicUtils::EnableWindowTop(hwnd_, *top_sc_);
	}
}

void Window::OnPaintEnd()
{
	if (is_showing()) {
		Drawer::EndWindow();
	}

	top_sc_.Exit();
	Widget::OnPaintEnd();
}
}