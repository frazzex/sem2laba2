#pragma once
#include <iostream>
#include <vector>

using namespace std;

#ifndef LABA2_2026_TABLE_H
#define LABA2_2026_TABLE_H


class Table {
    vector<vector<int> > table;

public:
    Table(int rows, int cols) {
        this->table.assign(rows, vector<int>(cols, 0));
    }


    int get_value(int row, int col);

    void set_value(int row, int col, int value);

    unsigned long long n_rows();

    unsigned long long n_cols();

    void print();

    double average();
};


#endif //LABA2_2026_TABLE_H
