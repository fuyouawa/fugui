#pragma once
#include <string_view>
#include <memory>
#include <vector>
#include <functional>
#include <fugui/tools/container.h>

namespace fugui {
class ModelIndex;
class AbstractListModel;
class AbstractItemModel;
class AbstractItemDelegate;
class AbstractTableModel;

using AbstractListModelPtr = std::shared_ptr<AbstractListModel>;
using AbstractItemModelPtr = std::shared_ptr<AbstractItemModel>;
using AbstractItemDelegatePtr = std::shared_ptr<AbstractItemDelegate>;
using AbstractTableModelPtr = std::shared_ptr<AbstractTableModel>;

class Drawer
{
public:
	struct InputTextCallbackData {
		//TODO InputTextCallbackData����ֶ�
	};
	using InputTextCallback = std::function<int(const InputTextCallbackData&)>;

	static bool CheckBox(
		std::u8string_view label,
		bool* checked,
		const Vector2& size = Vector2::Zero
	);

	static bool ComboBox(
		std::u8string_view label,
		AbstractListModelPtr model,
		ModelIndex* cur_index,
		int flags = 0,
		const Vector2& size = Vector2::Zero
	);

	static void Text(
		std::u8string_view label,
		const Vector2& size = Vector2::Zero
	);

	static bool Button(
		std::u8string_view label,
		const Vector2& size = Vector2::Zero
	);

	static bool Selectable(
		std::u8string_view label,
		bool* is_selected,
		int flags = 0,
		const Vector2& size = Vector2::Zero
	);

	static bool InputText(
		std::u8string_view label,
		std::vector<char8_t>& buffer,
		const InputTextCallback& cb,
		int flags = 0,
		const Vector2& size = Vector2::Zero
	);

	static bool BeginWindow(
		std::u8string_view title,
		bool* open,
		int flags = 0,
		const Vector2& size = Vector2::Zero
	);

	static void EndWindow();

	static bool BeginListBox(
		std::u8string_view label,
		const Vector2& size = Vector2::Zero
	);

	static void ListItems(AbstractItemModelPtr model, AbstractItemDelegatePtr delegate);

	static void EndListBox();

	static bool BeginTable(
		std::u8string_view label,
		size_t column,
		int flags = 0,
		const Vector2& size = { 0, 200 },
		float inner_width = 0.0f
	);

	static void TableColumns(AbstractTableModelPtr model, bool angled_header = false);

	static void TableItems(AbstractTableModelPtr model, AbstractItemDelegatePtr delegate);

	static void EndTable();
};
}