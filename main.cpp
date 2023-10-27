#include <iostream>
#include <string>

// Create a program that prompts the user to input a paragraph and a single word, and then searches for or replaces all of the words in the paragraph.
// If the user selects replace, you will prompt the user for further information about the word to replace in the paragraph.
// You will continue to prompt the user to input the paragraph and the word to search for or replace until the user enter the 'q' key to exit,
// at which point your program will terminate and display the message "Program ended," indicating that your software has been terminated.

int main() {

    std::string userInput;
    char userChar = 0; // will hold q, r, s char
    std::string inputSearch;
    std::string inputReplacement;


    while (userChar != 'q') {
        std::cout << "Enter s for search, r for replace, or q to quit: " << std::endl;
        std::cin >> userChar;
        std::cout << userChar << std::endl;
        std::cin.ignore(); // clears the buffer

        if (userChar == 's' || userChar == 'S') {
            std::cout << "Enter a paragraph: " << std::endl;
            std::getline(std::cin, userInput);
            std::cout << userInput << std::endl;

            std::cout << "Enter a word to search: " << std::endl;
            std::cin >> inputSearch;
            std::cout << inputSearch << std::endl;
            int count = 0;

            if (userInput.find(inputSearch) >= 3) {
                userInput.find(inputSearch);
                count = count + 1;
            }

            if (userInput.find(inputSearch) != std::string::npos) {
                userInput.find(inputSearch);
                ++count;
            }

            std::cout << "Occurrences of Word = " << count << std::endl;
        }

        if (userChar == 'r' || userChar == 'R') {
            std::cout << "Enter a paragraph: " << std::endl;
            std::getline(std::cin, userInput);
            std::cout << userInput << std::endl;

            std::cout << "Enter a word to search: " << std::endl;
            std::cin >> inputSearch;
            std::cout << inputSearch << std::endl;

            std::cout << "Enter word to replace: " << std::endl;
            std::cin >> inputReplacement;
            std::cout << inputReplacement << std::endl;

            int count = 0;
            std::cout << "Occurrences of Word = " << count << std::endl;
            std::cout << "New string: " << userInput << std::endl;
        }
    }
    std::cout << "Program terminated.";
    return 0;
}
