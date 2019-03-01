#include <type_traits>

typedef int Main();

static_assert(std::is_convertible<int, double>::value, "False negative");
static_assert(std::is_convertible<void, void>::value, "False negative");
static_assert(std::is_convertible<Main*, Main*>::value, "False negative");

static_assert(!std::is_convertible<float[], float[]>::value, "False positive");
static_assert(!std::is_convertible<Main, Main>::value, "False positive");
