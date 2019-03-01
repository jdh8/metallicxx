#include <type_traits>

static_assert(std::is_void<void>::value, "False negative");
static_assert(std::is_void<const void>::value, "False negative");
static_assert(std::is_void<volatile void>::value, "False negative");
static_assert(std::is_void<const volatile void>::value, "False negative");

class Dummy;

static_assert(!std::is_void<const void*>::value, "False positive");
static_assert(!std::is_void<char>::value, "False positive");
static_assert(!std::is_void<Dummy>::value, "False positive");
