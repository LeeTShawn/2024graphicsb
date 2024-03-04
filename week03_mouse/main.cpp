#include <GL/glut.h> ///使用GLUT外掛
#include <stdio.h>

void display() ///自己寫
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    ///printf("Hello World\n");
    ///printf("%d %d %d\n", button, state, x, y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0);\n", x, y);
    }
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week03 mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
