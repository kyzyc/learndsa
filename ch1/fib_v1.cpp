#include <cstdint>
#include <iostream>

uint64_t fib(uint32_t n) {
    return (n < 2) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
    uint32_t n;
    std::cin >> n;

    std::cout << "fib: " << std::endl;

    for (int i = 0; i <= n; ++i) {
        std::cout << "fib " << i << " : " << fib(i) << std::endl;
    }

    return 0;
}

