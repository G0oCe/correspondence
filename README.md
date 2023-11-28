# Ransom Note Check

This C++ program checks whether a ransom note can be constructed from a given magazine or piece of paper. It takes input for the magazine and the ransom note and outputs a boolean value indicating whether the ransom note can be formed.

## Usage

Compile the program and run the executable. Input the magazine text first, followed by the ransom note text when prompted. The program will then output `true` if the ransom note can be constructed or `false` otherwise.

## Code Overview

The program consists of two main functions:

### `main()`

1. Sets the output stream to display boolean values (`std::boolalpha`).
2. Takes input for the magazine text and ransom note text.
3. Calls the `canConstruct` function with the provided inputs.
4. Outputs the result.

### `canConstruct(std::string ransomLetter, std::string paper)`

1. Initializes an unordered map (`charCount`) to store the count of each character in the magazine.
2. Iterates through each character in the magazine and updates the count in the map.
3. Checks if there are enough characters in the map to construct the ransom note.
4. Returns `true` if the ransom note can be constructed; otherwise, returns `false`.

## Example

### Input
magazine
ransom
### Output
true


## Note

In the example, the magazine contains all the required characters to construct the ransom note, so the output is `true`.

