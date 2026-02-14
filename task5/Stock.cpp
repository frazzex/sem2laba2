#pragma once

#include "Stock.h"
#include <vector>
#include <iostream>

using namespace std;

void Stock::add(int w, int v) {
    this->stock.emplace_back(this->generate_serial(), w, v);
}

long long Stock::generate_serial() {
    this->serial_for_boxes++;
    return this->serial_for_boxes;
}

void Stock::print() const {
    cout << "Склад:\n";
    for (auto el: this->stock) {
        cout << "Коробка #" << el.get_serial() << "\t|\t"
                << "Вес: " << el.get_w() << "\t|\t"
                << "Объем: " << el.get_v()
                << endl;
    }
}

Box Stock::get_by_index(int index) const {
    if (index < 0 || this->stock.size() <= index) return Box(-1, -1, -1);
    return this->stock[index];
}

bool Stock::remove_by_index(int index) {
    if (index < 0 || this->stock.size() <= index) return false;

    this->stock.erase(this->stock.begin() + index);
    return true;
}


int Stock::get_by_v(const int min_v) const {
    int best_index = -1;

    for (int i = 0; i < this->stock.size(); i++) {
        if (stock[i].get_v() < min_v) continue;

        if (best_index == -1) {
            best_index = i;
            continue;
        }

        switch (stock[best_index].compare_by_v(stock[i])) {
            case 1: {
                best_index = i;
                break;
            }
            case 0: {
                if (stock[best_index].get_serial() < stock[i].get_serial()) best_index = i;
                break;
            }
            default:
                break;
        }
    }

    return best_index;
}

int Stock::get_by_w(const int min_w) const {
    int best_index = -1;

    for (int i = 0; i < this->stock.size(); i++) {
        if (stock[i].get_w() < min_w) continue;

        if (best_index == -1) {
            best_index = i;
            continue;
        }

        switch (stock[best_index].compare_by_w(stock[i])) {
            case 1: {
                best_index = i;
                break;
            }
            case 0: {
                if (stock[best_index].get_serial() < stock[i].get_serial()) best_index = i;
                break;
            }
            default:
                break;
        }
    }

    return best_index;
}
