#ifndef LABA2_2026_BOX_H
#define LABA2_2026_BOX_H


class Box {
    long long serial;
    int w;
    int v;

public:
    [[nodiscard]] long long get_serial() const;

    [[nodiscard]] int get_w() const;

    [[nodiscard]] int get_v() const;

    Box(long long _serial, int _w, int _v) {
        this->serial = _serial;
        this->w = _w;
        this->v = _v;
    }

    [[nodiscard]] int compare_by_v(const Box &box) const;

    [[nodiscard]] int compare_by_w(const Box &box) const;
};


#endif //LABA2_2026_BOX_H
