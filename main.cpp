#include <iostream>
#include "task1/Bell.h"
#include "task2/OddEvenSeparator.h"
#include "task3/Table.h"
#include "task5/Stock.h"

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
            case 7: {
                return;
            }

            default:
                break;
        }
    }
}

void task5() {
    Stock stock;
    stock.add(34, 12);
    stock.add(35, 13);
    stock.add(36, 13);
    stock.add(36, 14);
    stock.add(37, 15);
    stock.add(38, 16);
    stock.add(39, 17);
    stock.add(40, 18);
    stock.add(40, 18);
    stock.add(41, 19);
    stock.add(42, 20);
    stock.add(43, 21);
    stock.add(43, 21);
    stock.add(44, 22);
    stock.add(45, 23);
    stock.add(45, 23);
    stock.add(45, 23);


    while (true) {
        int choice = -1;
        cout << "Выберите действие:\n";
        cout << "1. Добавить коробку на склад\n";
        cout << "2. Показать коробки на складе\n";
        cout << "3. Получить номер коробки для опред. грузоподъемности\n";
        cout << "4. Получить номер коробки для опред. объема\n";
        cout << "5. Выход\n";

        cin >> choice;

        switch (choice) {
            case 1: {
                int w, v;
                cout << "Ведите грузоподъемность, а затем объем:\n";
                cin >> w >> v;
                stock.add(w, v);
                break;
            }
            case 2: {
                stock.print();
                break;
            }
            case 3: {

                {
                    int w;
                    cout << "Введите объем для поиска коробки\n";
                    cin >> w;

                    if (w <= 0) {
                        cout << "Объем должен быть больше 0! \n";
                        break;
                    }

                    int target_box_index = stock.get_by_w(w);
                    if (target_box_index == -1) {
                        cout << "Ничего не найдено на складе под данную грузоподъемность\n";
                        break;
                    }
                    Box target_box = stock.get_by_index(target_box_index);

                    cout << "Найдена коробка на складе с серийным номером: " << target_box.get_serial() << endl;
                    stock.remove_by_index(target_box_index);
                    break;
                }
            }
            case 4: {
                int v;
                cout << "Введите объем для поиска коробки\n";
                cin >> v;

                if (v <= 0) {
                    cout << "Объем должен быть больше 0! \n";
                    break;
                }

                int target_box_index = stock.get_by_v(v);
                if (target_box_index == -1) {
                    cout << "Ничего не найдено на складе под данный объем\n";
                    break;
                }
                Box target_box = stock.get_by_index(target_box_index);

                cout << "Найдена коробка на складе с серийным номером: " << target_box.get_serial() << endl;
                stock.remove_by_index(target_box_index);
                break;
            }
            case 5: {
                return;
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

    // task1();


    // Задание 2

    // task2();

    // Задание 3

    // task3();

    // Задание 5

    task5();

    return 0;
}
