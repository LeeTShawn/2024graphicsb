#include <GL/glut.h> ///�ϥ�GLUT�~��

void display() ///�ۤv�g
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///��l�� GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  ///143��

    glutCreateWindow("GLUT Shapes"); ///�إߵ��� 145��

    glutDisplayFunc(display); ///148 �]�w�n�e�Ϫ�display�禡

    glutMainLoop(); ///174 �D�n�j��
}
