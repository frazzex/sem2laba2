#pragma once
#include <vector>
#include "Box.h"
using namespace std;

#ifndef LABA2_2026_STOCK_H
#define LABA2_2026_STOCK_H


class Stock {
    vector<Box> stock{};
    long long serial_for_boxes = 0;

    long long generate_serial();

public:
    void add(int w, int v);

    [[nodiscard]] Box get_by_index(int index) const;

    void print() const;

    bool remove_by_index(int index);

    [[nodiscard]] int get_by_w(int min_w) const;

    [[nodiscard]] int get_by_v(int min_v) const;
};


#endif //LABA2_2026_STOCK_H
