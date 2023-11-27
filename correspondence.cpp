#include <iostream>
#include <unordered_map>
#include <string>

bool canConstruct(std::string ransomLetter, std::string paper);

int main() {
	std::string paper;
	std::string ransomLetter;

	std::cin >> paper;
	std::cin >> ransomLetter;

	std::cout << canConstruct(ransomLetter, paper) << std::endl; 

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