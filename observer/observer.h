#pragma once

class Page;
class Layer;
class Line;
class Rectangle;

class Observer {
public:
    virtual void visit(Page& page) = 0;
    virtual void visit(Layer& layer) = 0;
    virtual void visit(Line& line) = 0;
    virtual void visit(Rectangle& rectangle) = 0;
};
