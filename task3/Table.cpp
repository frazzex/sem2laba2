//
// Created by ARTEM on 11.02.2026.
//

#include "Table.h"


void Table::print() {
    for (const auto &line: this->table) {
        for (auto el: line) {
            cout << el << " ";
        }
        cout << endl;
    }
}

int Table::get_value(int row, int col) {
    return this->table[row][col];
}

void Table::set_value(int row, int col, int value) {
    this->table[row][col] = value;
}

unsigned long long Table::n_rows() {
    return this->table.size();
}


unsigned long long Table::n_cols() {
    return this->table[0].size();
}

double Table::average() {
    double sum = 0;
    int el_count = 0;
    for (const auto &row: this->table) {
        for (const int el: row) {
            sum += el;
            el_count++;
        }
    }
    return sum / el_count;
}
