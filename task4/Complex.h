//
// Created by ARTEM on 14.02.2026.
//

#ifndef LABA2_2026_COMPLEX_H
#define LABA2_2026_COMPLEX_H


class Complex {
    double re;
    double im;

public:
    Complex() {
        this->re = 0.0;
        this->im = 0.0;
    }

    Complex(double x, double y) {
        this->re = x;
        this->im = y;
    }

    [[nodiscard]] double get_re() const;

    [[nodiscard]] double get_im() const;

    void set_re(double x);

    void set_im(double y);

    [[nodiscard]] double abs() const;

    [[nodiscard]] double arg() const;

    void print() const;

    void trig_print() const;

    void exp_print() const;

    [[nodiscard]] Complex add(Complex z) const;

    [[nodiscard]] Complex sub(Complex z) const;

    [[nodiscard]] Complex multi(Complex z) const;

    [[nodiscard]] Complex div(Complex z) const;
};


#endif //LABA2_2026_COMPLEX_H
