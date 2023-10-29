#include <cstdint>
#include <iostream>
#include <vector>

uint64_t fib(uint32_t n) 
{
    static std::vector<uint64_t> v{0, 1};
    uint64_t ans{};

    if (n < 2)
        ans = n;
    else if (v.size() > n) {
        ans = v[n];
    } else {
        ans = fib(n - 1) + fib(n - 2);
        v.push_back(ans);
    }

    return ans;
}

int main()
{
    uint32_t n;
    std::cin >> n;

    std::cout << "fib: memorization " << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << "fib " << i << " : " << fib(i) << std::endl;
    }

    return 0;
}
