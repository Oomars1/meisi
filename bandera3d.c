#include "./bandera3d.h"
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <math.h>
#include <stdlib.h>

float x, y;
void rotar_bandera_3d(unsigned char tecla, int x, int y);

double rotate_y = 0.0f; 
double rotate_x = 0.0f;

void dibuja3d() {
    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, 0.2, -0.001);

    glVertex3f(1.0, 0.2, -0.001);

    glVertex3f(-0.8, 0.2, -0.001);

    glVertex3f(-0.8, 0.2, -0.001);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(1.0, 0.2, -0.1);
    glVertex3f(1.0, 0.5, -0.1);
    glVertex3f(-0.8, 0.5, -0.1);
    glVertex3f(-0.8, 0.2, -0.1);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.5, -0.001);
    glVertex3f(1.0, 0.5, -0.1);
    glVertex3f(1.0, 0.2, -0.1);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex3f(-0.8, 0.2, -0.1);
    glVertex3f(-0.8, 0.5, -0.1);
    glVertex3f(-0.8, 0.5, -0.001);
    glVertex3f(-0.8, 0.2, -0.001);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(1.0, 0.5, -0.1);
    glVertex3f(1.0, 0.5, -0.001);
    glVertex3f(-0.8, 0.5, -0.001);
    glVertex3f(-0.8, 0.5, -0.1);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.2, -0.1);
    glVertex3f(-0.8, 0.2, -0.1);
    glVertex3f(-0.8, 0.2, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(-0.8, 0.2, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.1, -0.1);
    glVertex3f(1.0, 0.2, -0.1);
    glVertex3f(-0.8, 0.2, -0.1);
    glVertex3f(-0.8, -0.1, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.2, -0.1);
    glVertex3f(1.0, -0.1, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.8, -0.1, -0.1);
    glVertex3f(-0.8, 0.2, -0.1);
    glVertex3f(-0.8, 0.2, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.2, -0.1);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(-0.8, 0.2, -0.001);
    glVertex3f(-0.8, 0.2, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, -0.1, -0.1);
    glVertex3f(-0.8, -0.1, -0.1);
    glVertex3f(-0.8, -0.1, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, -0.4, -0.001);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glVertex3f(-0.8, -0.4, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.4, -0.1);
    glVertex3f(1.0, -0.1, -0.1);
    glVertex3f(-0.8, -0.1, -0.1);
    glVertex3f(-0.8, -0.4, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.4, -0.001);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, -0.1, -0.1);
    glVertex3f(1.0, -0.4, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.8, -0.4, -0.1);
    glVertex3f(-0.8, -0.1, -0.1);
    glVertex3f(-0.8, -0.1, -0.001);
    glVertex3f(-0.8, -0.4, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.1, -0.1);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glVertex3f(-0.8, -0.1, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, -0.4, -0.001);
    glVertex3f(1.0, -0.4, -0.1);
    glVertex3f(-0.8, -0.4, -0.1);
    glVertex3f(-0.8, -0.4, -0.001);
    glEnd();
}

void circulo2d(float desde, float puntoX, float puntoY, float radio, int cuantasV, int repite, float z) {

    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);

    for (float j = 0; j < repite; j++) {
        for (float i = desde; i < cuantasV; i += 0.5) {
            x = radio * cos(i) + puntoX;
            y = radio * sin(i) - puntoY;
            glVertex3f(x, y, z);
        }
        radio += 0.01;
    }
    glEnd();

}

void escudo2d() {

    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex3f(-0.02f, -0.015f, 0.002f);
    glVertex3f(0.006f, 0.035f, 0.002f);
    glVertex3f(0.094f, 0.035f, 0.002f);
    glVertex3f(0.12f, -0.015f, 0.002f);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.025, -0.02, 0.0);
    glVertex3f(0.125, -0.02, 0.0);
    glVertex3f(0.05, 0.13, 0.0);


    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.02, -0.015, 0.001);
    glVertex3f(0.12, -0.015, 0.001);
    glVertex3f(0.05, 0.12, 0.001);

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.055f, 0.01f, 0.003);
    glVertex3f(0.1f, 0.01f, 0.003);
    glVertex3f(0.078f, 0.038f, 0.003);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex3f(0.035f, 0.01f, 0.003);
    glVertex3f(0.09f, 0.01f, 0.003);
    glVertex3f(0.065f, 0.043f, 0.003);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.01f, 0.01f, 0.003);
    glVertex3f(0.08f, 0.01f, 0.003);
    glVertex3f(0.05f, 0.045f, 0.003);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.01f, 0.01f, 0.003);
    glVertex3f(0.06f, 0.01f, 0.003);
    glVertex3f(0.035f, 0.05f, 0.003);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.003f, 0.01f, 0.003);
    glVertex3f(0.06f, 0.01f, 0.003);
    glVertex3f(0.02f, 0.055f, 0.003);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex3f(0.047f, 0.02f, 0.003);
    glVertex3f(0.05f, 0.02f, 0.003);
    glVertex3f(0.05f, 0.08f, 0.003);
    glVertex3f(0.047f, 0.08f, 0.003);
    glEnd();

    glColor3f(0.902, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.045f, 0.08f, 0.003);
    glVertex3f(0.055f, 0.08f, 0.003);
    glVertex3f(0.05f, 0.09f, 0.003);
    glEnd();

    circulo2d(0.0, 0.05f, -0.085f, 0.01f, 10, 1, 0.003f);

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.01f, -0.035f, 0.001);
    glVertex3f(0.04f, -0.065f, 0.001);
    glVertex3f(0.038f, -0.045f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.008f, -0.072f, 0.001);
    glVertex3f(0.04f, -0.065f, 0.001);
    glVertex3f(0.025f, -0.08f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.04f, -0.065f, 0.001);
    glVertex3f(0.01f, -0.06f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.018f, -0.025f, 0.001);
    glVertex3f(0.008f, -0.038f, 0.001);
    glVertex3f(0.01f, -0.06f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.043f, -0.055f, 0.001);
    glVertex3f(0.01f, -0.06f, 0.001);
    glVertex3f(-0.014f, -0.072f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.01f, -0.06f, 0.001);
    glVertex3f(-0.027f, -0.043f, 0.001);
    glEnd();



    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.05f, -0.002f, 0.001);
    glVertex3f(-0.023f, -0.02f, 0.001);
    glVertex3f(-0.027f, -0.043f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.08f, -0.022f, 0.001);
    glVertex3f(-0.051f, -0.05f, 0.001);
    glVertex3f(-0.027f, -0.043f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(-0.027f, -0.043f, 0.001);
    glVertex3f(-0.065f, -0.01f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.07f, 0.036f, 0.001);
    glVertex3f(-0.055f, 0.008f, 0.001);
    glVertex3f(-0.066f, -0.01f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.105f, 0.023f, 0.001);
    glVertex3f(-0.085f, -0.01f, 0.001);
    glVertex3f(-0.065f, -0.01f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(-0.065f, -0.01f, 0.001);
    glVertex3f(-0.088f, 0.025f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.085f, 0.07f, 0.001);
    glVertex3f(-0.077f, 0.04f, 0.001);
    glVertex3f(-0.088f, 0.025f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.115f, 0.07f, 0.001);
    glVertex3f(-0.11f, 0.04f, 0.001);
    glVertex3f(-0.088f, 0.025f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(-0.088f, 0.025f, 0.001);
    glVertex3f(-0.099f, 0.065f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.085f, 0.11f, 0.001);
    glVertex3f(-0.083f, 0.08f, 0.001);
    glVertex3f(-0.099f, 0.065f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.115f, 0.11f, 0.001);
    glVertex3f(-0.115f, 0.08f, 0.001);
    glVertex3f(-0.099f, 0.065f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(-0.099f, 0.065f, 0.001);
    glVertex3f(-0.099f, 0.105f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.078f, 0.138f, 0.001);
    glVertex3f(-0.084f, 0.115f, 0.001);
    glVertex3f(-0.099f, 0.105f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.10f, 0.14f, 0.001);
    glVertex3f(-0.108f, 0.12f, 0.001);
    glVertex3f(-0.099f, 0.105f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.04f, -0.065f, 0.001);
    glVertex3f(0.06f, -0.065f, 0.001);
    glEnd();


    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.09f, -0.035f, 0.001);
    glVertex3f(0.06f, -0.065f, 0.001);
    glVertex3f(0.062f, -0.045f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.108f, -0.072f, 0.001);
    glVertex3f(0.06f, -0.065f, 0.001);
    glVertex3f(0.075f, -0.08f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.06f, -0.065f, 0.001);
    glVertex3f(0.09f, -0.06f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.118f, -0.025f, 0.001);
    glVertex3f(0.092f, -0.038f, 0.001);
    glVertex3f(0.09f, -0.06f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.143f, -0.055f, 0.001);
    glVertex3f(0.09f, -0.06f, 0.001);
    glVertex3f(0.114f, -0.072f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.09f, -0.06f, 0.001);
    glVertex3f(0.127f, -0.043f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.15f, -0.002f, 0.001);
    glVertex3f(0.123f, -0.02f, 0.001);
    glVertex3f(0.127f, -0.043f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.18f, -0.022f, 0.001);
    glVertex3f(0.151f, -0.05f, 0.001);
    glVertex3f(0.127f, -0.043f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.127f, -0.043f, 0.001);
    glVertex3f(0.166f, -0.01f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.17f, 0.036f, 0.001);
    glVertex3f(0.155f, 0.008f, 0.001);
    glVertex3f(0.166f, -0.01f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.205f, 0.023f, 0.001);
    glVertex3f(0.185f, -0.01f, 0.001);
    glVertex3f(0.165f, -0.01f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.166f, -0.01f, 0.001);
    glVertex3f(0.188f, 0.025f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.185f, 0.07f, 0.001);
    glVertex3f(0.177f, 0.04f, 0.001);
    glVertex3f(0.188f, 0.025f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.215f, 0.07f, 0.001);
    glVertex3f(0.21f, 0.04f, 0.001);
    glVertex3f(0.188f, 0.025f, 0.001);
    glEnd();
    
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.188f, 0.025f, 0.001);
    glVertex3f(0.199f, 0.065f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.185f, 0.11f, 0.001);
    glVertex3f(0.183f, 0.08f, 0.001);
    glVertex3f(0.199f, 0.065f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.215f, 0.11f, 0.001);
    glVertex3f(0.215f, 0.08f, 0.001);
    glVertex3f(0.199f, 0.065f, 0.001);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex3f(0.199f, 0.065f, 0.001);
    glVertex3f(0.199f, 0.105f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.178f, 0.138f, 0.001);
    glVertex3f(0.184f, 0.115f, 0.001);
    glVertex3f(0.199f, 0.105f, 0.001);
    glEnd();

    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.20f, 0.14f, 0.001);
    glVertex3f(0.208f, 0.12f, 0.001);
    glVertex3f(0.199f, 0.105f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex3f(0.065f, 0.09f, 0.001);
    glVertex3f(0.17f, 0.145f, 0.001);
    glVertex3f(0.175f, 0.14f, 0.001);
    glVertex3f(0.07f, 0.085f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.17f, 0.145f, 0.001);
    glVertex3f(0.175f, 0.140f, 0.001);
    glVertex3f(0.185f, 0.150f, 0.002);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.070f, 0.09f, 0.00);
    glVertex3f(0.17f, 0.145f, 0.00);
    glVertex3f(0.13f, 0.055f, 0.00);
    glVertex3f(0.065f, 0.02f, 0.00);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.095f, 0.1f, 0.001);
    glVertex3f(0.13f, 0.117f, 0.001);
    glVertex3f(0.11f, 0.055f, 0.001);
    glVertex3f(0.097f, 0.036f, 0.00);
    glVertex3f(0.085f, 0.055f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex3f(0.065f, 0.02f, 0.001);
    glVertex3f(0.17f, 0.075f, 0.001);
    glVertex3f(0.175f, 0.07f, 0.001);
    glVertex3f(0.07f, 0.015f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.17f, 0.075f, 0.001);
    glVertex3f(0.175f, 0.07f, 0.001);
    glVertex3f(0.185f, 0.08f, 0.002);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1f, 0.03f, 0.001);
    glVertex3f(0.175f, 0.07f, 0.001);
    glVertex3f(0.15f, 0.01f, 0.001);
    glVertex3f(0.122f, -0.015f, 0.001);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.12f, 0.042f, 0.002);
    glVertex3f(0.145f, 0.055f, 0.002);
    glVertex3f(0.13f, 0.01f, 0.002);
    glVertex3f(0.117f, -0.005f, 0.002);
    glVertex3f(0.106f, 0.015f, 0.002);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex3f(0.035f, 0.09f, 0.001);
    glVertex3f(-0.075f, 0.145f, 0.001);
    glVertex3f(-0.080f, 0.14f, 0.001);
    glVertex3f(0.03f, 0.085f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.075f, 0.145f, 0.001);
    glVertex3f(-0.080f, 0.140f, 0.001);
    glVertex3f(-0.090f, 0.150f, 0.002);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.030f, 0.09f, 0.00);
    glVertex3f(-0.07f, 0.14f, 0.00);
    glVertex3f(-0.04f, 0.055f, 0.00);
    glVertex3f(0.035f, 0.02f, 0.00);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.005f, 0.1f, 0.001);
    glVertex3f(-0.03f, 0.117f, 0.001);
    glVertex3f(-0.01f, 0.055f, 0.001);
    glVertex3f(0.003f, 0.036f, 0.00);
    glVertex3f(0.015f, 0.055f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex3f(0.035f, 0.02f, 0.001);
    glVertex3f(-0.075f, 0.075f, 0.001);
    glVertex3f(-0.080f, 0.07f, 0.001);
    glVertex3f(0.03f, 0.015f, 0.001);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.07f, 0.073f, 0.001);
    glVertex3f(-0.080f, 0.07f, 0.001);
    glVertex3f(-0.090f, 0.08f, 0.002);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, 0.03f, 0.001);
    glVertex3f(-0.075f, 0.07f, 0.001);
    glVertex3f(-0.05f, 0.01f, 0.001);
    glVertex3f(-0.022f, -0.015f, 0.001);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.02f, 0.042f, 0.002);
    glVertex3f(-0.045f, 0.055f, 0.002);
    glVertex3f(-0.03f, 0.01f, 0.002);
    glVertex3f(-0.017f, -0.005f, 0.002);
    glVertex3f(-0.006f, 0.015f, 0.002);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.04, 0.13, 0.00);
    glVertex3f(0.05, 0.16, 0.00);
    glVertex3f(0.06, 0.128, 0.00);
    glVertex3f(0.045, 0.11, 0.00);
    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.048, 0.155, 0.002);
    glVertex3f(0.052, 0.155, 0.002);
    glVertex3f(0.05, 0.17, 0.002);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(0.053, 0.15, 0.001);
    glVertex3f(0.056, 0.14, 0.001);
    glVertex3f(0.053, 0.13, 0.001);
    glVertex3f(0.04, 0.11, 0.001);
    glEnd();
}

void complementos3d() {
    glColor3f(128, 64, 0);
    int lados = 32;
    float radio = 0.05f;
    float altura = 1.5f;
    const float pi = 3.1415926f;
    const float angleStep = 2.0f * pi / lados;
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= lados; ++i) {
        float angle = i * angleStep;
        float x = radio * cos(angle) - 0.85f;
        float z = radio * sin(angle);
        glVertex3f(x, -altura / 2 - 0.2f, z - 0.05f);
    }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    for (int i = lados; i >= 0; --i) {
        float angle = i * angleStep;
        float x = radio * cos(angle) - 0.85f;
        float z = radio * sin(angle);
        glVertex3f(x, altura / 2 - 0.2f, z - 0.05f);
    }
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    for (int i = 0; i <= lados; ++i) {
        float angle = i * angleStep;
        float x = radio * cos(angle) - 0.85f;
        float z = radio * sin(angle);
        glVertex3f(x, -altura / 2 - 0.3f, z - 0.05f);
        glVertex3f(x, altura / 2 - 0.2f, z - 0.05f);
    }
    glEnd();

    radio = 0.08;
    for (int i = 0; i < 50; i++) {
        float lat0 = pi * (-0.5 + (float) (i) / 50);
        float z0 = radio * sin(lat0);
        float zr0 = radio * cos(lat0);
        float lat1 = pi * (-0.5 + (float) (i + 1) / 50);
        float z1 = radio * sin(lat1);
        float zr1 = radio * cos(lat1);

        glBegin(GL_QUAD_STRIP);
        for (int j = 0; j <= 50; j++) {
            float lng = 2 * pi * (float) (j) / 50;
            float x = radio * cos(lng) * cos(lat0);
            float y = radio * sin(lng) * cos(lat0);

            glNormal3f(x - 0.85f, y + 0.6f, z0 - 0.05f);
            glVertex3f(x - 0.85f, y + 0.6f, z0 - 0.05f);

            x = radio * cos(lng) * cos(lat1);
            y = radio * sin(lng) * cos(lat1);

            glNormal3f(x - 0.85f, y + 0.6f, z1 - 0.05f);
            glVertex3f(x - 0.85f, y + 0.6f, z1 - 0.05f);
        }
        glEnd();
    }
}

void inicializar_bandera3d(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
}

void dibujar_bandera3d() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glLoadIdentity();

    gluPerspective(25, 1, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);

    glTranslatef(0, 0, -5);

    glRotatef(rotate_x, 1.0f, 0.0f, 0.0f);

    glRotatef(rotate_y, 0.0f, 1.0f, 0.0f);

    dibuja3d();

    escudo2d();

    complementos3d();

    glFlush();

    glutSwapBuffers();
}

void rotar_bandera_3d(unsigned char tecla, int x, int y) {
    double step = 8.0f;

    switch (tecla) {
        case 'd':
            rotate_y += step;
            break;
        case 'a':
            rotate_y -= step;
            break;
        case 'w':
            rotate_x -= step;
            break;
        case 's':
            rotate_x += step;
            break;
    }
    glutPostRedisplay();
}

const char* get_carnet(void) {
    char *name = "RM19021"; 
}

