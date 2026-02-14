#include "Box.h"

long long Box::get_serial() const {
    return this->serial;
}

int Box::get_v() const {
    return this->v;
}

int Box::get_w() const {
    return this->w;
}

int Box::compare_by_v(const Box &box) const {
    if (this->v > box.get_v()) return 1;
    if (this->v == box.get_v()) return 0;
    return -1;
}

int Box::compare_by_w(const Box &box) const {
    if (this->w > box.get_w()) return 1;
    if (this->w == box.get_w()) return 0;
    return -1;
}
