#include <optional>

int main()
{
    std::optional<double> x;

    x.value_or(3);

    std::optional<float>().value_or(4);

    x.has_value();

    x = 7;
}
