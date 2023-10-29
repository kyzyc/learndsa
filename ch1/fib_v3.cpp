#include <cstdint>
#include <iostream>

uint64_t fib(uint32_t n)
{
    if (n < 2) {
        return n;
    }

    uint64_t f{0}, g{1};
    while (--n) {
        g = g + f;
        f = g - f;
    }

    return g;
}


int main()
{
    uint32_t n;
    std::cin >> n;

    std::cout << "fib: iteration" << std::endl;

    for (int i = 0; i <= n; ++i) {
        std::cout << "fib " << i << " : " << fib(i) << std::endl;
    }

    return 0;
}
