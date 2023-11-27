#include <iostream>
#include <unordered_map>

bool canConstruct(std::string ransomLetter, std::string paper);

int main() {
	std::cout << canConstruct("aa", "ab") << std::endl; 
    std::cout << canConstruct("aa", "aab") << std::endl;

	return 0;
}

bool canConstruct(std::string ransomLetter, std::string paper) {
    std::unordered_map<char, int> charCount;

    for (char a : paper) {
        charCount[a]++;
    }

    for (char c : ransomLetter) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false; 
        } else {
            charCount[c]--;
        }
    }

    return true;
}