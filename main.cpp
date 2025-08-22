#include <iostream>
#include <fmt/core.h>
#include <algorithm>

int main(int, char**){
    fmt::println("Hello from fmt library.");
    std::cout << "Hello, from vcpkg_2!\n";
    std::cout << "Update" <<std::endl;

    std::string text="hello";
    fmt::format_to(std::back_inserter(text), "{}{}", "_","World");
    std::cout << text << std::endl;

    std::string to_append = "World";

    // Append uppercase version of to_append
    std::transform(to_append.begin(), to_append.end(), std::back_inserter(text),
        [](unsigned char c) { return std::toupper(c); });
    std::cout << "After appending uppercase: " << text << std::endl; // Outputs: HelloWORLD


    return 200;
}
