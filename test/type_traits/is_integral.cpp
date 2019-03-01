#include <type_traits>

static_assert(std::is_integral<int>::value, "False negative");
static_assert(std::is_integral<const bool>::value, "False negative");
static_assert(std::is_integral<volatile unsigned>::value, "False negative");

static_assert(!std::is_integral<float>::value, "False positive");
static_assert(!std::is_integral<const void>::value, "False positive");
static_assert(!std::is_integral<volatile void*>::value, "False positive");
