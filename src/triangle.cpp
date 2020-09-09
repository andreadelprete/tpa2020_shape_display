//
// Created by ADP on 9/4/20.
//

#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(const std::string &name, const Point &vertex, double base_length, double height):
Shape(name), v1_(vertex), base_length_(base_length), height_(height){
    v2_.x = v1_.x + base_length;
    v2_.y = v1_.y;
    v3_.x = v1_.x + 0.5*base_length;
    v3_.y = v1_.y + height;

    area_ = 0.5*base_length_*height_;
    perimeter_ = base_length_;

    cout<<name<<". v1="<<v1_.toString()<<" v2="<<v2_.toString()<<" v3="<<v3_.toString()<<endl;
}

double Triangle::compute_area() const {
    return area_;
}

double Triangle::compute_perimeter() const {
    return perimeter_;
}

double Triangle::sign(const Point &p1, const Point &p2, const Point &p3) const
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool Triangle::is_inside(const Point &p) const {
    double d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(p, v1_, v2_);
    d2 = sign(p, v2_, v3_);
    d3 = sign(p, v3_, v1_);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
