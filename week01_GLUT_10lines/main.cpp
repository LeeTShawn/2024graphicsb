#include <GL/glut.h> ///使用GLUT外掛

void display() ///自己寫
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///初始化 GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  ///143行

    glutCreateWindow("GLUT Shapes"); ///建立視窗 145行

    glutDisplayFunc(display); ///148 設定要畫圖的display函式

    glutMainLoop(); ///174 主要迴圈
}
