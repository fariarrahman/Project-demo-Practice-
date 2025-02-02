#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void display() {

              //defining background green for field
    glClearColor(0.5f, 0.8f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


          //House
      glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.89f, 0.49f, 0.29f);
      glVertex2f(200, 50);
      glVertex2f(500, 50);
      glVertex2f(500, 150);
      glVertex2f(200, 150);
      glEnd();

       glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.89f, 0.49f, 0.29f);
      glVertex2f(200, 50);
      glVertex2f(100, 100);
      glVertex2f(100, 190);
      glVertex2f(200, 150);
      glEnd();


      glBegin(GL_POLYGON);  // Set quad color to black
      glColor3f(0.31f, 0.031f, 0.016f);
      glVertex2f(200, 150);
      glVertex2f(530, 150);
      glVertex2f(500, 250);
      glVertex2f(150, 250);
      glVertex2f(250, 150);
      glEnd();




      glBegin(GL_TRIANGLES);  // Set quad color to black
      glColor3f(0.89f, 0.49f, 0.29f);
      glVertex2f(200, 150);
      glVertex2f(100, 190);
      glVertex2f(150, 250);

      glEnd();

           //door
      glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(350, 50);
      glVertex2f(370, 50);
      glVertex2f(370, 100);
      glVertex2f(350, 100);
      glEnd();

              //window
       glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(400, 100);
      glVertex2f(470, 100);
      glVertex2f(470, 130);
      glVertex2f(400, 130);
      glEnd();

      glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(230, 100);
      glVertex2f(300, 100);
      glVertex2f(300, 130);
      glVertex2f(230, 130);
      glEnd();

              //river
      glBegin(GL_TRIANGLES);  // Set quad color to black
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(450, 0);
      glVertex2f(800, 0);
      glVertex2f(800, 250);

      glEnd();

      //sky
      glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.5f, 0.8f, 1.0f);
      glVertex2f(0, 300);
      glVertex2f(0, 600);
      glVertex2f(800, 600);
      glVertex2f(800, 300);
      glEnd();

      glBegin(GL_QUADS);  // Set quad color to black
      glColor3f(0.89f, 0.49f, 0.29f);
      glVertex2f(0, 50);
      glVertex2f(100, 50);
      glVertex2f(80, 100);
      glVertex2f(20, 100);
      glEnd();



/*glBegin(GL_QUADS);  // Set quad color to black
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0, 400);
glVertex2f(0, 500);
glVertex2f(1000, 500);
glVertex2f(1000, 400);
glEnd();

                glBegin(GL_QUADS);  // Set quad color to green
                glColor3f(0.078f, 0.60, 0.33f);
                glVertex2f(0, 00);
                glVertex2f(0, 200);
                glVertex2f(1000,200);
                glVertex2f(1000,00);
                glEnd();


glBegin(GL_TRIANGLES);  // Set quad color to red
glColor3f(0.89f, .0f, 0.0f);
glVertex2f(0,0);
glVertex2f(0,500);
glVertex2f(400,300);

glEnd();*/




                                                            ;

     glFlush(); // Render now

    }


void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,800,0,600);
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800,600); // Set the window's initial width & height
    glutInitWindowPosition(0,0);  // Set the window's initial position according to the monitor
    glutCreateWindow("Scenario"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
