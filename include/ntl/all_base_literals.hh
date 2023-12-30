#pragma once

#include "impl/chars2num.hh"

namespace ntl {
template<char... Chars>
	inline constexpr int operator ""_2() { return ::ntl::impl::chars2num<int, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_2i8() { return ::ntl::impl::chars2num<std::int8_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_2i16() { return ::ntl::impl::chars2num<std::int16_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_2i32() { return ::ntl::impl::chars2num<std::int32_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_2i64() { return ::ntl::impl::chars2num<std::int64_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_2u8() { return ::ntl::impl::chars2num<std::uint8_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_2u16() { return ::ntl::impl::chars2num<std::uint16_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_2u32() { return ::ntl::impl::chars2num<std::uint32_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_2u64() { return ::ntl::impl::chars2num<std::uint64_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_2zu() { return ::ntl::impl::chars2num<std::size_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_2z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 2, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_3() { return ::ntl::impl::chars2num<int, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_3i8() { return ::ntl::impl::chars2num<std::int8_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_3i16() { return ::ntl::impl::chars2num<std::int16_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_3i32() { return ::ntl::impl::chars2num<std::int32_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_3i64() { return ::ntl::impl::chars2num<std::int64_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_3u8() { return ::ntl::impl::chars2num<std::uint8_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_3u16() { return ::ntl::impl::chars2num<std::uint16_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_3u32() { return ::ntl::impl::chars2num<std::uint32_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_3u64() { return ::ntl::impl::chars2num<std::uint64_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_3zu() { return ::ntl::impl::chars2num<std::size_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_3z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 3, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_4() { return ::ntl::impl::chars2num<int, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_4i8() { return ::ntl::impl::chars2num<std::int8_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_4i16() { return ::ntl::impl::chars2num<std::int16_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_4i32() { return ::ntl::impl::chars2num<std::int32_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_4i64() { return ::ntl::impl::chars2num<std::int64_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_4u8() { return ::ntl::impl::chars2num<std::uint8_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_4u16() { return ::ntl::impl::chars2num<std::uint16_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_4u32() { return ::ntl::impl::chars2num<std::uint32_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_4u64() { return ::ntl::impl::chars2num<std::uint64_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_4zu() { return ::ntl::impl::chars2num<std::size_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_4z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 4, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_5() { return ::ntl::impl::chars2num<int, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_5i8() { return ::ntl::impl::chars2num<std::int8_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_5i16() { return ::ntl::impl::chars2num<std::int16_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_5i32() { return ::ntl::impl::chars2num<std::int32_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_5i64() { return ::ntl::impl::chars2num<std::int64_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_5u8() { return ::ntl::impl::chars2num<std::uint8_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_5u16() { return ::ntl::impl::chars2num<std::uint16_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_5u32() { return ::ntl::impl::chars2num<std::uint32_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_5u64() { return ::ntl::impl::chars2num<std::uint64_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_5zu() { return ::ntl::impl::chars2num<std::size_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_5z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 5, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_6() { return ::ntl::impl::chars2num<int, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_6i8() { return ::ntl::impl::chars2num<std::int8_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_6i16() { return ::ntl::impl::chars2num<std::int16_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_6i32() { return ::ntl::impl::chars2num<std::int32_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_6i64() { return ::ntl::impl::chars2num<std::int64_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_6u8() { return ::ntl::impl::chars2num<std::uint8_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_6u16() { return ::ntl::impl::chars2num<std::uint16_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_6u32() { return ::ntl::impl::chars2num<std::uint32_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_6u64() { return ::ntl::impl::chars2num<std::uint64_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_6zu() { return ::ntl::impl::chars2num<std::size_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_6z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 6, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_7() { return ::ntl::impl::chars2num<int, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_7i8() { return ::ntl::impl::chars2num<std::int8_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_7i16() { return ::ntl::impl::chars2num<std::int16_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_7i32() { return ::ntl::impl::chars2num<std::int32_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_7i64() { return ::ntl::impl::chars2num<std::int64_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_7u8() { return ::ntl::impl::chars2num<std::uint8_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_7u16() { return ::ntl::impl::chars2num<std::uint16_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_7u32() { return ::ntl::impl::chars2num<std::uint32_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_7u64() { return ::ntl::impl::chars2num<std::uint64_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_7zu() { return ::ntl::impl::chars2num<std::size_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_7z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 7, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_8() { return ::ntl::impl::chars2num<int, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_8i8() { return ::ntl::impl::chars2num<std::int8_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_8i16() { return ::ntl::impl::chars2num<std::int16_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_8i32() { return ::ntl::impl::chars2num<std::int32_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_8i64() { return ::ntl::impl::chars2num<std::int64_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_8u8() { return ::ntl::impl::chars2num<std::uint8_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_8u16() { return ::ntl::impl::chars2num<std::uint16_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_8u32() { return ::ntl::impl::chars2num<std::uint32_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_8u64() { return ::ntl::impl::chars2num<std::uint64_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_8zu() { return ::ntl::impl::chars2num<std::size_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_8z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 8, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_9() { return ::ntl::impl::chars2num<int, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_9i8() { return ::ntl::impl::chars2num<std::int8_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_9i16() { return ::ntl::impl::chars2num<std::int16_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_9i32() { return ::ntl::impl::chars2num<std::int32_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_9i64() { return ::ntl::impl::chars2num<std::int64_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_9u8() { return ::ntl::impl::chars2num<std::uint8_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_9u16() { return ::ntl::impl::chars2num<std::uint16_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_9u32() { return ::ntl::impl::chars2num<std::uint32_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_9u64() { return ::ntl::impl::chars2num<std::uint64_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_9zu() { return ::ntl::impl::chars2num<std::size_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_9z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 9, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_10() { return ::ntl::impl::chars2num<int, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_10i8() { return ::ntl::impl::chars2num<std::int8_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_10i16() { return ::ntl::impl::chars2num<std::int16_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_10i32() { return ::ntl::impl::chars2num<std::int32_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_10i64() { return ::ntl::impl::chars2num<std::int64_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_10u8() { return ::ntl::impl::chars2num<std::uint8_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_10u16() { return ::ntl::impl::chars2num<std::uint16_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_10u32() { return ::ntl::impl::chars2num<std::uint32_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_10u64() { return ::ntl::impl::chars2num<std::uint64_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_10zu() { return ::ntl::impl::chars2num<std::size_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_10z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 10, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_11() { return ::ntl::impl::chars2num<int, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_11i8() { return ::ntl::impl::chars2num<std::int8_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_11i16() { return ::ntl::impl::chars2num<std::int16_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_11i32() { return ::ntl::impl::chars2num<std::int32_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_11i64() { return ::ntl::impl::chars2num<std::int64_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_11u8() { return ::ntl::impl::chars2num<std::uint8_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_11u16() { return ::ntl::impl::chars2num<std::uint16_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_11u32() { return ::ntl::impl::chars2num<std::uint32_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_11u64() { return ::ntl::impl::chars2num<std::uint64_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_11zu() { return ::ntl::impl::chars2num<std::size_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_11z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 11, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_12() { return ::ntl::impl::chars2num<int, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_12i8() { return ::ntl::impl::chars2num<std::int8_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_12i16() { return ::ntl::impl::chars2num<std::int16_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_12i32() { return ::ntl::impl::chars2num<std::int32_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_12i64() { return ::ntl::impl::chars2num<std::int64_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_12u8() { return ::ntl::impl::chars2num<std::uint8_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_12u16() { return ::ntl::impl::chars2num<std::uint16_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_12u32() { return ::ntl::impl::chars2num<std::uint32_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_12u64() { return ::ntl::impl::chars2num<std::uint64_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_12zu() { return ::ntl::impl::chars2num<std::size_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_12z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 12, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_13() { return ::ntl::impl::chars2num<int, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_13i8() { return ::ntl::impl::chars2num<std::int8_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_13i16() { return ::ntl::impl::chars2num<std::int16_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_13i32() { return ::ntl::impl::chars2num<std::int32_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_13i64() { return ::ntl::impl::chars2num<std::int64_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_13u8() { return ::ntl::impl::chars2num<std::uint8_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_13u16() { return ::ntl::impl::chars2num<std::uint16_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_13u32() { return ::ntl::impl::chars2num<std::uint32_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_13u64() { return ::ntl::impl::chars2num<std::uint64_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_13zu() { return ::ntl::impl::chars2num<std::size_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_13z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 13, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_14() { return ::ntl::impl::chars2num<int, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_14i8() { return ::ntl::impl::chars2num<std::int8_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_14i16() { return ::ntl::impl::chars2num<std::int16_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_14i32() { return ::ntl::impl::chars2num<std::int32_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_14i64() { return ::ntl::impl::chars2num<std::int64_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_14u8() { return ::ntl::impl::chars2num<std::uint8_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_14u16() { return ::ntl::impl::chars2num<std::uint16_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_14u32() { return ::ntl::impl::chars2num<std::uint32_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_14u64() { return ::ntl::impl::chars2num<std::uint64_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_14zu() { return ::ntl::impl::chars2num<std::size_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_14z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 14, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_15() { return ::ntl::impl::chars2num<int, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_15i8() { return ::ntl::impl::chars2num<std::int8_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_15i16() { return ::ntl::impl::chars2num<std::int16_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_15i32() { return ::ntl::impl::chars2num<std::int32_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_15i64() { return ::ntl::impl::chars2num<std::int64_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_15u8() { return ::ntl::impl::chars2num<std::uint8_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_15u16() { return ::ntl::impl::chars2num<std::uint16_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_15u32() { return ::ntl::impl::chars2num<std::uint32_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_15u64() { return ::ntl::impl::chars2num<std::uint64_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_15zu() { return ::ntl::impl::chars2num<std::size_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_15z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 15, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_16() { return ::ntl::impl::chars2num<int, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_16i8() { return ::ntl::impl::chars2num<std::int8_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_16i16() { return ::ntl::impl::chars2num<std::int16_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_16i32() { return ::ntl::impl::chars2num<std::int32_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_16i64() { return ::ntl::impl::chars2num<std::int64_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_16u8() { return ::ntl::impl::chars2num<std::uint8_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_16u16() { return ::ntl::impl::chars2num<std::uint16_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_16u32() { return ::ntl::impl::chars2num<std::uint32_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_16u64() { return ::ntl::impl::chars2num<std::uint64_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_16zu() { return ::ntl::impl::chars2num<std::size_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_16z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 16, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_17() { return ::ntl::impl::chars2num<int, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_17i8() { return ::ntl::impl::chars2num<std::int8_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_17i16() { return ::ntl::impl::chars2num<std::int16_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_17i32() { return ::ntl::impl::chars2num<std::int32_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_17i64() { return ::ntl::impl::chars2num<std::int64_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_17u8() { return ::ntl::impl::chars2num<std::uint8_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_17u16() { return ::ntl::impl::chars2num<std::uint16_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_17u32() { return ::ntl::impl::chars2num<std::uint32_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_17u64() { return ::ntl::impl::chars2num<std::uint64_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_17zu() { return ::ntl::impl::chars2num<std::size_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_17z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 17, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_18() { return ::ntl::impl::chars2num<int, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_18i8() { return ::ntl::impl::chars2num<std::int8_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_18i16() { return ::ntl::impl::chars2num<std::int16_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_18i32() { return ::ntl::impl::chars2num<std::int32_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_18i64() { return ::ntl::impl::chars2num<std::int64_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_18u8() { return ::ntl::impl::chars2num<std::uint8_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_18u16() { return ::ntl::impl::chars2num<std::uint16_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_18u32() { return ::ntl::impl::chars2num<std::uint32_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_18u64() { return ::ntl::impl::chars2num<std::uint64_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_18zu() { return ::ntl::impl::chars2num<std::size_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_18z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 18, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_19() { return ::ntl::impl::chars2num<int, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_19i8() { return ::ntl::impl::chars2num<std::int8_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_19i16() { return ::ntl::impl::chars2num<std::int16_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_19i32() { return ::ntl::impl::chars2num<std::int32_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_19i64() { return ::ntl::impl::chars2num<std::int64_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_19u8() { return ::ntl::impl::chars2num<std::uint8_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_19u16() { return ::ntl::impl::chars2num<std::uint16_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_19u32() { return ::ntl::impl::chars2num<std::uint32_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_19u64() { return ::ntl::impl::chars2num<std::uint64_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_19zu() { return ::ntl::impl::chars2num<std::size_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_19z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 19, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_20() { return ::ntl::impl::chars2num<int, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_20i8() { return ::ntl::impl::chars2num<std::int8_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_20i16() { return ::ntl::impl::chars2num<std::int16_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_20i32() { return ::ntl::impl::chars2num<std::int32_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_20i64() { return ::ntl::impl::chars2num<std::int64_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_20u8() { return ::ntl::impl::chars2num<std::uint8_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_20u16() { return ::ntl::impl::chars2num<std::uint16_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_20u32() { return ::ntl::impl::chars2num<std::uint32_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_20u64() { return ::ntl::impl::chars2num<std::uint64_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_20zu() { return ::ntl::impl::chars2num<std::size_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_20z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 20, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_21() { return ::ntl::impl::chars2num<int, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_21i8() { return ::ntl::impl::chars2num<std::int8_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_21i16() { return ::ntl::impl::chars2num<std::int16_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_21i32() { return ::ntl::impl::chars2num<std::int32_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_21i64() { return ::ntl::impl::chars2num<std::int64_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_21u8() { return ::ntl::impl::chars2num<std::uint8_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_21u16() { return ::ntl::impl::chars2num<std::uint16_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_21u32() { return ::ntl::impl::chars2num<std::uint32_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_21u64() { return ::ntl::impl::chars2num<std::uint64_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_21zu() { return ::ntl::impl::chars2num<std::size_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_21z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 21, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_22() { return ::ntl::impl::chars2num<int, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_22i8() { return ::ntl::impl::chars2num<std::int8_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_22i16() { return ::ntl::impl::chars2num<std::int16_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_22i32() { return ::ntl::impl::chars2num<std::int32_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_22i64() { return ::ntl::impl::chars2num<std::int64_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_22u8() { return ::ntl::impl::chars2num<std::uint8_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_22u16() { return ::ntl::impl::chars2num<std::uint16_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_22u32() { return ::ntl::impl::chars2num<std::uint32_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_22u64() { return ::ntl::impl::chars2num<std::uint64_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_22zu() { return ::ntl::impl::chars2num<std::size_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_22z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 22, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_23() { return ::ntl::impl::chars2num<int, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_23i8() { return ::ntl::impl::chars2num<std::int8_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_23i16() { return ::ntl::impl::chars2num<std::int16_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_23i32() { return ::ntl::impl::chars2num<std::int32_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_23i64() { return ::ntl::impl::chars2num<std::int64_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_23u8() { return ::ntl::impl::chars2num<std::uint8_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_23u16() { return ::ntl::impl::chars2num<std::uint16_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_23u32() { return ::ntl::impl::chars2num<std::uint32_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_23u64() { return ::ntl::impl::chars2num<std::uint64_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_23zu() { return ::ntl::impl::chars2num<std::size_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_23z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 23, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_24() { return ::ntl::impl::chars2num<int, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_24i8() { return ::ntl::impl::chars2num<std::int8_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_24i16() { return ::ntl::impl::chars2num<std::int16_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_24i32() { return ::ntl::impl::chars2num<std::int32_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_24i64() { return ::ntl::impl::chars2num<std::int64_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_24u8() { return ::ntl::impl::chars2num<std::uint8_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_24u16() { return ::ntl::impl::chars2num<std::uint16_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_24u32() { return ::ntl::impl::chars2num<std::uint32_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_24u64() { return ::ntl::impl::chars2num<std::uint64_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_24zu() { return ::ntl::impl::chars2num<std::size_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_24z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 24, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_25() { return ::ntl::impl::chars2num<int, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_25i8() { return ::ntl::impl::chars2num<std::int8_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_25i16() { return ::ntl::impl::chars2num<std::int16_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_25i32() { return ::ntl::impl::chars2num<std::int32_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_25i64() { return ::ntl::impl::chars2num<std::int64_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_25u8() { return ::ntl::impl::chars2num<std::uint8_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_25u16() { return ::ntl::impl::chars2num<std::uint16_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_25u32() { return ::ntl::impl::chars2num<std::uint32_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_25u64() { return ::ntl::impl::chars2num<std::uint64_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_25zu() { return ::ntl::impl::chars2num<std::size_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_25z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 25, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_26() { return ::ntl::impl::chars2num<int, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_26i8() { return ::ntl::impl::chars2num<std::int8_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_26i16() { return ::ntl::impl::chars2num<std::int16_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_26i32() { return ::ntl::impl::chars2num<std::int32_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_26i64() { return ::ntl::impl::chars2num<std::int64_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_26u8() { return ::ntl::impl::chars2num<std::uint8_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_26u16() { return ::ntl::impl::chars2num<std::uint16_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_26u32() { return ::ntl::impl::chars2num<std::uint32_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_26u64() { return ::ntl::impl::chars2num<std::uint64_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_26zu() { return ::ntl::impl::chars2num<std::size_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_26z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 26, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_27() { return ::ntl::impl::chars2num<int, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_27i8() { return ::ntl::impl::chars2num<std::int8_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_27i16() { return ::ntl::impl::chars2num<std::int16_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_27i32() { return ::ntl::impl::chars2num<std::int32_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_27i64() { return ::ntl::impl::chars2num<std::int64_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_27u8() { return ::ntl::impl::chars2num<std::uint8_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_27u16() { return ::ntl::impl::chars2num<std::uint16_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_27u32() { return ::ntl::impl::chars2num<std::uint32_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_27u64() { return ::ntl::impl::chars2num<std::uint64_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_27zu() { return ::ntl::impl::chars2num<std::size_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_27z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 27, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_28() { return ::ntl::impl::chars2num<int, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_28i8() { return ::ntl::impl::chars2num<std::int8_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_28i16() { return ::ntl::impl::chars2num<std::int16_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_28i32() { return ::ntl::impl::chars2num<std::int32_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_28i64() { return ::ntl::impl::chars2num<std::int64_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_28u8() { return ::ntl::impl::chars2num<std::uint8_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_28u16() { return ::ntl::impl::chars2num<std::uint16_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_28u32() { return ::ntl::impl::chars2num<std::uint32_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_28u64() { return ::ntl::impl::chars2num<std::uint64_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_28zu() { return ::ntl::impl::chars2num<std::size_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_28z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 28, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_29() { return ::ntl::impl::chars2num<int, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_29i8() { return ::ntl::impl::chars2num<std::int8_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_29i16() { return ::ntl::impl::chars2num<std::int16_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_29i32() { return ::ntl::impl::chars2num<std::int32_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_29i64() { return ::ntl::impl::chars2num<std::int64_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_29u8() { return ::ntl::impl::chars2num<std::uint8_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_29u16() { return ::ntl::impl::chars2num<std::uint16_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_29u32() { return ::ntl::impl::chars2num<std::uint32_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_29u64() { return ::ntl::impl::chars2num<std::uint64_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_29zu() { return ::ntl::impl::chars2num<std::size_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_29z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 29, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_30() { return ::ntl::impl::chars2num<int, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_30i8() { return ::ntl::impl::chars2num<std::int8_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_30i16() { return ::ntl::impl::chars2num<std::int16_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_30i32() { return ::ntl::impl::chars2num<std::int32_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_30i64() { return ::ntl::impl::chars2num<std::int64_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_30u8() { return ::ntl::impl::chars2num<std::uint8_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_30u16() { return ::ntl::impl::chars2num<std::uint16_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_30u32() { return ::ntl::impl::chars2num<std::uint32_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_30u64() { return ::ntl::impl::chars2num<std::uint64_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_30zu() { return ::ntl::impl::chars2num<std::size_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_30z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 30, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_31() { return ::ntl::impl::chars2num<int, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_31i8() { return ::ntl::impl::chars2num<std::int8_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_31i16() { return ::ntl::impl::chars2num<std::int16_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_31i32() { return ::ntl::impl::chars2num<std::int32_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_31i64() { return ::ntl::impl::chars2num<std::int64_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_31u8() { return ::ntl::impl::chars2num<std::uint8_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_31u16() { return ::ntl::impl::chars2num<std::uint16_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_31u32() { return ::ntl::impl::chars2num<std::uint32_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_31u64() { return ::ntl::impl::chars2num<std::uint64_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_31zu() { return ::ntl::impl::chars2num<std::size_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_31z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 31, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_32() { return ::ntl::impl::chars2num<int, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_32i8() { return ::ntl::impl::chars2num<std::int8_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_32i16() { return ::ntl::impl::chars2num<std::int16_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_32i32() { return ::ntl::impl::chars2num<std::int32_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_32i64() { return ::ntl::impl::chars2num<std::int64_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_32u8() { return ::ntl::impl::chars2num<std::uint8_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_32u16() { return ::ntl::impl::chars2num<std::uint16_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_32u32() { return ::ntl::impl::chars2num<std::uint32_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_32u64() { return ::ntl::impl::chars2num<std::uint64_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_32zu() { return ::ntl::impl::chars2num<std::size_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_32z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 32, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_33() { return ::ntl::impl::chars2num<int, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_33i8() { return ::ntl::impl::chars2num<std::int8_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_33i16() { return ::ntl::impl::chars2num<std::int16_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_33i32() { return ::ntl::impl::chars2num<std::int32_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_33i64() { return ::ntl::impl::chars2num<std::int64_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_33u8() { return ::ntl::impl::chars2num<std::uint8_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_33u16() { return ::ntl::impl::chars2num<std::uint16_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_33u32() { return ::ntl::impl::chars2num<std::uint32_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_33u64() { return ::ntl::impl::chars2num<std::uint64_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_33zu() { return ::ntl::impl::chars2num<std::size_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_33z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 33, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_34() { return ::ntl::impl::chars2num<int, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_34i8() { return ::ntl::impl::chars2num<std::int8_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_34i16() { return ::ntl::impl::chars2num<std::int16_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_34i32() { return ::ntl::impl::chars2num<std::int32_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_34i64() { return ::ntl::impl::chars2num<std::int64_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_34u8() { return ::ntl::impl::chars2num<std::uint8_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_34u16() { return ::ntl::impl::chars2num<std::uint16_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_34u32() { return ::ntl::impl::chars2num<std::uint32_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_34u64() { return ::ntl::impl::chars2num<std::uint64_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_34zu() { return ::ntl::impl::chars2num<std::size_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_34z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 34, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_35() { return ::ntl::impl::chars2num<int, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_35i8() { return ::ntl::impl::chars2num<std::int8_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_35i16() { return ::ntl::impl::chars2num<std::int16_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_35i32() { return ::ntl::impl::chars2num<std::int32_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_35i64() { return ::ntl::impl::chars2num<std::int64_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_35u8() { return ::ntl::impl::chars2num<std::uint8_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_35u16() { return ::ntl::impl::chars2num<std::uint16_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_35u32() { return ::ntl::impl::chars2num<std::uint32_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_35u64() { return ::ntl::impl::chars2num<std::uint64_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_35zu() { return ::ntl::impl::chars2num<std::size_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_35z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 35, Chars...>; }

	template<char... Chars>
	inline constexpr int operator ""_36() { return ::ntl::impl::chars2num<int, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::int8_t operator ""_36i8() { return ::ntl::impl::chars2num<std::int8_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::int16_t operator ""_36i16() { return ::ntl::impl::chars2num<std::int16_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::int32_t operator ""_36i32() { return ::ntl::impl::chars2num<std::int32_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::int64_t operator ""_36i64() { return ::ntl::impl::chars2num<std::int64_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint8_t operator ""_36u8() { return ::ntl::impl::chars2num<std::uint8_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint16_t operator ""_36u16() { return ::ntl::impl::chars2num<std::uint16_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint32_t operator ""_36u32() { return ::ntl::impl::chars2num<std::uint32_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::uint64_t operator ""_36u64() { return ::ntl::impl::chars2num<std::uint64_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::size_t operator ""_36zu() { return ::ntl::impl::chars2num<std::size_t, 36, Chars...>; }

	template<char... Chars>
	inline constexpr std::ptrdiff_t operator ""_36z() { return ::ntl::impl::chars2num<std::ptrdiff_t, 36, Chars...>; }
}
