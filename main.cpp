#include <iostream>
#include "task1/Bell.h"
#include "task2/OddEvenSeparator.h"

using namespace std;


void task1() {
    Bell bell;
    for (int i = 0; i < 5; i++) bell.sound();
}

void task2() {
    OddEvenSeparator odd_even_separator;

    while (true) {
        int choice = -1;
        cout << "Выберите действие:\n";
        cout << "1. Добавить элемент\n";
        cout << "2. Напечатать четные числа массива\n";
        cout << "3. Напечатать нечетные числа массива\n";
        cout << "4. Выйти\n";

        cin >> choice;

        switch (choice) {
            case 1: {
                int number;
                cout << "Введите число для добавления:\n";
                cin >> number;
                odd_even_separator.add_number(number);
                break;
            }
            case 2: {
                odd_even_separator.even();
                break;
            }
            case 3: {
                odd_even_separator.odd();
                break;
            }
            case 4:
                return;
            default:
                break;
        }
    }
}

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "ru");

    // Задание 1

    task1();


    // Задание 2

    task2();


    return 0;
}
