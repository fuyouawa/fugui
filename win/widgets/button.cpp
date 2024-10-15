#include <miniwin/widgets/button.h>

#include <win/core/drawer.h>

namespace miniwin {
Button::Button(Widget* const parent, std::u8string_view label)
	: AbstractButton{ parent, label }
{
}

void Button::PaintBegin()
{
    AbstractButton::PaintBegin();
    cur_checked_ = Drawer::Button(label(), size());
}
}
