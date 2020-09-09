//
// Created by ADP on 9/4/20.
//

#ifndef SHAPEVISUALEDITOR_POINT_H
#define SHAPEVISUALEDITOR_POINT_H

#include <string>

class Point {
public:
    double x;
    double y;
    Point(): x(0.0), y(0.0) {}
    Point(double x, double y): x(x), y(y) {}
    const std::string toString() const;
};


#endif //SHAPEVISUALEDITOR_POINT_H
