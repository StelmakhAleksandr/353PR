#pragma once

#include "dom/line.h"
#include "dom/page.h"
#include "dom/rectangle.h"
#include "lib/json.hpp"

class JsonObserver : public Observer {
public:
    nlohmann::json json;
    void visit(Page& page) override
    {
        nlohmann::json layersJson;
        for (auto& layer : page.layers_) {
            JsonObserver observer;
            layer.accept(observer);
            layersJson.push_back(observer.json);
        }
        json.emplace("layers", layersJson);
        json.emplace("type", "page");
    }
    void visit(Layer& layer) override
    {
        nlohmann::json shapeJson;
        for (auto& shape : layer.shapes_) {
            JsonObserver observer;
            shape->accept(observer);
            shapeJson.push_back(observer.json);
        }
        json.emplace("shapes", shapeJson);
        json.emplace("type", "layer");
    }
    void visit(Line& line) override
    {
        json.emplace("x", line.x);
        json.emplace("y", line.y);
        json.emplace("type", "Line");
    }
    void visit(Rectangle& rectangle) override
    {
        json.emplace("x", rectangle.x);
        json.emplace("y", rectangle.y);
        json.emplace("type", "Rectangle");
    }
};
