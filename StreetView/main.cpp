#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>

            //ROAD
void road()
{
    glBegin(GL_QUADS);
    glColor3f(0.28f, 0.28f, 0.28f);
    glVertex2i(0,0);
    glVertex2i(0,800);
    glVertex2i(1200,800);
    glVertex2i(1200,0);
    glEnd();

           //CROSSING-LEFT
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,200);
    glVertex2i(450,450);
    glEnd();

     glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(550,200);
    glVertex2i(550,450);
    glEnd();

     glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,240);
    glVertex2i(550,240);
    glEnd();

     glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,280);
    glVertex2i(550,280);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,320);
    glVertex2i(550,320);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,360);
    glVertex2i(550,360);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(450,400);
    glVertex2i(550,400);
    glEnd();

     //CROSSING-RIGHT
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,200);
    glVertex2i(950,450);
    glEnd();

     glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(1050,200);
    glVertex2i(1050,450);
    glEnd();

     glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,240);
    glVertex2i(1050,240);
    glEnd();

     glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,280);
    glVertex2i(1050,280);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,320);
    glVertex2i(1050,320);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,360);
    glVertex2i(1050,360);
    glEnd();

    glLineWidth(19.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(950,400);
    glVertex2i(1050,400);
    glEnd();


    //CROSSING-up
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(600,500);
    glVertex2i(900,500);
    glEnd();

     glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(600,600);
    glVertex2i(900,600);
    glEnd();

     glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(630,500);
    glVertex2i(630,600);
    glEnd();

     glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(690,500);
    glVertex2i(690,600);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(750,500);
    glVertex2i(750,600);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(810,500);
    glVertex2i(810,600);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(870,500);
    glVertex2i(870,600);
    glEnd();

    //CROSSING-DOWN
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(600,50);
    glVertex2i(900,50);
    glEnd();

     glLineWidth(6.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(600,150);
    glVertex2i(900,150);
    glEnd();

     glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(630,50);
    glVertex2i(630,150);
    glEnd();

     glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(690,50);
    glVertex2i(690,150);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(750,50);
    glVertex2i(750,150);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(810,50);
    glVertex2i(810,150);
    glEnd();

    glLineWidth(25.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(870,50);
    glVertex2i(870,150);
    glEnd();

}

            //STREETS

            //LEFT-DOWN
void street1()
{
    glBegin(GL_QUADS);
    glColor3f(0.67f, 0.67f, 0.67f);
    glVertex2i(0,0);
    glVertex2i(0,200);
    glVertex2i(600,200);
    glVertex2i(600,0);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(0,200);
    glVertex2i(600,200);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(600,200);
    glVertex2i(600,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.76f, 0.24f);
    glVertex2i(0,0);
    glVertex2i(0,140);
    glVertex2i(540,140);
    glVertex2i(540,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.45f, 0.14f);
    glVertex2i(0,0);
    glVertex2i(0,130);
    glVertex2i(530,130);
    glVertex2i(530,0);
    glEnd();


}

             //LEFT-UP
void street2()
{
    glBegin(GL_QUADS);
    glColor3f(0.67f, 0.67f, 0.67f);
    glVertex2i(0,450);
    glVertex2i(600,450);
    glVertex2i(600,800);
    glVertex2i(0,800);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(600,450);
    glVertex2i(600,800);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(0,450);
    glVertex2i(600,450);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.76f, 0.24f);
    glVertex2i(0,500);
    glVertex2i(540,500);
    glVertex2i(540,800);
    glVertex2i(0,800);
    glEnd();

            //BUILDINGS

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2i(0,500);
    glVertex2i(100,500);
    glVertex2i(100,700);
    glVertex2i(0,700);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.23f, 0.56f, 0.82f);
    glVertex2i(0,500);
    glVertex2i(0,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.23f, 0.56f, 0.82f);
    glVertex2i(30,500);
    glVertex2i(30,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.23f, 0.56f, 0.82f);
    glVertex2i(70,500);
    glVertex2i(70,690);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.46f,0.09f,0.25f);
    glVertex2i(200,500);
    glVertex2i(480,500);
    glVertex2i(480,700);
    glVertex2i(200,700);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(230,500);
    glVertex2i(230,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(270,500);
    glVertex2i(270,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(310,500);
    glVertex2i(310,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(350,500);
    glVertex2i(350,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(390,500);
    glVertex2i(390,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2i(430,500);
    glVertex2i(430,690);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.46f,0.09f,0.25f);
    glVertex2i(210,530);
    glVertex2i(470,530);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.46f,0.09f,0.25f);
    glVertex2i(210,570);
    glVertex2i(470,570);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.46f,0.09f,0.25f);
    glVertex2i(210,610);
    glVertex2i(470,610);
    glEnd();

    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glColor3f(0.46f,0.09f,0.25f);
    glVertex2i(210,650);
    glVertex2i(470,650);
    glEnd();
}

            //RIGHT-DOWN
void street3()
{
    glBegin(GL_QUADS);
    glColor3f(0.67f, 0.67f, 0.67f);
    glVertex2i(900,0);
    glVertex2i(900,200);
    glVertex2i(1200,200);
    glVertex2i(1200,0);
    glEnd();


    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(900,0);
    glVertex2i(900,200);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(900,200);
    glVertex2i(1200,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.76f, 0.24f);
    glVertex2i(950,0);
    glVertex2i(950,150);
    glVertex2i(1200,150);
    glVertex2i(1200,0);
    glEnd();
}

            //RIGHT-UP
void street4()
{
    glBegin(GL_QUADS);
    glColor3f(0.67f, 0.67f, 0.67f);
    glVertex2i(900,450);
    glVertex2i(1200,450);
    glVertex2i(1200,800);
    glVertex2i(900,800);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(900,450);
    glVertex2i(1200,450);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(900,450);
    glVertex2i(900,800);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.76f, 0.24f);
    glVertex2i(950,500);
    glVertex2i(1200,500);
    glVertex2i(1200,800);
    glVertex2i(950,800);
    glEnd();
}

            //VEHICLES

            //TRUCK


void display()

{
        glClearColor(0.99f, 0.99f, 1.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        road();
        street1();
        street2();
        street3();
        street4();



        glFlush();

}


void init()
 {
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glLoadIdentity();
    gluOrtho2D(0,1200,0,720);


}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000,700); // Set the window's initial width & height
    glutInitWindowPosition(20,30);  // Set the window's initial position according to the monitor
    glutCreateWindow("ROADVIEW"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
//    glutTimerFunc(100, updatecar1, 0);
    //glutTimerFunc(90, updatecar2  , 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
