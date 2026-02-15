#include <vector>

using namespace std;

#ifndef LABA2_2026_ODDEVENSEPARATOR_H
#define LABA2_2026_ODDEVENSEPARATOR_H


class OddEvenSeparator {
    vector<int> numbers{};

public:
    void add_number(int number);

    void even() const;

    void odd() const;

    void all() const;

    void print() const;
};


#endif //LABA2_2026_ODDEVENSEPARATOR_H
