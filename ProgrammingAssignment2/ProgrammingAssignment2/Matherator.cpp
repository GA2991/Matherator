// Copyright A.T. Chamillard. All Rights Reserved.

// Matherator.cpp

#include "Matherator.h"
#include <iostream>

int Matherator::GetNthEvenNumber(int n) {
    return 2 * n;
}

int Matherator::GetTenthEvenNumber() {
    return 2 * 10;
}

void Matherator::PrintMToN(int m, int n) {
    for (int i = m; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void Matherator::PrintOneToTen() {
    PrintMToN(1, 10);
}
