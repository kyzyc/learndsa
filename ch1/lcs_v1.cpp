#include <iostream>
#include <string>

int recur(std::string text1, int len1, std::string text2, int len2) {
    if (len1 == 0 || len2 == 0) {
        return 0;
    }

    if (text1.at(len1 - 1) == text2.at(len2 - 1)) {
        return 1 + recur(text1, len1 - 1, text2, len2 - 1);
    } else {
        return std::max(recur(text1, len1 - 1, text2, len2), recur(text1, len1, text2, len2 - 1));
    }
}

int longestCommonSubsequence(std::string text1, std::string text2) {
    return recur(text1, text1.size(), text2, text2.size());
}


int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::cout << "lcs v1: " << longestCommonSubsequence(s1, s2) << std::endl; 

    return 0;
}
