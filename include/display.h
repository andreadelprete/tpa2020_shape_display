//
// Created by ADP on 9/4/20.
//

#ifndef SHAPEVISUALEDITOR_DISPLAY_H
#define SHAPEVISUALEDITOR_DISPLAY_H

#include <shape.h>
#include <vector>

class Display{
protected:
    std::vector<const Shape*> shapes_;
    int width_;
    int height_;

public:
    Display(int width, int height);

    void addShape(const Shape& s);
    void refresh();

};


#endif //SHAPEVISUALEDITOR_DISPLAY_H
