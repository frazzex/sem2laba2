#include <iostream>
#include "OddEvenSeparator.h"

void OddEvenSeparator::add_number(int number) {
    this->numbers.emplace_back(number);
}

void OddEvenSeparator::even() {
    cout << "Четные числа:\n";
    for (const int el: this->numbers) if (!(el % 2)) cout << el << " ";
    cout << endl;
}

void OddEvenSeparator::odd() {
    cout << "Нечетные числа:\n";
    for (const int el: this->numbers) if (el % 2) cout << el << " ";
    cout << endl;
}
