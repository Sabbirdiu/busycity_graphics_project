#include <windows.h>
#include <GL/glut.h>

#include<math.h>>
# define PI           3.14159265358979323846



GLfloat z = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;



void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
    {

            speed += 0.1f;


    }

        if (button == GLUT_RIGHT_BUTTON)
    {

            speed -= 0.1f;


    }



    glutPostRedisplay();
}


void update(int value) {

    if(position > 1.70)
        position = -1.70f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(250, update, 0);
}


GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;


void update1(int value) {

    if(position1 > 1.70)
        position1 = -1.70f;

    position1 += speed1;

    glutPostRedisplay();


    glutTimerFunc(500, update1, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;
void update2(int value) {

    if(position2 <-1.70)
        position2 = 1.70f;

    position2 -= speed2;

    glutPostRedisplay();


    glutTimerFunc(500, update2, 0);
}



GLfloat position5 = 0.0f;
GLfloat speed5 = 0.1f;
void update5(int value) {

    if(position5 <-2.50)
        position5 = 2.50f;

    position5 -= speed5;

    glutPostRedisplay();


    glutTimerFunc(200, update5, 0);
}


GLfloat position6 = 0.0f;
GLfloat speed6 = 0.1f;


void update6(int value) {

    if(position6 <- 2.50)
        position6 = 2.50f;

    position6 -= speed6;

    glutPostRedisplay();


    glutTimerFunc(200, update6, 0);
}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void Idle()
{
    glutPostRedisplay();
}

void night()
{
    glClearColor(0.184314f, 0.184314f, 0.309804f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(2.0);

    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255); // Red
    glVertex2f(0.4f, 0.4f);    // x, y
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.35f, 0.6f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(0.9f, 0.8f);
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.75f, 0.7f);
    glVertex2f(-0.9f, 0.5f);
    glEnd();

    glPointSize(3.0);

    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255); // Red
    glVertex2f(0.6f, 0.5f);    // x, y
    glVertex2f(0.4f, 0.9f);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(0.2f, 0.9f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(0.0f, 0.75f);
    glEnd();






glLoadIdentity();
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
    GLfloat x5=.7f;
    GLfloat y5=.7f;
    GLfloat radius5 =.07f;
    GLfloat twicePi5 = 2.0f * PI;
   GLfloat triangleAmount5=100;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x5, y5); // center of circle
    for(int i = 0; i <= triangleAmount5; i++)
    {
        glVertex2f(
            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),
            y5 + (radius5 * sin(i * twicePi5 / triangleAmount5))
        );
    }
    glEnd();








 glLoadIdentity();


glPushMatrix();
 glScalef(0.4,0.4,0);
 glTranslatef(0.0f,1.5f, 0.0f);
glTranslatef(position6, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(234, 229, 229);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.45f, 0.4f);
    glVertex2f(0.45f, 0.5f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.35f, 0.38f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.35f, 0.23f);
    glVertex2f(-0.3f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(117, 69, 160);
    glVertex2f(-0.37f, 0.35f);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f(-0.3f, 0.36f);
    glVertex2f(-0.3f, 0.38f);
    glVertex2f(-0.35f, 0.38f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.35f, 0.35f);
    glVertex2f(-0.33f, 0.38f);
    glVertex2f(-0.33f, 0.35f);
    glVertex2f(-0.31f, 0.38f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(144, 126, 181);
    glVertex2f(-0.25f, 0.26f);
    glVertex2f(-0.23f, 0.24f);
    glVertex2f(-0.23f, 0.24f);
    glVertex2f(-0.18f, 0.24f);
    glVertex2f(-0.18f, 0.24f);
    glVertex2f(-0.16f, 0.26f);
    glVertex2f(-0.16f, 0.26f);
    glVertex2f(-0.16f, 0.36f);
    glVertex2f(-0.16f, 0.36f);
    glVertex2f(-0.18f, 0.38f);
    glVertex2f(-0.18f, 0.38f);
    glVertex2f(-0.23f, 0.38f);
    glVertex2f(-0.23f, 0.38f);
    glVertex2f(-0.25f, 0.36f);
    glVertex2f(-0.25f, 0.36f);
    glVertex2f(-0.25f, 0.26f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(117, 69, 160);
    glVertex2f(0.02f, 0.15f);
    glVertex2f(0.05f, 0.15f);
    glVertex2f(-0.03f, 0.26f);
    glVertex2f(-0.1f, 0.26f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(117, 69, 160);
    glVertex2f(-0.08f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.07f, 0.49f);
    glVertex2f(0.04f, 0.49f);
    glEnd();

    glColor3ub(117, 69, 160); // purple one
    GLfloat x2=-0.09f;
    GLfloat y2=0.35f;
    GLfloat  radius1 =.02f;
     int triangleAmount1 = 100;
    GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x2, y2); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x2 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y2 + (radius1 * sin(i * twicePi1 / triangleAmount1))
        );
    }
    glEnd();
    // Airplane  window
    glColor3ub(117, 69, 160); // purple one
    GLfloat x3=-0.02f;
    GLfloat y3=0.35f;
     radius1 =.02f;
       twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x3, y3); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x3 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y3 + (radius1 * sin(i * twicePi1 / triangleAmount1))
        );
    }
    glEnd();
    // Airplane  window
    glColor3ub(117, 69, 160); // purple one
    GLfloat x4=0.06f;
    GLfloat y4=0.35f;
    radius1 =.02f;
    twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x4, y4); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x4 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y4 + (radius1 * sin(i * twicePi1 / triangleAmount1))
        );
    }
    glEnd();

glPopMatrix();







    glBegin(GL_POLYGON); //mountain
    glColor3ub(53, 79, 1);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(-0.25f, -0.4f);
    glVertex2f(-0.25f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.55f, -0.28f);
    glVertex2f(-0.55f, -0.28f);
    glVertex2f(-0.58f, -0.25f);
    glVertex2f(-0.58f, -0.25f);
    glVertex2f(-0.62f, -0.2f);
    glVertex2f(-0.62f, -0.2f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.9f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //mountain
    glColor3ub(53, 79, 1);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.15f, -0.38f);
    glVertex2f(0.15f, -0.38f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.38f);
    glVertex2f(-0.3f, -0.38f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //mountain
    glColor3ub(53, 79, 1);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();


   glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.2f,-.5f);
   glVertex2f(-.15f,-.5f);
    glVertex2f( -.15f,.85f);
    glVertex2f( -.2f,.85f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.48f);
   glVertex2f(-.17f,-.48f);
    glVertex2f( -.17f,-.42f);
    glVertex2f( -.19f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.38f);
   glVertex2f(-.17f,-.38f);
    glVertex2f( -.17f,-.32f);
    glVertex2f( -.19f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.28f);
   glVertex2f(-.17f,-.28f);
    glVertex2f( -.17f,-.22f);
    glVertex2f( -.19f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.18f);
   glVertex2f(-.17f,-.18f);
    glVertex2f( -.17f,-.12f);
    glVertex2f( -.19f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.08f);
   glVertex2f(-.17f,-.08f);
    glVertex2f( -.17f,-.02f);
    glVertex2f( -.19f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.08f);
   glVertex2f(-.17f,.08f);
    glVertex2f( -.17f,.02f);
    glVertex2f( -.19f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.18f);
   glVertex2f(-.17f,.18f);
    glVertex2f( -.17f,.12f);
    glVertex2f( -.19f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.28f);
   glVertex2f(-.17f,.28f);
    glVertex2f( -.17f,.22f);
    glVertex2f( -.19f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.38f);
   glVertex2f(-.17f,.38f);
    glVertex2f( -.17f,.32f);
    glVertex2f( -.19f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.48f);
   glVertex2f(-.17f,.48f);
    glVertex2f( -.17f,.42f);
    glVertex2f( -.19f,.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.58f);
   glVertex2f(-.17f,.58f);
    glVertex2f( -.17f,.52f);
    glVertex2f( -.19f,.52f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.68f);
   glVertex2f(-.17f,.68f);
    glVertex2f( -.17f,.62f);
    glVertex2f( -.19f,.62f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.78f);
   glVertex2f(-.17f,.78f);
    glVertex2f( -.17f,.72f);
    glVertex2f( -.19f,.72f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.179f,.85f);
   glVertex2f(-.171f,.85f);
    glVertex2f( -.171f,.82f);
    glVertex2f( -.179f,.82f);
    glEnd();







    glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.18f,-.85f);
   glVertex2f(-.17f,-.85f);
    glVertex2f( -.17f,.98f);
    glVertex2f( -.18f,.98f);
    glEnd();




     glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.15f,-.5f);
   glVertex2f(-.1f,-.5f);
    glVertex2f( -.1f,.5f);
    glVertex2f( -.15f,.5f);
    glEnd();


     glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.48f);
   glVertex2f(-.121f,.48f);
    glVertex2f( -.121f,.42f);
    glVertex2f( -.129f,.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.38f);
   glVertex2f(-.121f,.38f);
    glVertex2f( -.121f,.32f);
    glVertex2f( -.129f,.32f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.28f);
   glVertex2f(-.121f,.28f);
    glVertex2f( -.121f,.22f);
    glVertex2f( -.129f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.18f);
   glVertex2f(-.121f,.18f);
    glVertex2f( -.121f,.12f);
    glVertex2f( -.129f,.12f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.08f);
   glVertex2f(-.121f,.08f);
    glVertex2f( -.121f,.02f);
    glVertex2f( -.129f,.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.08f);
   glVertex2f(-.121f,-.08f);
    glVertex2f( -.121f,-.02f);
    glVertex2f( -.129f,-.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.18f);
   glVertex2f(-.121f,-.18f);
    glVertex2f( -.121f,-.12f);
    glVertex2f( -.129f,-.12f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.28f);
   glVertex2f(-.121f,-.28f);
    glVertex2f( -.121f,-.22f);
    glVertex2f( -.129f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.38f);
   glVertex2f(-.121f,-.38f);
    glVertex2f( -.121f,-.32f);
    glVertex2f( -.129f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.48f);
   glVertex2f(-.121f,-.48f);
    glVertex2f( -.121f,-.42f);
    glVertex2f( -.129f,-.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.58f);
   glVertex2f(-.121f,-.58f);
    glVertex2f( -.121f,-.52f);
    glVertex2f( -.129f,-.52f);
    glEnd();





      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.25f,-.5f);
   glVertex2f(-.2f,-.5f);
    glVertex2f( -.2f,.7f);
    glVertex2f( -.25f,.7f);
    glEnd();


      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.3f,-.5f);
   glVertex2f(-.25f,-.5f);
    glVertex2f( -.25f,.3f);
    glVertex2f( -.3f,.3f);
    glEnd();


      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.1f,-.5f);
   glVertex2f(-.05f,-.5f);
    glVertex2f( -.05f,.15f);
    glVertex2f( -.1f,.15f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.35f,-.5f);
   glVertex2f(-.3f,-.5f);
    glVertex2f( -.3f,.05f);
    glVertex2f( -.35f,.05f);
    glEnd();


        glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.48f);
   glVertex2f(-.071f,-.48f);
    glVertex2f( -.071f,-.42f);
    glVertex2f( -.079f,-.42f);
    glEnd();

        glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.38f);
   glVertex2f(-.071f,-.38f);
    glVertex2f( -.071f,-.32f);
    glVertex2f( -.079f,-.32f);
    glEnd();
            glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.28f);
   glVertex2f(-.071f,-.28f);
    glVertex2f( -.071f,-.22f);
    glVertex2f( -.079f,-.22f);
    glEnd();
            glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.18f);
   glVertex2f(-.071f,-.18f);
    glVertex2f( -.071f,-.12f);
    glVertex2f( -.079f,-.12f);
    glEnd();
                glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.08f);
   glVertex2f(-.071f,-.08f);
    glVertex2f( -.071f,-.02f);
    glVertex2f( -.079f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,.08f);
   glVertex2f(-.071f,.08f);
    glVertex2f( -.071f,.02f);
    glVertex2f( -.079f,.02f);
    glEnd();


                  glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.48f);
   glVertex2f(-.221f,-.48f);
    glVertex2f( -.221f,-.42f);
    glVertex2f( -.229f,-.42f);
    glEnd();

                  glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.38f);
   glVertex2f(-.221f,-.38f);
    glVertex2f( -.221f,-.32f);
    glVertex2f( -.229f,-.32f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.28f);
   glVertex2f(-.221f,-.28f);
    glVertex2f( -.221f,-.22f);
    glVertex2f( -.229f,-.22f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.18f);
   glVertex2f(-.221f,-.18f);
    glVertex2f( -.221f,-.12f);
    glVertex2f( -.229f,-.12f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.08f);
   glVertex2f(-.221f,-.08f);
    glVertex2f( -.221f,-.02f);
    glVertex2f( -.229f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.08f);
   glVertex2f(-.221f,.08f);
    glVertex2f( -.221f,.02f);
    glVertex2f( -.229f,.02f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.18f);
   glVertex2f(-.221f,.18f);
    glVertex2f( -.221f,.12f);
    glVertex2f( -.229f,.12f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.28f);
   glVertex2f(-.221f,.28f);
    glVertex2f( -.221f,.22f);
    glVertex2f( -.229f,.22f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.38f);
   glVertex2f(-.221f,.38f);
    glVertex2f( -.221f,.32f);
    glVertex2f( -.229f,.32f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.48f);
   glVertex2f(-.221f,.48f);
    glVertex2f( -.221f,.42f);
    glVertex2f( -.229f,.42f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.58f);
   glVertex2f(-.221f,.58f);
    glVertex2f( -.221f,.52f);
    glVertex2f( -.229f,.52f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.68f);
   glVertex2f(-.221f,.68f);
    glVertex2f( -.221f,.62f);
    glVertex2f( -.229f,.62f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.28f);
   glVertex2f(-.271f,.28f);
    glVertex2f( -.271f,.22f);
    glVertex2f( -.279f,.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.18f);
   glVertex2f(-.271f,.18f);
    glVertex2f( -.271f,.12f);
    glVertex2f( -.279f,.12f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.08f);
   glVertex2f(-.271f,.08f);
    glVertex2f( -.271f,.02f);
    glVertex2f( -.279f,.02f);
    glEnd();

           glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.08f);
   glVertex2f(-.271f,-.08f);
    glVertex2f( -.271f,-.02f);
    glVertex2f( -.279f,-.02f);
    glEnd();
             glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.18f);
   glVertex2f(-.271f,-.18f);
    glVertex2f( -.271f,-.12f);
    glVertex2f( -.279f,-.12f);
    glEnd();
             glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.28f);
   glVertex2f(-.271f,-.28f);
    glVertex2f( -.271f,-.22f);
    glVertex2f( -.279f,-.22f);
    glEnd();
             glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.38f);
   glVertex2f(-.271f,-.38f);
    glVertex2f( -.271f,-.32f);
    glVertex2f( -.279f,-.32f);
    glEnd();
             glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.48f);
   glVertex2f(-.271f,-.48f);
    glVertex2f( -.271f,-.42f);
    glVertex2f( -.279f,-.42f);
    glEnd();






      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.05f,-.5f);
   glVertex2f(-.0f,-.5f);
    glVertex2f( -.0f,-.15f);
    glVertex2f( -.05f,-.15f);
    glEnd();



    glBegin(GL_QUADS); //  tower
    glColor3ub(76, 84, 109);
    glVertex2f(0.77f, -0.5f);
    glVertex2f(0.83f, -0.5f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.77f, -0.3f);
    glEnd();
    glBegin(GL_QUADS); //  tower
    glColor3ub(124, 193, 187);
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.85f, -0.28f);
    glVertex2f(0.75f, -0.28f);
    glEnd();
    glBegin(GL_QUADS); //  tower
    glColor3ub(112, 114, 114);
    glVertex2f(0.75f, -0.28f);
    glVertex2f(0.85f, -0.28f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.7f, -0.2f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(244, 230, 68);
    glVertex2f(0.7f, -0.2f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.9f,  -0.15f);
    glVertex2f(0.7f,  -0.15f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(7, 175, 242);
    glVertex2f(0.7f, -0.15f);
    glVertex2f(0.9f, -0.15f);
    glVertex2f(0.83f,  -0.1f);
    glVertex2f(0.77f,  -0.1f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(139, 141, 142);
    glVertex2f(0.77f, -0.1f);
    glVertex2f(0.83f, -0.1f);
    glVertex2f(0.85f, -0.05f);
    glVertex2f(0.75f,  -0.05f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(242, 199, 7);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.85f, -0.05f);
    glVertex2f(0.85f, -0.07f);
    glVertex2f(0.75f,  -0.07f);
    glEnd();
    glBegin(GL_LINES); //  tower
    glColor3ub(0, 0, 0);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.1f);
    glEnd();
    glColor3ub(9, 239, 224); //  tower
    int i;
    GLfloat x=.8f;
    GLfloat y=.1f;
    GLfloat radius =.02f;
    int triangleAmount = 100;

    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();






glPopMatrix();



    glBegin(GL_QUADS); //  road
    glColor3ub(61, 60, 60);
    glVertex2f(-0.99f, -0.99f);
    glVertex2f(0.99f, -0.99f);
    glVertex2f(0.99f, -0.5f);
    glVertex2f(-0.99f, -0.5f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f, -0.75f);
    glVertex2f(-0.8f, -0.75f);
    glVertex2f(-0.8f, -0.73f);
    glVertex2f(-0.9f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.7f, -0.75f);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.73f);
    glVertex2f(-0.7f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f, -0.75f);
    glVertex2f(-0.4f, -0.75f);
    glVertex2f(-0.4f, -0.73f);
    glVertex2f(-0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.75f);
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.2f, -0.73f);
    glVertex2f(-0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(0.0f, -0.75f);
    glVertex2f(0.0f, -0.73f);
    glVertex2f(-0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.73f);
    glVertex2f(0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.4f, -0.73f);
    glVertex2f(0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.73f);
    glVertex2f(0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, -0.75f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.8f, -0.73f);
    glVertex2f(0.7f, -0.73f);
    glEnd();

    //Bus
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(158, 23, 23);
    glVertex2f(-0.8, -0.65);
    glVertex2f(-0.3, -0.65);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.35, -0.45);
    glVertex2f(-0.8, -0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.37, -0.63);
    glVertex2f(-0.37, -0.5);
    glVertex2f(-0.43, -0.5);
    glVertex2f(-0.43, -0.63);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.46, -0.57);
    glVertex2f(-0.46, -0.5);
    glVertex2f(-0.52, -0.5);
    glVertex2f(-0.52, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.55, -0.57);
    glVertex2f(-0.55, -0.5);
    glVertex2f(-0.61, -0.5);
    glVertex2f(-0.61, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.64, -0.57);
    glVertex2f(-0.64, -0.5);
    glVertex2f(-0.70, -0.5);
    glVertex2f(-0.70, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.73, -0.57);
    glVertex2f(-0.73, -0.5);
    glVertex2f(-0.79, -0.5);
    glVertex2f(-0.79, -0.57);
    glEnd();

    // bus wheel
    // bus second wheel
    glColor3ub(0, 0, 0); // black hole
    GLfloat x6= -0.72f;
    GLfloat y6=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    // bus second inner wheel
        glColor3ub(153, 140, 140); // silver hole
    GLfloat x7= -0.72f;
    GLfloat y7=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
     glColor3ub(0, 0, 0);
    GLfloat x10= -0.52f;
    GLfloat y10=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x10, y10);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x10 + (radius * cos(i *  twicePi / triangleAmount)),
            y10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glColor3ub(153, 140, 140);
    GLfloat x8= -0.52f;
    GLfloat y8=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x8, y8);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


    //CLOUD



  glEnable(GL_LIGHTING);
  GLfloat global_ambient[] = {4.0, 4.0, 4.0, 0.1};
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);


     glLoadIdentity();
    glTranslatef(-0.9f,0.5f, 0.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle60;
    for (int i=0;i<360;i++)
    {
        angle60=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle60),0.0+0.05*sin(angle60));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle61;
    for (int i=0;i<360;i++)
    {
        angle61=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle61),-0.05+0.05*sin(angle61));

    }
    glEnd();



      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle62;
    for (int i=0;i<360;i++)
    {
        angle62=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle62),0.0+0.05*sin(angle62));

    }
    glEnd();


       glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle63;
    for (int i=0;i<360;i++)
    {
        angle63=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle63),-0.05+0.05*sin(angle63));

    }
    glEnd();

    glPopMatrix();

    //CLOUD2


      glLoadIdentity();
    glTranslatef(0.8f,0.8f, 0.0f);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle5;
    for (int i=0;i<360;i++)
    {
        angle5=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle5),0.0+0.05*sin(angle5));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle4;
    for (int i=0;i<360;i++)
    {
        angle4=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle4),-0.05+0.05*sin(angle4));

    }
    glEnd();



      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle3;
    for (int i=0;i<360;i++)
    {
        angle3=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle3),0.0+0.05*sin(angle3));

    }
    glEnd();


       glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle2;
    for (int i=0;i<360;i++)
    {
        angle2=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle2),-0.05+0.05*sin(angle2));

    }
    glEnd();
    glPopMatrix();

     glDisable(GL_LIGHTING);

glLoadIdentity();
 glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 128.0f);
    float angle10;
    for (int i=0;i<360;i++)
    {
        angle10=i*3.1416/180;
        glVertex2f(0.0+0.12*cos(angle10),0.9+0.12*sin(angle10));

    }
    glEnd();




// glutTimerFunc(4500,evening,0);




    glFlush();



    //glFlush();
}



void day()
{
    glClearColor(0.196078f, 0.6f, 0.8f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_POLYGON); //mountain
    glColor3ub(53, 79, 1);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(-0.25f, -0.4f);
    glVertex2f(-0.25f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.55f, -0.28f);
    glVertex2f(-0.55f, -0.28f);
    glVertex2f(-0.58f, -0.25f);
    glVertex2f(-0.58f, -0.25f);
    glVertex2f(-0.62f, -0.2f);
    glVertex2f(-0.62f, -0.2f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.9f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //mountain
    glColor3ub(53, 79, 1);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.15f, -0.38f);
    glVertex2f(0.15f, -0.38f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.25f);
    glVertex2f(-0.3f, -0.38f);
    glVertex2f(-0.3f, -0.38f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(53, 79, 1);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.2f,-.5f);
   glVertex2f(-.15f,-.5f);
    glVertex2f( -.15f,.85f);
    glVertex2f( -.2f,.85f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.48f);
   glVertex2f(-.17f,-.48f);
    glVertex2f( -.17f,-.42f);
    glVertex2f( -.19f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.38f);
   glVertex2f(-.17f,-.38f);
    glVertex2f( -.17f,-.32f);
    glVertex2f( -.19f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.28f);
   glVertex2f(-.17f,-.28f);
    glVertex2f( -.17f,-.22f);
    glVertex2f( -.19f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.18f);
   glVertex2f(-.17f,-.18f);
    glVertex2f( -.17f,-.12f);
    glVertex2f( -.19f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,-.08f);
   glVertex2f(-.17f,-.08f);
    glVertex2f( -.17f,-.02f);
    glVertex2f( -.19f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.08f);
   glVertex2f(-.17f,.08f);
    glVertex2f( -.17f,.02f);
    glVertex2f( -.19f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.18f);
   glVertex2f(-.17f,.18f);
    glVertex2f( -.17f,.12f);
    glVertex2f( -.19f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.28f);
   glVertex2f(-.17f,.28f);
    glVertex2f( -.17f,.22f);
    glVertex2f( -.19f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.38f);
   glVertex2f(-.17f,.38f);
    glVertex2f( -.17f,.32f);
    glVertex2f( -.19f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.48f);
   glVertex2f(-.17f,.48f);
    glVertex2f( -.17f,.42f);
    glVertex2f( -.19f,.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.58f);
   glVertex2f(-.17f,.58f);
    glVertex2f( -.17f,.52f);
    glVertex2f( -.19f,.52f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.68f);
   glVertex2f(-.17f,.68f);
    glVertex2f( -.17f,.62f);
    glVertex2f( -.19f,.62f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.19f,.78f);
   glVertex2f(-.17f,.78f);
    glVertex2f( -.17f,.72f);
    glVertex2f( -.19f,.72f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.179f,.85f);
   glVertex2f(-.171f,.85f);
    glVertex2f( -.171f,.82f);
    glVertex2f( -.179f,.82f);
    glEnd();







    glBegin(GL_QUADS);//tower khalifa antena
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.18f,-.85f);
   glVertex2f(-.17f,-.85f);
    glVertex2f( -.17f,.98f);
    glVertex2f( -.18f,.98f);
    glEnd();




     glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.15f,-.5f);
   glVertex2f(-.1f,-.5f);
    glVertex2f( -.1f,.5f);
    glVertex2f( -.15f,.5f);
    glEnd();


     glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.48f);
   glVertex2f(-.121f,.48f);
    glVertex2f( -.121f,.42f);
    glVertex2f( -.129f,.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.38f);
   glVertex2f(-.121f,.38f);
    glVertex2f( -.121f,.32f);
    glVertex2f( -.129f,.32f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.28f);
   glVertex2f(-.121f,.28f);
    glVertex2f( -.121f,.22f);
    glVertex2f( -.129f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.18f);
   glVertex2f(-.121f,.18f);
    glVertex2f( -.121f,.12f);
    glVertex2f( -.129f,.12f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,.08f);
   glVertex2f(-.121f,.08f);
    glVertex2f( -.121f,.02f);
    glVertex2f( -.129f,.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.08f);
   glVertex2f(-.121f,-.08f);
    glVertex2f( -.121f,-.02f);
    glVertex2f( -.129f,-.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.18f);
   glVertex2f(-.121f,-.18f);
    glVertex2f( -.121f,-.12f);
    glVertex2f( -.129f,-.12f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.28f);
   glVertex2f(-.121f,-.28f);
    glVertex2f( -.121f,-.22f);
    glVertex2f( -.129f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.38f);
   glVertex2f(-.121f,-.38f);
    glVertex2f( -.121f,-.32f);
    glVertex2f( -.129f,-.32f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.48f);
   glVertex2f(-.121f,-.48f);
    glVertex2f( -.121f,-.42f);
    glVertex2f( -.129f,-.42f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.129f,-.58f);
   glVertex2f(-.121f,-.58f);
    glVertex2f( -.121f,-.52f);
    glVertex2f( -.129f,-.52f);
    glEnd();





      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.25f,-.5f);
   glVertex2f(-.2f,-.5f);
    glVertex2f( -.2f,.7f);
    glVertex2f( -.25f,.7f);
    glEnd();


      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.3f,-.5f);
   glVertex2f(-.25f,-.5f);
    glVertex2f( -.25f,.3f);
    glVertex2f( -.3f,.3f);
    glEnd();


      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.1f,-.5f);
   glVertex2f(-.05f,-.5f);
    glVertex2f( -.05f,.15f);
    glVertex2f( -.1f,.15f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.35f,-.5f);
   glVertex2f(-.3f,-.5f);
    glVertex2f( -.3f,.05f);
    glVertex2f( -.35f,.05f);
    glEnd();


        glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.48f);
   glVertex2f(-.071f,-.48f);
    glVertex2f( -.071f,-.42f);
    glVertex2f( -.079f,-.42f);
    glEnd();

        glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.38f);
   glVertex2f(-.071f,-.38f);
    glVertex2f( -.071f,-.32f);
    glVertex2f( -.079f,-.32f);
    glEnd();
            glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.28f);
   glVertex2f(-.071f,-.28f);
    glVertex2f( -.071f,-.22f);
    glVertex2f( -.079f,-.22f);
    glEnd();
            glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.18f);
   glVertex2f(-.071f,-.18f);
    glVertex2f( -.071f,-.12f);
    glVertex2f( -.079f,-.12f);
    glEnd();
                glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,-.08f);
   glVertex2f(-.071f,-.08f);
    glVertex2f( -.071f,-.02f);
    glVertex2f( -.079f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
   glVertex2f( -.079f,.08f);
   glVertex2f(-.071f,.08f);
    glVertex2f( -.071f,.02f);
    glVertex2f( -.079f,.02f);
    glEnd();


                  glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.48f);
   glVertex2f(-.221f,-.48f);
    glVertex2f( -.221f,-.42f);
    glVertex2f( -.229f,-.42f);
    glEnd();

                  glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.38f);
   glVertex2f(-.221f,-.38f);
    glVertex2f( -.221f,-.32f);
    glVertex2f( -.229f,-.32f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.28f);
   glVertex2f(-.221f,-.28f);
    glVertex2f( -.221f,-.22f);
    glVertex2f( -.229f,-.22f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.18f);
   glVertex2f(-.221f,-.18f);
    glVertex2f( -.221f,-.12f);
    glVertex2f( -.229f,-.12f);
    glEnd();
                      glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,-.08f);
   glVertex2f(-.221f,-.08f);
    glVertex2f( -.221f,-.02f);
    glVertex2f( -.229f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.08f);
   glVertex2f(-.221f,.08f);
    glVertex2f( -.221f,.02f);
    glVertex2f( -.229f,.02f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.18f);
   glVertex2f(-.221f,.18f);
    glVertex2f( -.221f,.12f);
    glVertex2f( -.229f,.12f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.28f);
   glVertex2f(-.221f,.28f);
    glVertex2f( -.221f,.22f);
    glVertex2f( -.229f,.22f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.38f);
   glVertex2f(-.221f,.38f);
    glVertex2f( -.221f,.32f);
    glVertex2f( -.229f,.32f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.48f);
   glVertex2f(-.221f,.48f);
    glVertex2f( -.221f,.42f);
    glVertex2f( -.229f,.42f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.58f);
   glVertex2f(-.221f,.58f);
    glVertex2f( -.221f,.52f);
    glVertex2f( -.229f,.52f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.229f,.68f);
   glVertex2f(-.221f,.68f);
    glVertex2f( -.221f,.62f);
    glVertex2f( -.229f,.62f);
    glEnd();
   glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.28f);
   glVertex2f(-.271f,.28f);
    glVertex2f( -.271f,.22f);
    glVertex2f( -.279f,.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.18f);
   glVertex2f(-.271f,.18f);
    glVertex2f( -.271f,.12f);
    glVertex2f( -.279f,.12f);
    glEnd();
       glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,.08f);
   glVertex2f(-.271f,.08f);
    glVertex2f( -.271f,.02f);
    glVertex2f( -.279f,.02f);
    glEnd();

           glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.08f);
   glVertex2f(-.271f,-.08f);
    glVertex2f( -.271f,-.02f);
    glVertex2f( -.279f,-.02f);
    glEnd();
             glBegin(GL_QUADS);
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.18f);
   glVertex2f(-.271f,-.18f);
    glVertex2f( -.271f,-.12f);
    glVertex2f( -.279f,-.12f);
    glEnd();
             glBegin(GL_QUADS);
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.28f);
   glVertex2f(-.271f,-.28f);
    glVertex2f( -.271f,-.22f);
    glVertex2f( -.279f,-.22f);
    glEnd();
             glBegin(GL_QUADS);
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.38f);
   glVertex2f(-.271f,-.38f);
    glVertex2f( -.271f,-.32f);
    glVertex2f( -.279f,-.32f);
    glEnd();
             glBegin(GL_QUADS);
    glColor3f(5.0f, 0.5f, .0f);
   glVertex2f( -.279f,-.48f);
   glVertex2f(-.271f,-.48f);
    glVertex2f( -.271f,-.42f);
    glVertex2f( -.279f,-.42f);
    glEnd();






      glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
   glVertex2f( -.05f,-.5f);
   glVertex2f(-.0f,-.5f);
    glVertex2f( -.0f,-.15f);
    glVertex2f( -.05f,-.15f);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(76, 84, 109);
    glVertex2f(0.77f, -0.5f);
    glVertex2f(0.83f, -0.5f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.77f, -0.3f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(124, 193, 187);
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.85f, -0.28f);
    glVertex2f(0.75f, -0.28f);
    glEnd();
    glBegin(GL_QUADS); //  tower
    glColor3ub(112, 114, 114);
    glVertex2f(0.75f, -0.28f);
    glVertex2f(0.85f, -0.28f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.7f, -0.2f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244, 230, 68);
    glVertex2f(0.7f, -0.2f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.9f,  -0.15f);
    glVertex2f(0.7f,  -0.15f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(7, 175, 242);
    glVertex2f(0.7f, -0.15f);
    glVertex2f(0.9f, -0.15f);
    glVertex2f(0.83f,  -0.1f);
    glVertex2f(0.77f,  -0.1f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(139, 141, 142);
    glVertex2f(0.77f, -0.1f);
    glVertex2f(0.83f, -0.1f);
    glVertex2f(0.85f, -0.05f);
    glVertex2f(0.75f,  -0.05f);
    glEnd();
    glBegin(GL_QUADS); // Airplane tower
    glColor3ub(242, 199, 7);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.85f, -0.05f);
    glVertex2f(0.85f, -0.07f);
    glVertex2f(0.75f,  -0.07f);
    glEnd();
    glBegin(GL_LINES); //  tower
    glColor3ub(0, 0, 0);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.1f);
    glEnd();
    glColor3ub(9, 239, 224); //  tower
    int i;
    GLfloat x=.8f;
    GLfloat y=.1f;
    GLfloat radius =.02f;
    int triangleAmount = 100;
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();






glPopMatrix();



    glBegin(GL_QUADS); //  road
    glColor3ub(61, 60, 60);
    glVertex2f(-0.99f, -0.99f);
    glVertex2f(0.99f, -0.99f);
    glVertex2f(0.99f, -0.5f);
    glVertex2f(-0.99f, -0.5f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f, -0.75f);
    glVertex2f(-0.8f, -0.75f);
    glVertex2f(-0.8f, -0.73f);
    glVertex2f(-0.9f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.7f, -0.75f);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.73f);
    glVertex2f(-0.7f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f, -0.75f);
    glVertex2f(-0.4f, -0.75f);
    glVertex2f(-0.4f, -0.73f);
    glVertex2f(-0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.75f);
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.2f, -0.73f);
    glVertex2f(-0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(0.0f, -0.75f);
    glVertex2f(0.0f, -0.73f);
    glVertex2f(-0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.73f);
    glVertex2f(0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.4f, -0.73f);
    glVertex2f(0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.73f);
    glVertex2f(0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, -0.75f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.8f, -0.73f);
    glVertex2f(0.7f, -0.73f);
    glEnd();

    //Bus
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(238, 223, 123);
    glVertex2f(-0.8, -0.65);
    glVertex2f(-0.3, -0.65);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.35, -0.45);
    glVertex2f(-0.8, -0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.37, -0.63);
    glVertex2f(-0.37, -0.5);
    glVertex2f(-0.43, -0.5);
    glVertex2f(-0.43, -0.63);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.46, -0.57);
    glVertex2f(-0.46, -0.5);
    glVertex2f(-0.52, -0.5);
    glVertex2f(-0.52, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.55, -0.57);
    glVertex2f(-0.55, -0.5);
    glVertex2f(-0.61, -0.5);
    glVertex2f(-0.61, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.64, -0.57);
    glVertex2f(-0.64, -0.5);
    glVertex2f(-0.70, -0.5);
    glVertex2f(-0.70, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.73, -0.57);
    glVertex2f(-0.73, -0.5);
    glVertex2f(-0.79, -0.5);
    glVertex2f(-0.79, -0.57);
    glEnd();

    // bus wheel
    // bus second wheel
    glColor3ub(0, 0, 0); // black hole
    GLfloat x5= -0.72f;
    GLfloat y5=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x5, y5); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x5 + (radius * cos(i *  twicePi / triangleAmount)),
            y5 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    // bus second inner wheel
        glColor3ub(153, 140, 140); // silver hole
    GLfloat x7= -0.72f;
    GLfloat y7=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
     glColor3ub(0, 0, 0); // black hole
    GLfloat x6= -0.52f;
    GLfloat y6=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // bus first wheel
    glColor3ub(153, 140, 140);
    GLfloat x8= -0.52f;
    GLfloat y8=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x8, y8);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


    //CLOUD



  glEnable(GL_LIGHTING);
  GLfloat global_ambient[] = {4.0, 4.0, 4.0, 0.1};
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);


     glLoadIdentity();
    glTranslatef(-0.9f,0.5f, 0.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle60;
    for (int i=0;i<360;i++)
    {
        angle60=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle60),0.0+0.05*sin(angle60));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle61;
    for (int i=0;i<360;i++)
    {
        angle61=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle61),-0.05+0.05*sin(angle61));

    }
    glEnd();



      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle62;
    for (int i=0;i<360;i++)
    {
        angle62=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle62),0.0+0.05*sin(angle62));

    }
    glEnd();


       glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle63;
    for (int i=0;i<360;i++)
    {
        angle63=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle63),-0.05+0.05*sin(angle63));

    }
    glEnd();

    glPopMatrix();

    //CLOUD2


      glLoadIdentity();
    glTranslatef(0.8f,0.8f, 0.0f);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle5;
    for (int i=0;i<360;i++)
    {
        angle5=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle5),0.0+0.05*sin(angle5));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle4;
    for (int i=0;i<360;i++)
    {
        angle4=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle4),-0.05+0.05*sin(angle4));

    }
    glEnd();



      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle3;
    for (int i=0;i<360;i++)
    {
        angle3=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle3),0.0+0.05*sin(angle3));

    }
    glEnd();


       glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle2;
    for (int i=0;i<360;i++)
    {
        angle2=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle2),-0.05+0.05*sin(angle2));

    }
    glEnd();
    glPopMatrix();


     glDisable(GL_LIGHTING);



    //bird

    glLoadIdentity();
     glPushMatrix();
     glTranslatef(position5,0.0f, 0.0f);
     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle41;
    for (int i=0;i<360;i++)
    {
        angle41=i*3.1416/180;
        glVertex2f(0.8+0.04*cos(angle41),0.7+0.02*sin(angle41));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle42;
    for (int i=0;i<360;i++)
    {
        angle42=i*3.1416/180;
        glVertex2f(0.75+0.02*cos(angle42),0.71+0.02*sin(angle42));

    }
    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub(255.0, 255.0, 255.0);
    float angle43;
    for (int i=0;i<360;i++)
    {
        angle43=i*3.1416/180;
        glVertex2f(0.74+0.005*cos(angle43),0.71+0.005*sin(angle43));

    }
    glEnd();


     glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 255.0, 255.0);
    glVertex2f(0.8f,0.75f);
    glVertex2f(0.79,0.71f);
    glVertex2f(0.785f,0.8f);
    glEnd();






    glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 0.0, 0.0);
    glVertex2f(0.73f,0.72f);
    glVertex2f(0.69f,0.71f);
    glVertex2f(0.73f,0.70f);
    glEnd();



    //BIRD2

    glTranslatef(-0.1f,-0.1f, 0.0f);
     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle44;
    for (int i=0;i<360;i++)
    {
        angle44=i*3.1416/180;
        glVertex2f(0.8+0.04*cos(angle44),0.7+0.02*sin(angle44));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle45;
    for (int i=0;i<360;i++)
    {
        angle45=i*3.1416/180;
        glVertex2f(0.75+0.02*cos(angle45),0.71+0.02*sin(angle45));

    }
    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub(255.0, 255.0, 255.0);
    float angle46;
    for (int i=0;i<360;i++)
    {
        angle46=i*3.1416/180;
        glVertex2f(0.74+0.005*cos(angle46),0.71+0.005*sin(angle46));

    }
    glEnd();


     glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 255.0, 255.0);
    glVertex2f(0.8f,0.75f);
    glVertex2f(0.79,0.71f);
    glVertex2f(0.785f,0.8f);
    glEnd();


    //lip
    glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 0.0, 0.0);
    glVertex2f(0.73f,0.72f);
    glVertex2f(0.69f,0.71f);
    glVertex2f(0.73f,0.70f);
    glEnd();




    glTranslatef(-0.2f,0.1f, 0.0f);
     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle47;
    for (int i=0;i<360;i++)
    {
        angle47=i*3.1416/180;
        glVertex2f(0.8+0.04*cos(angle47),0.7+0.02*sin(angle47));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 0.0);
    float angle48;
    for (int i=0;i<360;i++)
    {
        angle48=i*3.1416/180;
        glVertex2f(0.75+0.02*cos(angle48),0.71+0.02*sin(angle48));

    }
    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub(255.0, 255.0, 255.0);
    float angle49;
    for (int i=0;i<360;i++)
    {
        angle49=i*3.1416/180;
        glVertex2f(0.74+0.005*cos(angle49),0.71+0.005*sin(angle49));

    }
    glEnd();
    //wing

     glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 255.0, 255.0);
    glVertex2f(0.8f,0.75f);
    glVertex2f(0.79,0.71f);
    glVertex2f(0.785f,0.8f);
    glEnd();


    //lip
    glBegin(GL_TRIANGLES);
    glColor3ub(255.0, 0.0, 0.0);
    glVertex2f(0.73f,0.72f);
    glVertex2f(0.69f,0.71f);
    glVertex2f(0.73f,0.70f);
    glEnd();



glPopMatrix();




glLoadIdentity();
 glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 128.0f);
    float angle10;
    for (int i=0;i<360;i++)
    {
        angle10=i*3.1416/180;
        glVertex2f(0.0+0.12*cos(angle10),0.9+0.12*sin(angle10));

    }
    glEnd();



// glutTimerFunc(4500,evening,0);




    glFlush();



    //glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {


case 'd':
    glutDisplayFunc(day);
    PlaySound(TEXT("salamisound.wav"), NULL, SND_ASYNC);
    glutPostRedisplay();
    break;

    case 'n':
    glutDisplayFunc(night);
    PlaySound(TEXT("salamisound.wav"), NULL, SND_ASYNC);
    glutPostRedisplay();
    break;
glutPostRedisplay();


    }
}





int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Day and Night Mode Town");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(500, 500);
    glutDisplayFunc(day);
    initGL();
    glutIdleFunc(Idle);
    init();
    glutTimerFunc(250, update, 0);
     glutTimerFunc(500, update2, 0);
      glutTimerFunc(500, update1, 0);

    glutTimerFunc(200, update5, 0);
     glutTimerFunc(200, update6, 0);

     glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutMainLoop();
    return 0;
}
