#pragma once
#include <mvcgui/widgets/delegate/base/abstract_item_delegate.h>

namespace mvcgui {
class SelectionItemDelegate : public AbstractItemDelegate
{
public:
	SelectionItemDelegate();

	void Paint(AbstractItemModelPtr model, const ModelIndex& index) override;
};
}