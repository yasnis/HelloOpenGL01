//
//  main.cpp
//  HelloOpenGL01
//
//  Created by X003575_nishimura on 2014/02/13.
//  Copyright (c) 2014年 Yasuhiko Nishimura. All rights reserved.
//

#include "Angel.h"

void init(void) {
    vec2 points[6] = {
        vec2(-0.5, -0.5),vec2(0.5, -0.5),
        vec2(0.5, 0.5),  vec2(0.5, 0.5),
        vec2(-0.5, 0.5), vec2(-0.5, -0.5)
    };
    
    GLuint vao, buffer;
    glGenVertexArraysAPPLE(1, &vao);
    glBindVertexArrayAPPLE(vao);
    
    
    
}

void display(void) {
    
}

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Hello OpenGL 01");
    
    init();
    
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

