//
// Created by ADP on 9/4/20.
//

#include "display.h"
#include <iostream>

using namespace std;

Display::Display(int width, int height):
width_(width), height_(height){
}

void Display::addShape(const Shape &s) {
    shapes_.push_back(&s);
}

void Display::refresh() {
    for(int i=height_; i>=0; --i){
        for(int j=0; j<width_; ++j){
            bool is_full = false;
            for(auto s: shapes_){
                if(s->is_inside(Point(j, i))){
                    is_full = true;
                    break;
                }
            }
            if(is_full)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
