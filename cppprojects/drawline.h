#pragma once
#ifndef drawline_h

#endif // !drawline_h
#define drawline_h
#include <iostream>
#include <cmath>
#include <string>
#include <gl/glut.h>
using namespace std;
class line;


void display() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glEnd();
	glFlush();
}
void showl() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("<3");
	glutDisplayFunc(display);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	showl();
	glutMainLoop();
}