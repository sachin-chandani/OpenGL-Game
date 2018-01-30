#include "main.h"

#ifndef BALL_H
#define BALL_H


class Ball {
public:
    Ball() {}
    Ball(float x, float y, float size, int shape, color_t color);
    glm::vec3 position;
    float rotation;
    void draw(glm::mat4 VP);
    void set_position(float x, float y);
    void tick();
    double speed;
    double speedy;
    double acceleration;
    int master;
    bounding_box_t bounding_box();
private:
    VAO *object;
};

#endif // BALL_H
