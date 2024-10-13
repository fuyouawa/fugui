#include <fugui/widgets/widget/base/abstract_button.h>
#include "abstract_button.h"

namespace fugui {
AbstractButton::AbstractButton(Widget* const parent, std::u8string_view label, bool show)
	: AbstractControl{ parent, label, show },
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
