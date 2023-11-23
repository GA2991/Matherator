// Copyright A.T. Chamillard. All Rights Reserved.
// main.cpp

#include <iostream>
#include <string>

#include "Matherator.h"

int Operation;
int FirstArgument;
int SecondArgument;

void ExtractTestCaseInfoFromString(std::string SpaceSeparatedString);

int main() {
    Matherator TheMatherator;

    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q') {
        ExtractTestCaseInfoFromString(Input);

        if (Operation == 1) {
            std::cout << TheMatherator.GetNthEvenNumber(FirstArgument) << " ";
        }
        else if (Operation == 2) {
            std::cout << TheMatherator.GetTenthEvenNumber() << " ";
        }
        else if (Operation == 3) {
            TheMatherator.PrintMToN(FirstArgument, SecondArgument);
        }
        else {
            TheMatherator.PrintOneToTen();
        }

        std::getline(std::cin, Input);
    }

    return 0;
}

void ExtractTestCaseInfoFromString(std::string SpaceSeparatedString) {
    int SpaceIndex = SpaceSeparatedString.find(' ');
    Operation = std::stoi(SpaceSeparatedString.substr(0, SpaceIndex));

    SpaceSeparatedString = SpaceSeparatedString.substr(SpaceIndex + 1);
    SpaceIndex = SpaceSeparatedString.find(' ');
    FirstArgument = std::stoi(SpaceSeparatedString.substr(0, SpaceIndex));

    SpaceSeparatedString = SpaceSeparatedString.substr(SpaceIndex + 1);
    SecondArgument = std::stoi(SpaceSeparatedString);
}
