#include <iostream>
#include "task1/Bell.h"
#include "task2/OddEvenSeparator.h"
#include "task3/Table.h"

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

void task3() {
    Table table(5, 5);

    while (true) {
        int choice = -1;
        cout << "Выберите действие:\n";
        cout << "1. Вывести таблицу\n";
        cout << "2. Прочитать значение ячейки таблицы\n";
        cout << "3. Записать число в ячейку таблицы\n";
        cout << "4. Вернуть число строк в таблице\n";
        cout << "5. Вернуть число столбцов в таблице\n";
        cout << "6. Вернуть ср. арифметическое всех значений таблицы\n";
        cout << "7. Выход\n";

        cin >> choice;

        switch (choice) {
            case 1: {
                table.print();
                break;
            }
            case 2: {
                int row, col;
                cout << "Введите номер строки, а затем номер столбца элемента, который хотите прочитать:\n";
                cin >> row >> col;
                cout << "Ваш элемент: " << table.get_value(row - 1, col - 1) << endl;
                break;
            }
            case 3: {
                int row, col, value;
                cout <<
                        "Введите номер строки, затем номер столбца элемента и затем значение, которое вы хотите записать:\n";
                cin >> row >> col >> value;
                table.set_value(row - 1, col - 1, value);
                cout << "Вы успешно записали число " << value << endl;
                break;
            }
            case 4: {
                cout << "Число строк: " << table.n_rows() << endl;
                break;
            }

            case 5: {
                cout << "Число столбцов: " << table.n_cols() << endl;
                break;
            }

            case 6: {
                cout << "Среднее арифметическое: " << table.average() << endl;
                break;
            }

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

    // Задание 3

    task3();

    return 0;
}
