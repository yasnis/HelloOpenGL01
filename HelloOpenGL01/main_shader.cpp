//
//  main.cpp
//  HelloOpenGL01
//
//  Created by X003575_nishimura on 2014/02/13.
//  Copyright (c) 2014年 Yasuhiko Nishimura. All rights reserved.
//

#include <iostream>
#include <GLUT/GLUT.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Hello OpenGL 01");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

