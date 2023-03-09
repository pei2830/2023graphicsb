#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();
        glTranslatef(0.5,0,0);//移到右邊去
        glRotatef(angle,0,1,0);//旋轉中
        glColor3f(0,0,1);//藍色的
        glutSolidTeapot( 0.3 );//茶壺
    glPopMatrix();

    glPushMatrix();
        glRotatef(angle,0,1,0);//旋轉中的
        glTranslatef(0.5,0,0);//移到右邊
        glColor3f(1,1,0);//黃色的
        glTranslatef(0,0.5,0);//往上移動
        glutSolidTeapot( 0.3 );//茶壺
	glPopMatrix();

	glutSwapBuffers();
	angle++;//角度++
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week03");

	glutDisplayFunc(display);
    glutIdleFunc(display);
	glutMainLoop();
}
