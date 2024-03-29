#include <GL/glut.h>
float angle = 0;
void myCube()///改函式
{
    glPushMatrix();
        glScalef(1, 0.3, 0.3);///調大小
        glutSolidCube(0.5);///正方塊
    glPopMatrix();
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glutSolidSphere(0.01, 30, 30);///小球做中心點參考

    glPushMatrix();
        glTranslatef(0.25, 0, 0);///這行是要決定掛在哪裡
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.25, 0, 0);
        myCube();
    glPushMatrix();
        glTranslatef(0.25, 0, 0);///這行是要決定掛在哪裡
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.25, 0, 0);
        myCube();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.25, 0, 0);///這行是要決定掛在哪裡
        glRotatef(angle, 0, 0, 1);
        glTranslatef(-0.25, 0, 0);
        myCube();
    glPushMatrix();
        glTranslatef(-0.25, 0, 0);///這行是要決定掛在哪裡
        glRotatef(angle, 0, 0, 1);
        glTranslatef(-0.25, 0, 0);
        myCube();
        glPopMatrix();
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
