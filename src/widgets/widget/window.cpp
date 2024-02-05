#include <mvcgui/widgets/widget/window.h>
#include <mvcgui/internal/wrapper/graphic_utils.h>
#include <mvcgui/tools/algorithm.h>
#include <mvcgui/core/drawer.h>
#include <mvcgui/core/winutils.h>

namespace mvcgui {
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
		// ��ȡ��ǰ������, Ȼ���ж��Ƿ�ı�
		// ����ı���˵����ǰ�����������ͣ������ĳ������
		hwnd_ = internal::GraphicUtils::GetCurrentWindow();
		if (hwnd_ && hwnd_ != prev_hwnd_) {
			OnDockingChanged();
			prev_hwnd_ = hwnd_;
		}
		if (top_sc_.is_changed() && hwnd_) {
			internal::GraphicUtils::SetWindowTop(hwnd_, *top_sc_);
		}
		if (!open) {
			Emit(on_close_btn_clicked_);
		}
	}
}

void Window::OnDockingChanged() {
	// �����ǰ�����ͣ����, ˵���Ǵ�Ĭ�ϴ����ϰ������, ���ߴ�ͣ��״̬ȡ���Ĵ���, ��Ҫ�����ö�״̬
	// �����ǰ������ͣ����, �򲻸ı��ö�״̬
	if (!WinUtils::IsWindowDocked()) {
		internal::GraphicUtils::SetWindowTop(hwnd_, *top_sc_);
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