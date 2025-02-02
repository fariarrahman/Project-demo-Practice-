#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>


void sky()
{
    glBegin(GL_QUADS);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2f(0,500);
    glVertex2f(0,700);
    glVertex2f(1000,700);
    glVertex2f(1000,500);

    glEnd();
}



void lampost()
{
    //lampost1
    //BODY
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100,500);
    glVertex2f(130,500);
    glVertex2f(130,550);
    glVertex2f(100,550);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(90,550);
    glVertex2f(140,550);
    glVertex2f(140,640);
    glVertex2f(90,640);

      //lampost2
      glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(650,500);
    glVertex2f(680,500);
    glVertex2f(680,550);
    glVertex2f(650,550);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(640,550);
    glVertex2f(690,550);
    glVertex2f(690,640);
    glVertex2f(640,640);

    glEnd();
}
void buildings()
{
    //building1
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.81f, 0.98f);
    glVertex2f(0,500);
    glVertex2f(0,680);
    glVertex2f(100,680);
    glVertex2f(100,500);
    glEnd();

    //building2
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(100,500);
    glVertex2f(100,700);
    glVertex2f(300,700);
    glVertex2f(300,500);
    glEnd();

    //building3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.8f);
    glVertex2f(300,500);
    glVertex2f(300,680);
    glVertex2f(600,680);
    glVertex2f(600,500);
    glEnd();

    //building4
    glBegin(GL_QUADS);
    glColor3f(0.70f, 0.0f, 0.3f);
    glVertex2f(600,500);
    glVertex2f(800,500);
    glVertex2f(800,630);
    glVertex2f(600,630);
    glEnd();

    //building5
    glBegin(GL_QUADS);
    glColor3f(1.f, 0.0f, 1.8f);
    glVertex2f(800,500);
    glVertex2f(900,500);
    glVertex2f(900,630);
    glVertex2f(800,630);
    glEnd();

    //building6
    glBegin(GL_QUADS);
    glColor3f(1.7f, 0.8f, 0.8f);
    glVertex2f(900,500);
    glVertex2f(900,700);
    glVertex2f(1000,700);
    glVertex2f(1000,500);
    glEnd();


}

void street()
{
   glBegin(GL_QUADS);
    glColor3f(0.98f, 0.53f, 0.31f);
    glVertex2f(0,400);
    glVertex2f(0,500);
    glVertex2f(1000,500);
    glVertex2f(1000,400);
    glEnd();
}


void road()
{
    glBegin(GL_QUADS);
    glColor3f(0.28f, 0.28f, 0.28f);
    glVertex2f(0,400);
    glVertex2f(0,0);
    glVertex2f(1000,0);
    glVertex2f(1000,400);
    glEnd();
}

   //Car & its movement

GLfloat car1Position = 0;  // Initial position of the car
GLfloat car1Speed = -25;   // Speed of the car (negative for leftward movement)

// Function to draw the car
void car1() {
    glPushMatrix();
    glTranslatef(car1Position, 0.0f, 0.0f); // Translate car based on current position

    // Car upper body
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.80f, 0.0f); // Orange
    glVertex2f(680, 300);
    glVertex2f(830, 300);
    glVertex2f(800, 350);
    glVertex2f(700, 350);
    glEnd();

    // Car lower body
    glBegin(GL_QUADS);
    glColor3f(0.40f, 0.60f, 1.0f); // Blue
    glVertex2f(620, 300);
    glVertex2f(870, 300);
    glVertex2f(870, 235);
    glVertex2f(620, 235);
    glEnd();

    glPopMatrix();
}

// Function to update the car's position
void updatecar1(int value)
{
    car1Position += car1Speed; // Update car position

    // Check if car moves off the left side of the screen
    if (car1Position < -870.0f) { // Reset based on car width and screen boundary
        car1Position = 1200.0f;  // Start again from the rightmost position
    }

    glutPostRedisplay();              // Redisplay the updated scene
    glutTimerFunc(50, updatecar1, 0); // Set timer to call this function again
}




GLfloat car2Position = 0;  // Initial position of the car
GLfloat car2Speed = 25;

//Draw the car
void car2() {
    glPushMatrix();
    glTranslatef(car2Position, 0.0f, 0.0f);
    // Car upper body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.80f, 0.80f);
    glVertex2f(680, 100);
    glVertex2f(830, 100);
    glVertex2f(800, 150);
    glVertex2f(700, 150);
    glEnd();

    // Car lower body
    glBegin(GL_QUADS);
    glColor3f(0.50f, 0.80f, 0.0f);
    glVertex2f(620, 100);
    glVertex2f(870, 100);
    glVertex2f(870, 35);
    glVertex2f(620, 35);
    glEnd();

    glPopMatrix();
}

// Function to update the car's position
void updatecar2(int value) {
    car2Position += car2Speed;


    if (car2Position > 1200.0f) {
        car2Position = -750.0f;
    }

    glutPostRedisplay();              // Redisplay the updated scene
    glutTimerFunc(100, updatecar2, 0); // Set timer to call this function again
}


    void display()

{
                glClearColor(0.99f, 0.99f, 1.0f, 0.0f);
                glClear(GL_COLOR_BUFFER_BIT);


              sky();
              buildings();
              street();
              road();
              car1();
              car2();
              lampost();


                glFlush();

}


void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 700);


}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 700); // Set the window's initial width & height
    glutInitWindowPosition(20,30);  // Set the window's initial position according to the monitor
    glutCreateWindow("ROADVIEW"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(100, updatecar1, 0);
    glutTimerFunc(90, updatecar2  , 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
