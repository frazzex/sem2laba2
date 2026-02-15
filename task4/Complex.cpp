#include "Complex.h"
#include <cmath>
#include <iostream>

using namespace std;

double Complex::get_re() const {
    return this->re;
}

double Complex::get_im() const {
    return this->im;
}

void Complex::set_re(const double x) {
    this->re = x;
}

void Complex::set_im(const double y) {
    this->im = y;
}

double Complex::abs() const {
    return sqrt(this->re * this->re + this->im * this->im);
}

double Complex::arg() const {
    return atan2(this->im, this->re);
}

void Complex::print() const {
    cout << re;
    if (im >= 0) {
        cout << " + " << im << "i";
    } else {
        cout << " - " << -im << "i";
    }
    cout << endl;
}

void Complex::trig_print() const {
    double r = this->abs();
    double phi = this->arg();

    double phi_deg = phi * 180.0 / M_PI;

    cout << r << " * (cos(" << phi_deg << "°) + i sin(" << phi_deg << "°))" << endl;
}

void Complex::exp_print() const {
    double r = this->abs();
    double phi = this->arg();
    double phi_deg = phi * 180.0 / M_PI;

    cout << r << " * e^(i" << phi_deg << "°)" << endl;
}

Complex Complex::add(Complex z) const {
    return Complex(this->re + z.re, this->im + z.im);
}

Complex Complex::sub(Complex z) const {
    return Complex(this->re - z.re, this->im - z.im);
}

Complex Complex::multi(Complex z) const {
    double real = this->re * z.re - this->im * z.im;
    double imag = this->re * z.im + this->im * z.re;  // Исправление: ad + bc
    return Complex(real, imag);
}

Complex Complex::div(Complex z) const {
    double denom = z.re * z.re + z.im * z.im;

    // Защита от деления на ноль
    if (denom == 0.0) {
        cout << "Ошибка: деление на ноль (комплексное число)" << endl;
        return Complex(0, 0);
    }

    double real = (this->re * z.re + this->im * z.im) / denom;
    double imag = (this->im * z.re - this->re * z.im) / denom;

    return Complex(real, imag);
}
