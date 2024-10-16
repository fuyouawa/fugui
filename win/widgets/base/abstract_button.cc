#include <miniwin/widgets/base/abstract_button.h>

namespace miniwin {
AbstractButton::AbstractButton(Widget* parent, std::u8string_view label)
	: AbstractControl{ parent, label },
	cur_checked_{ false },
	prev_checked_{ false }
{
}

void AbstractButton::PaintBegin()
{
    AbstractControl::PaintBegin();
    if (cur_checked_ != prev_checked_) {
        if (cur_checked_) {
            OnClicked();
        }
        OnToggled(cur_checked_);
    }
    prev_checked_ = cur_checked_;
}
}
