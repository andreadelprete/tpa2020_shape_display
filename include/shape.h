//
// Created by ADP on 9/4/20.
//

#ifndef SHAPEVISUALEDITOR_SHAPE_H
#define SHAPEVISUALEDITOR_SHAPE_H

#include <string>
#include <point.h>

class Shape {
protected:
    std::string name_;
    double area_;
    double perimeter_;
public:
    Shape(const std::string &name);

    virtual double compute_area() const = 0;
    virtual double compute_perimeter() const = 0;
    virtual bool is_inside(const Point &p) const = 0;

};


#endif //SHAPEVISUALEDITOR_SHAPE_H
