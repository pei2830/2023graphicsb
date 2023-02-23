#include <GL/glut.h>
void display()
{
	glBegin(GL_POLYGON);
        glVertex2f((224-100)/100.0, -(62-100)/100.0 );
        glVertex2f((225-100)/100.0, -(467-100)/100.0 );
        glVertex2f((352-100)/100.0 -(155-100)/100.0 );
        glVertex2f((351-100)/100.0 -(430-100)/100.0 );
        glVertex2f((381-100)/100.0 -(155-100)/100.0 );
        glVertex2f((224-100)/100.0 -(225-100)/100.0 );
    glEnd();

	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week02");
	glutDisplayFunc(display);
	glutMainLoop();
}
