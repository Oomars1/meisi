/******* Inicio de las bibliotecas *******/

#include <stdio.h>

#include <math.h>

#include <GL/glut.h>

float x, y;
void keyboard(unsigned char key, int x, int y);
// Variables globales
double rotate_y = 0.0f;
double rotate_x = 0.0f;


/******* Fin de la función display *******/

/*****Función de retrollamada “display()” *****/
void AzulArr() {

    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, 0.2, -0.001);

    glVertex3f(1.0, 0.2, -0.001);

    glVertex3f(-0.8, 0.2, -0.001);

    glVertex3f(-0.8, 0.2, -0.001);

    glEnd();

    /* las función glColor3f() es para asignar el color y en cambio las función glVrtyix3f() es para asignar vértices, con las dos combinadas podemos generar un mosaico  de colores*/

    /*FIN DE LA CARA 1*/
    // LADO TRASERO: 
    glBegin(GL_POLYGON);

    //glColor3f(-0.8, 1.0, -1.6); // color de la cara o tapa

    glVertex3f(1.0, 0.2, -0.2);
    glVertex3f(1.0, 0.5, -0.2);
    glVertex3f(-0.8, 0.5, -0.2);
    glVertex3f(-0.8, 0.2, -0.2);

    glEnd();

    // LADO DERECHO:
    glBegin(GL_POLYGON);
    //glColor3f(1.0, 0.3, 0.1); // color de la cara o tapa
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.5, -0.001);
    glVertex3f(1.0, 0.5, -0.2);
    glVertex3f(1.0, 0.2, -0.2);
    glEnd();

    // LADO IZQUIERDO: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -2.8, 1.0); // color de la cara o tapa
    glVertex3f(-0.8, 0.2, -0.2);
    glVertex3f(-0.8, 0.5, -0.2);
    glVertex3f(-0.8, 0.5, -0.001);
    glVertex3f(-0.8, 0.2, -0.001);
    glEnd();
    // LADO SUPERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -4.0, -0.8); // color de la cara o tapa
    glVertex3f(1.0, 0.5, -0.2);
    glVertex3f(1.0, 0.5, -0.001);
    glVertex3f(-0.8, 0.5, -0.001);
    glVertex3f(-0.8, 0.5, -0.2);
    glEnd();
    // LADO INFERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -3.8, -0.8); // color de la cara o tapa
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.2, -0.2);
    glVertex3f(-0.8, 0.2, -0.2);
    glVertex3f(-0.8, 0.2, -0.001);
    glEnd();

    // glFlush(); //NOTA: dan el efecto de doble-buffer.


}

void AzulAbj() {
    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, -0.4, -0.001); // P1 es rojo

    glVertex3f(1.0, -0.1, -0.001); // P2 es verde

    glVertex3f(-0.8, -0.1, -0.001); // P3 es azul

    glVertex3f(-0.8, -0.4, -0.001); // P4 es morado

    glEnd();

    /* las función glColor3f() es para asignar el color y en cambio las función glVrtyix3f() es para asignar vértices, con las dos combinadas podemos generar un mosaico  de colores*/

    /*FIN DE LA CARA 1*/
    // LADO TRASERO: 
    glBegin(GL_POLYGON);

    //glColor3f(-0.8, 1.0, -1.6); // color de la cara o tapa

    glVertex3f(1.0, -0.4, -0.2);
    glVertex3f(1.0, -0.1, -0.2);
    glVertex3f(-0.8, -0.1, -0.2);
    glVertex3f(-0.8, -0.4, -0.2);

    glEnd();

    // LADO DERECHO:
    glBegin(GL_POLYGON);
    //glColor3f(1.0, 0.3, 0.1); // color de la cara o tapa
    glVertex3f(1.0, -0.4, -0.001);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, -0.1, -0.2);
    glVertex3f(1.0, -0.4, -0.2);
    glEnd();

    // LADO IZQUIERDO: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -2.8, 1.0); // color de la cara o tapa
    glVertex3f(-0.8, -0.4, -0.2);
    glVertex3f(-0.8, -0.1, -0.2);
    glVertex3f(-0.8, -0.1, -0.001);
    glVertex3f(-0.8, -0.4, -0.001);
    glEnd();
    // LADO SUPERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -4.0, -0.8); // color de la cara o tapa
    glVertex3f(1.0, -0.1, -0.2);
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glVertex3f(-0.8, -0.1, -0.2);
    glEnd();
    // LADO INFERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -3.8, -0.8); // color de la cara o tapa
    glVertex3f(1.0, -0.4, -0.001);
    glVertex3f(1.0, -0.4, -0.2);
    glVertex3f(-0.8, -0.4, -0.2);
    glVertex3f(-0.8, -0.4, -0.001);
    glEnd();

    //glFlush(); //NOTA: dan el efecto de doble-buffer.
    //glutSwapBuffers(); //NOTA: dan el efecto de doble-buffer.
}

void circulo2d(float desde, float puntoX, float puntoY, float radio, int cuantasV, int repite, float z) {
   //resplandor
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

void display() {
    // Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Resetear transformaciones

    glLoadIdentity();

    // Establecer la perspectiva
    gluPerspective(15, 1, 0.1, 100);


    glMatrixMode(GL_MODELVIEW); // Selecciona la matriz de transformación de modelo-vista

    // Posicionar la cámara
    glTranslatef(0, 0, -5);

    glRotatef(rotate_x, 1.0f, 0.0f, 0.0f);
    glRotatef(rotate_y, 0.0f, 1.0f, 0.0f);
    /******* Fin de la función rotar  *******/

    /*Inicio de la ubicación y pigmentación de las ras o tapas del cubo*/
    //LADO FRONTAL: lado multicolor

    glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, -0.1, -0.001); // P1 es rojo

    glVertex3f(1.0, 0.2, -0.001); // P2 es verde

    glVertex3f(-0.8, 0.2, -0.001); // P3 es azul

    glVertex3f(-0.8, -0.1, -0.001); // P4 es morado

    glEnd();

    /* las función glColor3f() es para asignar el color y en cambio las función glVrtyix3f() es para asignar vértices, con las dos combinadas podemos generar un mosaico  de colores*/

    /*FIN DE LA CARA 1*/
    // LADO TRASERO: 
    glBegin(GL_POLYGON);

    //glColor3f(-0.8, 1.0, -1.6); // color de la cara o tapa

    glVertex3f(1.0, -0.1, -0.2);
    glVertex3f(1.0, 0.2, -0.2);
    glVertex3f(-0.8, 0.2, -0.2);
    glVertex3f(-0.8, -0.1, -0.2);

    glEnd();

    // LADO DERECHO:
    glBegin(GL_POLYGON);
    //glColor3f(1.0, 0.3, 0.1); // color de la cara o tapa
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(1.0, 0.2, -0.2);
    glVertex3f(1.0, -0.1, -0.2);
    glEnd();

    // LADO IZQUIERDO: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -2.8, 1.0); // color de la cara o tapa
    glVertex3f(-0.8, -0.1, -0.2);
    glVertex3f(-0.8, 0.2, -0.2);
    glVertex3f(-0.8, 0.2, -0.001);
    glVertex3f(-0.8, -0.1, -0.001);
    glEnd();
    // LADO SUPERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -4.0, -0.8); // color de la cara o tapa
    glVertex3f(1.0, 0.2, -0.2);
    glVertex3f(1.0, 0.2, -0.001);
    glVertex3f(-0.8, 0.2, -0.001);
    glVertex3f(-0.8, 0.2, -0.2);
    glEnd();
    // LADO INFERIOR: 
    glBegin(GL_POLYGON);
    //glColor3f(1.0, -3.8, -0.8); // color de la cara o tapa
    glVertex3f(1.0, -0.1, -0.001);
    glVertex3f(1.0, -0.1, -0.2);
    glVertex3f(-0.8, -0.1, -0.2);
    glVertex3f(-0.8, -0.1, -0.001);
    glEnd();


    //---------------------------------------------------------------------------dentro

    //mar
    glColor3f(0, 0, 255);

    glBegin(GL_POLYGON); //dibujaremos lineas

    glVertex3f(-0.014f, -0.015f, 0.002f); //abajo

    glVertex3f(0.006f, 0.035f, 0.002f); //abajo al final

    glVertex3f(0.094f, 0.035f, 0.002f); //arriba inicio

    glVertex3f(0.115f, -0.015f, 0.002f); //abajo

    glEnd();

    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex3f(-0.02, -0.02, 0.0); //este lo ocupamos para mandar un vertice donde tomaremos un punto 
    //base
    glVertex3f(0.12, -0.02, 0.0);
    //alto
    glVertex3f(0.05, 0.15, 0.0);


    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex3f(-0.015, -0.015, 0.001); //este lo ocupamos para mandar un vertice donde tomaremos un punto 
    //base
    glVertex3f(0.115, -0.015, 0.001);
    //alto
    glVertex3f(0.05, 0.14, 0.001);

    //montanias
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
    //gorrito
    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex3f(0.047f, 0.02f, 0.003); //alto
    glVertex3f(0.05f, 0.02f, 0.003);
    glVertex3f(0.05f, 0.08f, 0.003); //ancho abajo
    glVertex3f(0.047f, 0.08f, 0.003);
    glEnd();

    glColor3f(0.902, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.045f, 0.08f, 0.003);
    //base
    glVertex3f(0.055f, 0.08f, 0.003);
    //alto
    glVertex3f(0.05f, 0.09f, 0.003);
    glEnd();

    circulo2d(0.0, 0.05f, -0.085f, 0.01f, 10, 2,  0.003f);
    
    glColor3f(0.902, 0, 0);
    //arcoiris
    glBegin(GL_LINES);
    glVertex3f(0.045f, 0.13f, 0.003);
    //alto
    glVertex3f(0.055f, 0.13f, 0.003);
    glEnd();
    
      glColor3f(0, 0, 1);
    //arcoiris
    glBegin(GL_LINES);
    glVertex3f(0.044f, 0.128f, 0.003);
    //alto
    glVertex3f(0.056f, 0.128f, 0.003);
    glEnd();
    
      glColor3f(1, 0, 0);
    //arcoiris
    glBegin(GL_LINES);
    glVertex3f(0.043f, 0.126f, 0.003);
    //alto
    glVertex3f(0.057f, 0.126f, 0.003);
    glEnd();
    
    
      float radio = 0.15;
    glBegin(GL_POINTS);
    glPointSize(1);
    glColor3f(0, 0, 0);

    for (float i = 6.62; i > 2.8; i -= 0.001) {
        x = radio * cos(i) + 0.05f;
        y = radio * sin(i) + 0.085f;
        glVertex3f(x, y, 0.003);
    }
    glEnd();
    

    AzulArr();

    AzulAbj();



    glFlush(); //NOTA: dan el efecto de doble-buffer.
    glutSwapBuffers(); //NOTA: dan el efecto de doble-buffer.
}

/*fin de la ubicación y pigmentación de las ras o tapas del cubo*/

// Función de retrollamada “specialKeys()”

void keyboard(unsigned char key, int x, int y) {
    double step = 8.0f; // Paso de movimiento

    switch (key) {
        case 'd':
            rotate_y += step; // Mover hacia arriba
            break;
        case 'a':
            rotate_y -= step; // Mover hacia abajo
            break;
        case 'w':
            rotate_x -= step; // Mover hacia la izquierda
            break;
        case 's':
            rotate_x += step; // Mover hacia la derecha
            break;
    }

    // Volver a dibujar la escena con la nueva posición
    glutPostRedisplay();
}

// Función main()

int main(int argc, char* argv[]) {
    // Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc, argv);
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    // Crear ventana
    glutInitWindowPosition(200, 200);
    glutInitWindowSize(700, 700);

    glutCreateWindow("ejemplo"); // titulo del cuadro de ejecución 
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    // Pasar el control de eventos a GLUT
    glutMainLoop();
    // Regresar al sistema operativo
    return 0;
}