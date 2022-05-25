#include <fmt/format.h>

#include <cstdio>

template <typename... Args>
constexpr void print(fmt::format_string<Args...> f, Args&&... args) {
    fmt::print(f, std::forward<Args>(args)...);
    std::fflush(stdout);
}
