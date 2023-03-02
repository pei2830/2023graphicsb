#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0, Z=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
   glBegin(GL_POLYGON);
   glVertex2f(-0.70, 0.16);
   glVertex2f(-0.69, 0.33);
   glVertex2f(-0.54, 0.35);
   glVertex2f(-0.27, 0.36);
   glVertex2f(-0.09, 0.41);
   glVertex2f(0.13, 0.41);
   glVertex2f(0.38, 0.35);
   glVertex2f(0.60, 0.33);
   glVertex2f(0.65, 0.23);
   glVertex2f(0.65, 0.02);
   glVertex2f(0.53, -0.03);
   glVertex2f(0.45, -0.08);
   glVertex2f(0.33, -0.10);
   glVertex2f(0.09, -0.10);
   glVertex2f(-0.19, -0.08);
   glVertex2f(-0.51, -0.07);
   glVertex2f(-0.61, 0.01);
   glEnd();

	glutSwapBuffers();
}
void mouse(int button,int state,int x, int y)
{
    X = (x-150)/150.0;
    Y =-(y-150)/150.0;
    if(state==GLUT_DOWN)printf("   glVertex2f(%.2f, %.2f);\n", X, Y);
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week03");

    glutMouseFunc(mouse);
	glutDisplayFunc(display);

	glutMainLoop();
}
