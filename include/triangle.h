//
// Created by ADP on 9/4/20.
//

#ifndef SHAPEVISUALEDITOR_TRIANGLE_H
#define SHAPEVISUALEDITOR_TRIANGLE_H

#include <shape.h>
#include <point.h>

class Triangle: public Shape {
protected:
    Point v1_, v2_, v3_;
    double base_length_;
    double height_;

    double sign(const Point &p1, const Point &p2, const Point &p3) const;
public:
    Triangle(const std::string &name, const Point &vertex, double base_length, double height);
    virtual double compute_area() const;
    virtual double compute_perimeter() const;
    virtual bool is_inside(const Point &p) const;
};


#endif //SHAPEVISUALEDITOR_TRIANGLE_H
