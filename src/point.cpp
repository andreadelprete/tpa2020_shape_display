//
// Created by ADP on 9/4/20.
//

#include "point.h"
#include <sstream>
#include <iostream>

using namespace std;

const string Point::toString() const {
    stringstream ss;
    ss<<x<<";"<<y;
    return ss.str().c_str();
}
