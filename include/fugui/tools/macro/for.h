#pragma once

#define _MINIWIN_FOR(f, beg, end, ...) __MINIWIN_FOR(f, beg, end, __VA_ARGS__)

/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define __MINIWIN_FOR_0(f, i, ...)
#define __MINIWIN_FOR_1(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_0(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_2(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_1(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_3(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_2(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_4(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_3(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_5(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_4(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_6(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_5(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_7(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_6(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_8(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_7(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_9(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_8(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_10(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_9(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_11(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_10(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_12(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_11(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_13(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_12(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_14(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_13(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_15(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_14(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_16(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_15(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_17(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_16(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_18(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_17(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_19(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_18(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_20(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_19(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_21(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_20(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_22(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_21(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_23(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_22(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_24(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_23(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_25(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_24(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_26(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_25(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_27(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_26(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_28(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_27(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_29(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_28(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_30(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_29(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_31(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_30(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_32(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_31(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_33(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_32(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_34(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_33(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_35(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_34(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_36(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_35(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_37(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_36(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_38(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_37(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_39(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_38(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_40(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_39(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_41(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_40(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_42(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_41(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_43(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_42(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_44(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_43(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_45(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_44(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_46(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_45(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_47(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_46(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_48(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_47(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_49(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_48(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_50(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_49(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_51(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_50(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_52(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_51(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_53(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_52(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_54(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_53(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_55(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_54(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_56(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_55(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_57(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_56(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_58(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_57(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_59(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_58(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_60(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_59(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_61(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_60(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_62(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_61(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_63(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_62(f, _MINIWIN_INC(i), __VA_ARGS__)
#define __MINIWIN_FOR_64(f, i, ...) _MINIWIN_EXPAND(f(i, __VA_ARGS__)) __MINIWIN_FOR_63(f, _MINIWIN_INC(i), __VA_ARGS__)

#define _MINIWIN_PRIMITIVE_CAT(l, r) l ## r
#define _MINIWIN_CAT(l, r)			_MINIWIN_PRIMITIVE_CAT(l, r)

#define __MINIWIN_FOR_I(f, n, ...) _MINIWIN_CAT(__MINIWIN_FOR_, n)(f, 0, __VA_ARGS__)
#define __MINIWIN_FOR(f, count, ...) __MINIWIN_FOR_I(f, count, __VA_ARGS__)
