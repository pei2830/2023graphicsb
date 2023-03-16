#include <GL/glut.h>
float angle = 0;
void myCube()///改函式
{
    glPushMatrix();
        glScalef(0.5, 0.2, 0.2);///調大小
        glutSolidCube(1);///正方塊
    glPopMatrix();
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glColor3f(1,1,1);///白色的
    glutSolidCube(1);///身體

    glPushMatrix();
        glTranslatef(0.5, 0.5, 0);///掛到右上角去
        glRotatef(angle, 0, 0, 1);///轉它
        glTranslatef(0.25, 0, 0);///往右移動0.25 關節在正中心
        glColor3f(0,1,0);///綠色的
        myCube();///改函式
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.5, 0.5, 0);///掛到左上角去
        glRotatef(angle, 0, 0, 1);///轉它
        glTranslatef(0.25, 0, 0);///往右移動0.25 關節在正中心
        glColor3f(0,1,0);///綠色的
        myCube();///改函式
    glPopMatrix();

	glutSwapBuffers();
	angle++;
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week05");

	glutDisplayFunc(display);
    glutIdleFunc(display);
	glutMainLoop();
}
