#include <iostream>

using namespace std;

#include "Bell.h"

void Bell::sound() {
    if (this->flag) cout << "ding" << endl;
    if (!this->flag) cout << "dong" << endl;

    this->flag = !this->flag;

}
