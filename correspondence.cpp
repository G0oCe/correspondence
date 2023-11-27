#include <iostream>
#include <unordered_map>
#include <string>

bool canConstruct(std::string ransomLetter, std::string paper);

int main() {
    std::cout << std::boolalpha; //Add stream manipulator

	std::string paper;
	std::string ransomLetter;

	std::cin >> paper;
	std::cin >> ransomLetter;

	std::cout << canConstruct(ransomLetter, paper) << std::endl; 

	return 0;
}

bool canConstruct(std::string ransomLetter, std::string paper) {
    // Creating an unordered_map to count the number of each letter in the paper
    std::unordered_map<char, int> charCount;

    for (char a : paper) {
        charCount[a]++;
    }

    // Check if there are enough letters in unordered_map to compose a ransomLetter
    for (char c : ransomLetter) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false; // The letter is missing or there are not enough letters
        } else {
            charCount[c]--;
        }
    }

    return true;
}