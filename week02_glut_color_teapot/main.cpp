/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GL/glut.h>

void display()
{
    glColor3f(247/255.0,190/255.0,171/255.0);
    glutSolidTeapot( 0.3 );
    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot( 0.2 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week02_glut_color_teapot");

    glutDisplayFunc(display);

    glutMainLoop();
}
