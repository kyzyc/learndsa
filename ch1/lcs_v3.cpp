#include <iostream>
#include <string>
#include <vector>

int longestCommonSubsequence(std::string text1, std::string text2) {
    std::vector<std::vector<int>> v(text1.size() + 1, std::vector<int>(text2.size() + 1, 0)); 

    for (int i = 1; i <= text1.size(); ++i) {
        for (int j = 1; j <= text2.size(); ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                v[i][j] = v[i - 1][j - 1] + 1;
            } else {
                v[i][j] = std::max(v[i - 1][j], v[i][j - 1]);
            }
        }
    }

    return v[text1.size()][text2.size()];
}

int main()
{
    std::string s1, s2;

    std::cin >> s1 >> s2;

    std::cout << "lcs v3: " << longestCommonSubsequence(s1, s2) << std::endl;

    return 0;
}
