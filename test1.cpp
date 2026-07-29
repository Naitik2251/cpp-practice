#include <iostream>
int main() {

    std::cout << "write any two numbers" << std::endl;
    int a{};
    int b{};
    std::cin >> a;
    std::cin >> b;

    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
    return 0;
}