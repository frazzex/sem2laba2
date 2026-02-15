#include <iostream>
#include "task1/Bell.h"
#include "task2/OddEvenSeparator.h"
#include "task3/Table.h"
#include "task4/Complex.h"
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
        cout << "4. Напечатать все числа массива\n";
        cout << "5. Выйти\n";

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
            case 4: {
                odd_even_separator.all();
                break;
            }
            case 5:
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

void task4() {
    Complex z;

    while (true) {
        int choice = 0;

        cout << "Текущее число: ";
        z.print();

        cout << "\nВыберите действие:\n"
             << "1. Задать новое комплексное число\n"
             << "2. Вычислить модуль\n"
             << "3. Вычислить аргумент\n"
             << "4. Вывести в алгебраической форме\n"
             << "5. Вывести в тригонометрической форме\n"
             << "6. Вывести в показательной форме\n"
             << "7. Прибавить другое число\n"
             << "8. Вычесть другое число\n"
             << "9. Умножить на другое число\n"
             << "10. Разделить на другое число\n"
             << "11. Выйти\n\n";

        cin >> choice;

        switch (choice) {
            case 1: {
                double re, im;
                cout << "Введите действительную, а затем мнимую части: ";
                cin >> re >> im;
                z.set_re(re);
                z.set_im(im);
                cout << "Число установлено: \n";
                z.print();
                break;
            }

            case 2: {
                cout << "Модуль числа: " << z.abs() << "\n";
                break;
            }

            case 3: {
                cout << "Аргумент числа: " << z.arg() << endl;
                break;
            }

            case 4: {
                cout << "Алгебраическая форма: ";
                z.print();
                break;
            }

            case 5: {
                cout << "Тригонометрическая форма: ";
                z.trig_print();
                break;
            }

            case 6: {
                cout << "Показательная форма: ";
                z.exp_print();
                break;
            }

            case 7: {
                double re, im;
                cout << "Введите слагаемое (re im): ";
                cin >> re >> im;
                Complex z2(re, im);
                z = z.add(z2);
                cout << "Результат: ";
                z.print();
                break;
            }

            case 8: {
                double re, im;
                cout << "Введите вычитаемое (re im): ";
                cin >> re >> im;
                Complex z2(re, im);
                z = z.sub(z2);
                cout << "Результат: ";
                z.print();
                break;
            }

            case 9: {
                double re, im;
                cout << "Введите множитель (re im): ";
                cin >> re >> im;
                Complex z2(re, im);
                z = z.multi(z2);
                cout << "Результат: ";
                z.print();
                break;
            }

            case 10: {
                double re, im;
                cout << "Введите делитель (re im): ";
                cin >> re >> im;
                Complex z2(re, im);

                if (z2.abs() < 1e-10) {
                    cout << "Нельзя делить на 0!\n";
                } else {
                    z = z.div(z2);
                    cout << "Результат: ";
                    z.print();
                }
                break;
            }

            case 11: {
                return;
            }

            default:
                break;
        }
    }
}

void task5() {
    Stock stock;

    for (int i = 0; i <= 20; i++ ) stock.add(34 + i, 12 + i);

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

    task3();

    // Задание 4

    // task4();

    // Задание 5

    // task5();

    return 0;
}
