#include<windows.h>
#include<glut.h>
#include<stdlib.h>

static int d=0;

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glShadeModel(GL_FLAT);
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glRotatef((GLfloat)d,1.0,1.0,1.0);

	glColor3f(1,0.3,0.5);

	glutSolidCone(0.5,0.7,30,50);
	glColor3f(1,1,1);
	glutWireCone(0.5,0.7,30,50);
	glPopMatrix();
	glutSwapBuffers();

}





void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 'd':
		d=(d+10)%360;
		glutPostRedisplay();
		break;
	case'D':
		d=(d-10)%360;
		glutPostRedisplay();
		break;
	default:
		break;
	}
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("CONE....");
	init();
	glutDisplayFunc(display);

	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
