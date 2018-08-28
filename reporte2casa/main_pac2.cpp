//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}
/*void dcx(float inicio, float fin, float posy,float var)
{

	for (float i = inicio; i <fin; i+=var)
	{
		glVertex3f(i, posy, -1.0f);
	}

}

void dcy(float inicio, float fin, float posx,float var)
{

	for (float i = inicio; i <fin; i +=var)
	{
		glVertex3f(posx,i, -1.0f);
	}

}*/
void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//1
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(19, 193, -0.2);
	glVertex3f(221, 193, -0.2);
	glVertex3f(221, 106, -0.2);
	glVertex3f(19, 106, -0.2);
 glEnd();
 //2
 glBegin(GL_POLYGON);
 glVertex3f(33, 106, -0.2);
 glVertex3f(207, 106, -0.2);
 glVertex3f(207, 63, -0.2);
 glVertex3f(33, 63, -0.2);
 glEnd();
 //3
 glBegin(GL_POLYGON);
 glVertex3f(63, 63, -0.2);
 glVertex3f(178, 63, -0.2);
 glVertex3f(178, 33, -0.2);
 glVertex3f(63, 33, -0.2);

 //4
 glEnd();
 glBegin(GL_POLYGON);
 glVertex3f(92, 33, -0.2);
 glVertex3f(149, 33, -0.2);
 glVertex3f(149, 19, -0.2);
 glVertex3f(92, 19, -0.2);

 glEnd();

 //ojos
 glColor3f(1, 1, 1);
 glBegin(GL_POLYGON);
 glVertex3f(135, 134, -0.2);
 glVertex3f(163, 134, -0.2);
 glVertex3f(163, 62, -0.2);
 glVertex3f(135, 62, -0.2);

 glEnd();

 glBegin(GL_POLYGON);
 glVertex3f(120, 120, -0.2);
 glVertex3f(178, 120, -0.2);
 glVertex3f(178, 76, -0.2);
 glVertex3f(120, 76, -0.2);


 glEnd();
 glColor3f(0, 0, 0);
  glBegin(GL_POLYGON);
  glVertex3f(120, 120, -0.2);
  glVertex3f(150, 120, -0.2);
  glVertex3f(150, 91, -0.2);
  glVertex3f(120, 91, -0.2);
glEnd();

//ojo izquierdo
glColor3f(1, 1, 1);
glBegin(GL_POLYGON);
glVertex3f(47, 134, -0.2);
glVertex3f(76, 134, -0.2);
glVertex3f(76, 62, -0.2);
glVertex3f(47, 62, -0.2);
glEnd();


glBegin(GL_POLYGON);
glVertex3f(32, 120, -0.2);
glVertex3f(91, 120, -0.2);
glVertex3f(91, 76, -0.2);
glVertex3f(32, 76, -0.2);

glEnd();
//negro izq
glColor3f(0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f(32, 120, -0.2);
glVertex3f(61, 120, -0.2);
glVertex3f(61, 90, -0.2);
glVertex3f(32, 90, -0.2);

glEnd();
glBegin(GL_POLYGON);
glVertex3f(47, 63, -0.2);
glVertex3f(61, 63, -0.2);
glVertex3f(61, 48, -0.2);
glVertex3f(47, 47, -0.2);
glEnd();
//detalles izq
glColor3f(1, 0, 0);

glBegin(GL_POLYGON);
glVertex3f(48, 63, -0.2);
glVertex3f(192, 63, -0.2);
glVertex3f(192, 48, -0.2);
glVertex3f(48, 48, -0.2);

glEnd();
//base
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex3f(19, 221, -0.2);
glVertex3f(222, 221, -0.2);
glVertex3f(222, 193, -0.2);
glVertex3f(19, 193, -0.2);


glEnd();
glColor3f(0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f(32, 221, -0.2);
glVertex3f(76, 221, -0.2);
glVertex3f(76, 207, -0.2);
glVertex3f(32, 207, -0.2);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(164, 221, -0.2);
glVertex3f(208, 221, -0.2);
glVertex3f(208, 206, -0.2);
glVertex3f(164, 206, -0.2);

glEnd();
glBegin(GL_POLYGON);
glVertex3f(105, 221, -0.2);
glVertex3f(135, 221, -0.2);
glVertex3f(135, 193, -0.2);
glVertex3f(105, 193, -0.2);

glEnd();

glBegin(GL_POLYGON);
glVertex3f(178, 207, -0.2);
glVertex3f(194, 207, -0.2);
glVertex3f(194, 193, -0.2);
glVertex3f(178, 193, -0.2);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(48, 207, -0.2);
glVertex3f(62, 207, -0.2);
glVertex3f(62, 193, -0.2);
glVertex3f(48, 193, -0.2);
glEnd();






	

	





	
	

	

	glFlush();

}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	//glOrtho(-10,10,-10,10,0.1,2);
	    glOrtho(0,300,300,0,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}


// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (400, 400);	// Tamaño de la Ventana
  glutInitWindowPosition (200,200);	//Posicion de la Ventana
  glutCreateWindow    ("reporte practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

