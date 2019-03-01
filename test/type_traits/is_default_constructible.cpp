#include <type_traits>

static_assert(std::is_default_constructible<double>::value, "");
static_assert(std::is_default_constructible<const void*>::value, "");

static_assert(!std::is_default_constructible<int&>::value, "");
static_assert(!std::is_default_constructible<int&&>::value, "");

enum List {};

static_assert(std::is_default_constructible<List>::value, "");
static_assert(std::is_default_constructible<List*>::value, "");
static_assert(!std::is_default_constructible<List&>::value, "");

class Stub {};
struct Custom { Custom(); };

class Private { Private(); };
struct Shadowed { Shadowed(Shadowed&&); };
struct Deleted { Deleted() = delete; };

static_assert(std::is_default_constructible<Stub>::value, "");
static_assert(std::is_default_constructible<Custom>::value, "");

static_assert(!std::is_default_constructible<Private>::value, "");
static_assert(!std::is_default_constructible<Shadowed>::value, "");
static_assert(!std::is_default_constructible<Deleted>::value, "");
