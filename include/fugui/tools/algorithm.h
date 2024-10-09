#pragma once
#include <ranges>
#include <string>

namespace fugui {
template<std::ranges::input_range Range>
bool IsContainer(const Range& range, const std::ranges::range_value_t<Range>& val) {
	return std::ranges::find(range, val) != std::end(range);
}

int EnableFlags(int src_flags, int flags, bool b);
}