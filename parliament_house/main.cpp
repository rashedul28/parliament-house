#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include <cstdio>
#include <GL/gl.h>
#define tPi 6.2832
#define PI 3.1416

using namespace std;

void Forest();
void Gate();
void Road();
void Trucks();
void Cars();
void Stairs();
void Sky();
void Clouds();
void Sun();
void Birds();
void Flag();
void Star();
void parliament();
void parliament2();
void Morning();
void Night();
void Evening();
void nightCall(int val);
void EveningCall(int val);

GLfloat x = 0.00f;
GLfloat y = 0.00f;
GLfloat radius = 0.00f;
int tAmount = 100;

GLfloat bird_position = 0.0f;
GLfloat bird_move_speed = 0.01f;


GLfloat cloud_position = 0.0f;
GLfloat cloud_move_speed = 0.01f;

GLfloat car_1_position = 0.0f;
GLfloat car_1_move_speed = 0.05f;


GLfloat truck_position = 0.0f;
GLfloat truck_move_speed = 0.05f;

void bird_moving(int value)
{

    if(bird_position >1.5)
        bird_position = -1.0f;

    bird_position += bird_move_speed;

    glutPostRedisplay();


    glutTimerFunc(100, bird_moving, 0);
}


void cloud_moving(int value)
{

    if(cloud_position <-1.0)
        cloud_position = 1.5f;

    cloud_position -= cloud_move_speed;

    glutPostRedisplay();


    glutTimerFunc(100, cloud_moving, 0);
}

void car_1_moving(int value)
{

    if(car_1_position >1.5)
        car_1_position = -1.0f;

    car_1_position += car_1_move_speed;

    glutPostRedisplay();


    glutTimerFunc(100, car_1_moving, 0);
}


void truck_moving(int value)
{

    if(truck_position <-1.5)
        truck_position = 1.0f;

    truck_position -= truck_move_speed;

    glutPostRedisplay();


    glutTimerFunc(100, truck_moving, 0);
}

void Forest()
{
//        /// Quads No-3 green Field
//
//	glBegin(GL_QUADS);
//
//    glColor3ub(0, 255, 0);
//    ///glColor3ub(34, 139, 34);
//    glVertex2f(1,-0.34787044263853);
//    glVertex2f(-1, -0.34787044263853);
//    glVertex2f(-1, -0.7);
//    glVertex2f(1, -0.7);
//
//    glEnd();

    /// forest green tringle - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(34, 139, 34);
    ///glColor3ub(0, 255, 0);
    glVertex2f(-0.8343978554124, -0.34787044263853);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(-1, -0.54227048801545);

    glEnd();

    /// forest green Quads - 1

    glBegin(GL_QUADS);

    glColor3ub(34, 139, 34);
    glVertex2f(-0.40043569474164, -0.34773572633545);
    glVertex2f(-0.62302835474087, -0.34773572633545);
    glVertex2f(-0.86245575373163, -0.7);
    glVertex2f(-0.61367572196779, -0.7);

    glEnd();

    ///forest green quads - 2

    glTranslatef(0.44,0,0);

    glBegin(GL_QUADS);

    glColor3ub(34, 139, 34);
    glVertex2f(-0.40043569474164, -0.34773572633545);
    glVertex2f(-0.62302835474087, -0.34773572633545);
    glVertex2f(-0.86245575373163, -0.7);
    glVertex2f(-0.61367572196779, -0.7);

    glEnd();

    glLoadIdentity();

    /// Forest green quads - 3

    glTranslatef(0.9,0,0);

    glBegin(GL_QUADS);

    glColor3ub(34, 139, 34);
    glVertex2f(-0.40043569474164, -0.34773572633545);
    glVertex2f(-0.62302835474087, -0.34773572633545);
    glVertex2f(-0.86245575373163, -0.7);
    glVertex2f(-0.61367572196779, -0.7);

    glEnd();


    glLoadIdentity();


    /// Forest green quads - 4

    glTranslatef(1.35526,0,0);

    glBegin(GL_QUADS);

    glColor3ub(34, 139, 34);
    glVertex2f(-0.40043569474164, -0.34773572633545);
    glVertex2f(-0.62302835474087, -0.34773572633545);
    glVertex2f(-0.86245575373163, -0.7);
    glVertex2f(-0.61367572196779, -0.7);

    glEnd();


    glLoadIdentity();


    /// Forest green Triangle - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(34, 139, 34);
    glVertex2f(1, -0.55162312078853);
    glVertex2f(0.91828552626218, -0.7);
    glVertex2f(1, -0.7);

    glEnd();



    /// green trees forest (1 and 2)

    /// tree - 1 /////////////

    /// tree lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.795262, -0.48054311171314);
    glVertex2f(-0.795262, -0.53291785524237);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.8, -0.4);
    glVertex2f(-0.84000943507625, -0.45248521339391);
    glVertex2f(-0.75022416045471, -0.4506146868393);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.79885785087471, -0.43003889473853);
    glVertex2f(-0.84000943507625, -0.48054311171314);
    glVertex2f(-0.75022416045471, -0.48241363826776);

    glEnd();


    /// tree - 2////////////////////

    /// tree Lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.9185715503701, -0.61522102364545);
    glVertex2f(-0.9185715503701, -0.66759576717468);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.5366589083516);
    glVertex2f(-0.96533471423548, -0.5852925987716);
    glVertex2f(-0.87180838650471, -0.5852925987716);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.56658733322545);
    glVertex2f(-0.96533471423548, -0.61335049709083);
    glVertex2f(-0.87180838650471, -0.61335049709083);

    glEnd();

    /// green trees forest (3 and 4)

    /// Duplicating tree 1 and 2

    glTranslatef(0.44,0,0);

    /// tree - 3 /////////////

    /// tree lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.795262, -0.48054311171314);
    glVertex2f(-0.795262, -0.53291785524237);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.8, -0.4);
    glVertex2f(-0.84000943507625, -0.45248521339391);
    glVertex2f(-0.75022416045471, -0.4506146868393);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.79885785087471, -0.43003889473853);
    glVertex2f(-0.84000943507625, -0.48054311171314);
    glVertex2f(-0.75022416045471, -0.48241363826776);

    glEnd();


    /// tree - 4////////////////////

    /// tree Lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.9185715503701, -0.61522102364545);
    glVertex2f(-0.9185715503701, -0.66759576717468);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.5366589083516);
    glVertex2f(-0.96533471423548, -0.5852925987716);
    glVertex2f(-0.87180838650471, -0.5852925987716);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.56658733322545);
    glVertex2f(-0.96533471423548, -0.61335049709083);
    glVertex2f(-0.87180838650471, -0.61335049709083);

    glEnd();


    glLoadIdentity();

    /// green trees forest (5 and 6)

    /// tree - 5 /////////////

    glTranslatef(0.9,0,0);

    /// tree lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.795262, -0.48054311171314);
    glVertex2f(-0.795262, -0.53291785524237);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.8, -0.4);
    glVertex2f(-0.84000943507625, -0.45248521339391);
    glVertex2f(-0.75022416045471, -0.4506146868393);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.79885785087471, -0.43003889473853);
    glVertex2f(-0.84000943507625, -0.48054311171314);
    glVertex2f(-0.75022416045471, -0.48241363826776);

    glEnd();


    /// tree - 6////////////////////

    /// tree Lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.9185715503701, -0.61522102364545);
    glVertex2f(-0.9185715503701, -0.66759576717468);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.5366589083516);
    glVertex2f(-0.96533471423548, -0.5852925987716);
    glVertex2f(-0.87180838650471, -0.5852925987716);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.56658733322545);
    glVertex2f(-0.96533471423548, -0.61335049709083);
    glVertex2f(-0.87180838650471, -0.61335049709083);

    glEnd();

    glLoadIdentity();


    /// green trees forest (7 and 8)

    /// tree - 7 /////////////

    glTranslatef(1.35526,0,0);

    /// tree lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.795262, -0.48054311171314);
    glVertex2f(-0.795262, -0.53291785524237);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.8, -0.4);
    glVertex2f(-0.84000943507625, -0.45248521339391);
    glVertex2f(-0.75022416045471, -0.4506146868393);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.79885785087471, -0.43003889473853);
    glVertex2f(-0.84000943507625, -0.48054311171314);
    glVertex2f(-0.75022416045471, -0.48241363826776);

    glEnd();


    /// tree - 8////////////////////

    /// tree Lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.9185715503701, -0.61522102364545);
    glVertex2f(-0.9185715503701, -0.66759576717468);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.5366589083516);
    glVertex2f(-0.96533471423548, -0.5852925987716);
    glVertex2f(-0.87180838650471, -0.5852925987716);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.56658733322545);
    glVertex2f(-0.96533471423548, -0.61335049709083);
    glVertex2f(-0.87180838650471, -0.61335049709083);

    glEnd();

    glLoadIdentity();


    /// tree - 9

    glTranslatef(1.7781,0,0);

    /// tree Lines - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);

    glColor3ub(128, 0, 0);

    glVertex2f(-0.9185715503701, -0.61522102364545);
    glVertex2f(-0.9185715503701, -0.66759576717468);

    glEnd();

    glPopAttrib();

    /// Tringles - 1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.5366589083516);
    glVertex2f(-0.96533471423548, -0.5852925987716);
    glVertex2f(-0.87180838650471, -0.5852925987716);

    glEnd();

    /// Tringles - 2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 100, 0);
    glVertex2f(-0.9185715503701, -0.56658733322545);
    glVertex2f(-0.96533471423548, -0.61335049709083);
    glVertex2f(-0.87180838650471, -0.61335049709083);

    glEnd();

    glLoadIdentity();
}

void Gate()
{
    /// designing the road

    /// Road Side

    /// black long line-1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.03969191919, -0.61431383162373);

    glEnd();

    glPopAttrib();

    /// black long line-2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.7);
    glVertex2f(1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// duplicating above 3 lines

    /// # 1

    glTranslatef(0.06,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    ///--------------------------------------

    /// # 2

    glTranslatef(0.12,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    ///--------------------------

    /// # 3

    glTranslatef(0.18,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    ///--------------------------

    /// # 4

    glTranslatef(0.24,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    ///--------------------------

    /// # 5

    glTranslatef(0.3,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    ///--------------------------

    /// # 6

    glTranslatef(0.36,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 7

    glTranslatef(0.42,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 8

    glTranslatef(0.48,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 9

    glTranslatef(0.54,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 10

    glTranslatef(0.6,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 11

    glTranslatef(0.66,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 12

    glTranslatef(0.72,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 13

    glTranslatef(0.78,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 14

    glTranslatef(0.84,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 15

    glTranslatef(0.9,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// Field Gate

    /// Gate line - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.03969191919, -0.53391264099486);
    glVertex2f(-0.03969191919, -0.7);

    glEnd();

    glPopAttrib();

    /// Gate line - 2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(0.08322777342716, -0.53391264099486);
    glVertex2f(0.08322777342716, -0.7);

    glEnd();

    glPopAttrib();

    /// Gate line - 3

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.04554176321148, -0.53391264099486);
    glVertex2f(0.08800001312159, -0.53391264099486);

    glEnd();

    glPopAttrib();

    /// Gate line - 4 (in lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.00791463089674, -0.53391264099486);
    glVertex2f(-0.00791463089674, -0.7);

    glEnd();

    glPopAttrib();

    /// Gate line - 5 (in lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(0.02180571833932, -0.53391264099486);
    glVertex2f(0.02180571833932, -0.7);

    glEnd();

    glPopAttrib();



    /// Gate line - 6 (in lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(0.05350742419111, -0.53391264099486);
    glVertex2f(0.05350742419111, -0.7);

    glEnd();

    glPopAttrib();


    /// black long line-2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(3.5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(1, -0.61431383162373);
    glVertex2f(0.08322777342716, -0.61431383162373);

    glEnd();

    glPopAttrib();

    /// # 16

    glTranslatef(1.08,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 17

    glTranslatef(1.14,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 18

    glTranslatef(1.2,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 19

    glTranslatef(1.26,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 20

    glTranslatef(1.32,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 21

    glTranslatef(1.38,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 22

    glTranslatef(1.44,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 23

    glTranslatef(1.5,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 24

    glTranslatef(1.56,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 25

    glTranslatef(1.62,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// # 26

    glTranslatef(1.68,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 27

    glTranslatef(1.74,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 28

    glTranslatef(1.8,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 29

    glTranslatef(1.86,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 30

    glTranslatef(1.92,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// # 31

    glTranslatef(1.98,0,0);
    /// line - 1 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-1, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 2 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-1, -0.7);

    glEnd();

    glPopAttrib();

    /// line - 3 (cross lines)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.93835969764685, -0.61431383162373);
    glVertex2f(-0.93835969764685, -0.7);

    glEnd();

    glPopAttrib();

    glLoadIdentity();
}

void Road()
{
    /// Quads No-2 road color

    glBegin(GL_QUADS);

    glColor3ub(57,61,71);
    glVertex2f(1, -0.7);
    glVertex2f(-1, -0.7);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);

    glEnd();

    /// road side line-1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-1, -0.722212544);
    glVertex2f(1, -0.722212544);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 1


    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// road middle doted lines - 2
    glTranslatef(0.12,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 2
    glTranslatef(0.25,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 2
    glTranslatef(0.385,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 3
    glTranslatef(0.527,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// road middle doted lines - 4
    glTranslatef(0.67,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 5
    glTranslatef(0.81,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 6
    glTranslatef(1.1,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 6

    glTranslatef(1.24,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// road middle doted lines - 7

    glTranslatef(1.37,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// road middle doted lines - 8

    glTranslatef(1.51,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 9

    glTranslatef(1.65,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 10

    glTranslatef(1.79,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// road middle doted lines - 11

    glTranslatef(1.93,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(7.3);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.91616648836399, -0.8617239008236);
    glVertex2f(-0.98786803133458, -0.8617239008236);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// Middle road crossing lines-1

    ///glTranslatef(0.81,0,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.08322777342716, -0.75046436882021);
    glVertex2f(-0.03969191919, -0.75046436882021);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// Middle road crossing lines-2

    glTranslatef(0,-0.05,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.08322777342716, -0.75046436882021);
    glVertex2f(-0.03969191919, -0.75046436882021);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// Middle road crossing lines-3

    glTranslatef(0,-0.106,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.08322777342716, -0.75046436882021);
    glVertex2f(-0.03969191919, -0.75046436882021);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

    /// Middle road crossing lines-4

    glTranslatef(0,-0.16,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.08322777342716, -0.75046436882021);
    glVertex2f(-0.03969191919, -0.75046436882021);

    glEnd();

    glPopAttrib();

    glLoadIdentity();


    /// Middle road crossing lines-5

    glTranslatef(0,-0.21,0);

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(10);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.08322777342716, -0.75046436882021);
    glVertex2f(-0.03969191919, -0.75046436882021);

    glEnd();

    glPopAttrib();

    glLoadIdentity();

}

void Star()
{
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    for(float i = -0.8f; i <= 0.8f; i += 0.2f)
    {
        for(float j =0.9f; j >= 0.0f; j -= 0.3)
        {
            glVertex2f(i, j);
        }
    }
    glEnd();

    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    for(float i = -0.9f; i <= 0.9f; i += 0.2f)
    {
        for(float j = 0.8f; j >= 0.0f; j -= 0.3)
        {
            glVertex2f(i, j);
        }
    }
    glEnd();
}

void Cars()
{
    /// Cars for road

    ///## Car - 1

    ///glPushMatrix();
    ///glTranslatef(car_1_position,0,0);

    /// Quad - 1

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 0);

    glVertex2f(-0.34245439325198, -0.68939259185131);
    glVertex2f(-0.4715371208685, -0.76722673811206);

    glVertex2f(-0.4715371208685, -0.78522673811206);
    glVertex2f(-0.34245439325198, -0.78522673811206);

    glEnd();

    /// Quad - 2

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 0);

    glVertex2f(-0.26226663821748, -0.69525998856116);
    glVertex2f(-0.34245439325198, -0.68939259185131);

    glVertex2f(-0.34245439325198, -0.78522673811206);
    glVertex2f(-0.26226663821748, -0.78522673811206);

    glEnd();

    /// Quad - 3

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 0);

    glVertex2f(-0.20359267111906, -0.74611076004645);
    glVertex2f(-0.26226663821748, -0.69525998856116);

    glVertex2f(-0.26226663821748, -0.78522673811206);
    glVertex2f(-0.20359267111906, -0.78522673811206);

    glEnd();

    /// Quad - 4

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 0);

    glVertex2f(-0.11362592156815, -0.74611076004645);
    glVertex2f(-0.20359267111906, -0.74611076004645);

    glVertex2f(-0.20359267111906, -0.78522673811206);
    glVertex2f(-0.11362592156815, -0.78522673811206);

    glEnd();

    /// Car Window

    /// Quad - 1 (window)

    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.31116161079949, -0.71481797759396);
    glVertex2f(-0.34245439325198, -0.71481797759396);

    glVertex2f(-0.38352617022088, -0.74219916223989);
    glVertex2f(-0.31116161079949, -0.74219916223989);

    glEnd();

    /// Quad - 2 (window)

    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);

    glVertex2f(-0.26226663821748, -0.71872957540052);
    glVertex2f(-0.31116161079949, -0.71481797759396);

    glVertex2f(-0.31116161079949, -0.74219916223989);
    glVertex2f(-0.23879705137811, -0.74219916223989);

    glEnd();


    /// line - 1 (window separation)

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 69, 0);

    glVertex2f(-0.31116161079949, -0.71481797759396);
    glVertex2f(-0.31116161079949, -0.74219916223989);

    glEnd();

    glPopAttrib();


    /// Tire - 1

    /// Circle-1

    glBegin(GL_TRIANGLE_FAN);

    x = -0.38743776802744f, y = -0.78718253701534f, radius = 0.028f;
    glColor3ub(1,1,1);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();

    /// Circle-2
    glBegin(GL_TRIANGLE_FAN);

    x = -0.38743776802744f, y = -0.78718253701534f, radius = .015f;
    glColor3ub(255,255,255);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();


    /// Tire - 2


    /// Circle - 3

    glBegin(GL_TRIANGLE_FAN);

    x = -0.23226663821748f, y = -0.78718253701534f, radius = 0.028f;
    glColor3ub(1,1,1);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();

    /// Circle - 4

    glBegin(GL_TRIANGLE_FAN);

    x = -0.23226663821748f, y = -0.78718253701534f, radius = .015f;
    glColor3ub(255,255,255);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();



    /// For moving car

    ///glPopMatrix();

    ///glLoadIdentity();



    /// ##################################################### End Car ###########################################
    /// ##################################################### End Car ###########################################
    /// ##################################################### End Car ###########################################
    /// ##################################################### End Car ###########################################
    /// ##################################################### End Car ###########################################

    /// End Car and Trucks
}

void Trucks()
{
    ///#### Truck - 1

//    glPushMatrix();
//    glTranslatef(truck_position,0,0);

    /// Quads - 1

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(0.23278436606286, -0.89320740977691);
    glVertex2f(0.20949749332554, -0.9);

    glVertex2f(0.20949749332554, -0.93036779114033);
    glVertex2f(0.23278436606286, -0.92995585695483);

    glEnd();

    /// Quads - 2

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(0.27753385908797, -0.85688541432537);
    glVertex2f(0.23278436606286, -0.89320740977691);

    glVertex2f(0.23278436606286, -0.92995585695483);
    glVertex2f(0.27753385908797, -0.92995585695483);

    glEnd();

    /// Quads - 3

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(0.34175035241748, -0.8321659117908);
    glVertex2f(0.27753385908797, -0.8321659117908);

    glVertex2f(0.27753385908797, -0.92995585695483);
    glVertex2f(0.34175035241748, -0.92995585695483);

    glEnd();

    /// Quads - 4(black window)

    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);

    glVertex2f(0.31881014476388, -0.84350362652744);
    glVertex2f(0.29300241115357, -0.84350362652744);

    glVertex2f(0.29300241115357, -0.89607493573361);
    glVertex2f(0.31881014476388, -0.89607493573361);

    glEnd();

    /// Quads - 5(black window)

    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);

    glVertex2f(0.27761713854965, -0.87010920685654);
    glVertex2f(0.25063974444449, -0.89330976578698);

    glVertex2f(0.25063974444449, -0.90895665436798);
    glVertex2f(0.27761713854965, -0.90841710648588);

    glEnd();


    /// Quads - 6(blue side)

    glBegin(GL_QUADS);
    glColor3ub(0,138,216);

    glVertex2f(0.54039451742593, -0.87990481149927);
    glVertex2f(0.34175035241748, -0.87990481149927);

    glVertex2f(0.34175035241748, -0.92995585695483);
    glVertex2f(0.54039451742593, -0.92995585695483);

    glEnd();

    ///### truck Tire - 1

    /// Circle - 5

    glBegin(GL_TRIANGLE_FAN);

    x = 0.30654168494296f, y = -0.94693631166038f, radius = .028f;
    glColor3ub(1,1,1);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();

    /// Circle - 6

    glBegin(GL_TRIANGLE_FAN);

    x = 0.30654168494296f, y = -0.94693631166038f, radius = .015f;
    glColor3ub(255,255,255);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();


    ///### truck Tire - 2

    /// Circle - 7

    glBegin(GL_TRIANGLE_FAN);

    x = 0.48457514859314f, y = -0.94693631166038f, radius =.028f;
    glColor3ub(1,1,1);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();

    /// Circle - 8

    glBegin(GL_TRIANGLE_FAN);

    x = 0.48457514859314f, y = -0.94693631166038f, radius =.015f;
    glColor3ub(255,255,255);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();


//    glPopMatrix();
//    glLoadIdentity();
}

void Stairs()
{
    /// Quads No-4 (stairs)

    glBegin(GL_QUADS);

    glColor3ub(204, 51, 0);
    glVertex2f(1, -0.16464690578598);
    glVertex2f(-1, -0.16464690578598);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(1, -0.34787044263853);

    glEnd();

    /// stairs line- 1



    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.1969);
    glVertex2f(1, -0.1969);

    glEnd();




    /// stairs line- 2



    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.22687044263853);
    glVertex2f(1, -0.22687044263853);

    glEnd();




    /// stairs line- 3


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.25687044263853);
    glVertex2f(1, -0.25687044263853);

    glEnd();




    /// stairs line- 4

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.28787044263853);
    glVertex2f(1, -0.28787044263853);

    glEnd();

    /// stairs line- 5


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.31787044263853);
    glVertex2f(1, -0.31787044263853);

    glEnd();



    /// stairs line- 6

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(1, -0.34787044263853);

    glEnd();

    /// extra 2 lines besides building

    /// line- 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(3.3);

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.7, -0.16464690578598);
    glVertex2f(-1, -0.16464690578598);

    glEnd();

    glPopAttrib();

    /// line- 2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(3.3);
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.7, -0.16464690578598);
    glVertex2f(1, -0.16464690578598);

    glEnd();

    glPopAttrib();

    /// White quads for stairs- 1

    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.42990270262644, -0.16464690578598);
    glVertex2f(-0.47338623037164, -0.16464690578598);
    glVertex2f(-0.59065361121164, -0.34787044263853);
    glVertex2f(-0.53965465978318, -0.34787044263853);

    glEnd();

    /// White quads for stairs- 2

    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);
    glVertex2f(0.42990270262644, -0.16464690578598);
    glVertex2f(0.47338623037164, -0.16464690578598);
    glVertex2f(0.59065361121164, -0.34787044263853);
    glVertex2f(0.53965465978318, -0.34787044263853);

    glEnd();

    /// White quads for stairs- 3

    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);
    glVertex2f(0.01323669793626, -0.16464690578598);
    glVertex2f(-0.01323669793626, -0.16464690578598);
    glVertex2f(-0.03194196348242, -0.34787044263853);
    glVertex2f(0.03194196348242, -0.34787044263853);

    glEnd();
}

void Sky()
{

    /// Quads No-5 (sky)

    glBegin(GL_QUADS);

    glColor3ub(0,181,226);
    ///glColor3ub(1,1,1);


    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glVertex2f(-1, -0.16464690578598);
    glVertex2f(1, -0.16464690578598);

    glEnd();
}

void Clouds()
{
    ///##################################################################################################################
    ///##################################################################################################################
    ///##################################################################################################################
    ///##################################################################################################################
    ///##################################################################################################################
    ///##################################################################################################################

    /// ############  Clouds - 1

    glPushMatrix();
    glTranslatef(cloud_position,0,0);

    /// Circle - 9

    int r;

    GLfloat x9=-0.56180627660301f;
    GLfloat y9=0.78658191641501f;
    GLfloat radius9 =.04f; ///-5.6180627660301, 7.8658191641501
    int triangleAmount9 = 20;


    GLfloat twicePi9 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x9, y9);
    for(r = 0; r <= triangleAmount9; r++)
    {
        glVertex2f(
            x9 + (radius9 * cos(r *  twicePi9 / triangleAmount9)),
            y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
        );
    }
    glEnd();

    /// Circle - 10

    int s;

    GLfloat x10=-0.49770130333574f;
    GLfloat y10=0.78269676652002f;
    GLfloat radius10 =.05f; ///-4.7633297891332, 7.6521359199258
    int triangleAmount10 = 20; ///-4.9770130333574, 7.8269676652002


    GLfloat twicePi10 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x10, y10);
    for(s = 0; s <= triangleAmount10; s++)
    {
        glVertex2f(
            x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
            y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
        );
    }
    glEnd();

    /// Circle - 11

    int t;

    GLfloat x11=-0.53712705281067f;
    GLfloat y11=0.81249084041737f;
    GLfloat radius11 =.025f;
    int triangleAmount11 = 20; ///-5.1712705281067, 8.2349084041737


    GLfloat twicePi11 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x11, y11);
    for(t = 0; t <= triangleAmount11; t++)
    {
        glVertex2f(
            x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
            y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
        );
    }
    glEnd();


    /// Circle - 12

    int u;

    GLfloat x12=-0.43359633006847f;
    GLfloat y12=0.79823736609996f;
    GLfloat radius12 =.04f;
    int triangleAmount12 = 20; ///-4.3359633006847, 7.9823736609996


    GLfloat twicePi12 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x12, y12);
    for(u = 0; u <= triangleAmount12; u++)
    {
        glVertex2f(
            x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
            y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
        );
    }
    glEnd();


    /// Circle - 13

    int v;

    GLfloat x13=-0.47050525407084f;
    GLfloat y13=0.81600766588994f;
    GLfloat radius13 =.04f;
    int triangleAmount13 = 20; ///-4.7050525407084, 8.0600766588994


    GLfloat twicePi13 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x13, y13);
    for(v = 0; v <= triangleAmount13; v++)
    {
        glVertex2f(
            x13 + (radius13 * cos(v *  twicePi13 / triangleAmount13)),
            y13 + (radius13 * sin(v * twicePi13 / triangleAmount13))
        );
    }
    glEnd();



    /// ############  Clouds - 2
    /// Circle - 14

    int w;

    GLfloat x14=0.56180627660301f;
    GLfloat y14=0.78658191641501f;
    GLfloat radius14 =.04f; ///-5.6180627660301, 7.8658191641501
    int triangleAmount14 = 20;


    GLfloat twicePi14 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x14, y14);
    for(w = 0; w <= triangleAmount14; w++)
    {
        glVertex2f(
            x14 + (radius14 * cos(w *  twicePi14 / triangleAmount14)),
            y14 + (radius14 * sin(w * twicePi14 / triangleAmount14))
        );
    }
    glEnd();

    /// Circle - 15

    int z;

    GLfloat x15=0.49770130333574f;
    GLfloat y15=0.78269676652002f;
    GLfloat radius15 =.05f; ///-4.7633297891332, 7.6521359199258
    int triangleAmount15 = 20; ///-4.9770130333574, 7.8269676652002


    GLfloat twicePi15 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x15, y15);
    for(z = 0; z <= triangleAmount15; z++)
    {
        glVertex2f(
            x15 + (radius15 * cos(z *  twicePi15 / triangleAmount15)),
            y15 + (radius15 * sin(z * twicePi15 / triangleAmount15))
        );
    }
    glEnd();

    /// Circle - 16

    int a;

    GLfloat x16=0.53712705281067f;
    GLfloat y16=0.81049084041737f;
    GLfloat radius16 =.025f;
    int triangleAmount16 = 20; ///-5.1712705281067, 8.2349084041737


    GLfloat twicePi16 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x16, y16);
    for(a = 0; a <= triangleAmount11; a++)
    {
        glVertex2f(
            x16 + (radius16 * cos(a *  twicePi16 / triangleAmount16)),
            y16 + (radius16 * sin(a * twicePi16 / triangleAmount16))
        );
    }
    glEnd();


    /// Circle - 17

    int b;

    GLfloat x17=0.43359633006847f;
    GLfloat y17=0.79823736609996f;
    GLfloat radius17 =.04f;
    int triangleAmount17 = 20; ///-4.3359633006847, 7.9823736609996


    GLfloat twicePi17 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x17, y17);
    for(b = 0; b <= triangleAmount12; b++)
    {
        glVertex2f(
            x17 + (radius17 * cos(b *  twicePi17 / triangleAmount17)),
            y17 + (radius17 * sin(b * twicePi17 / triangleAmount17))
        );
    }
    glEnd();


    /// Circle - 18

    int c;

    GLfloat x18=0.47050525407084f;
    GLfloat y18=0.81600766588994f;
    GLfloat radius18 =.04f;
    int triangleAmount18 = 20; ///-4.7050525407084, 8.0600766588994


    GLfloat twicePi18 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,255);
    glVertex2f(x18, y18);
    for(c = 0; c <= triangleAmount13; c++)
    {
        glVertex2f(
            x18 + (radius18 * cos(c *  twicePi18 / triangleAmount18)),
            y18 + (radius18 * sin(c * twicePi18 / triangleAmount18))
        );
    }
    glEnd();

    ///################################################## Moving  ##################################################

    glPopMatrix();

    glLoadIdentity();

    ///################################################## End Cloud ##################################################
    ///################################################## End Cloud ##################################################
    ///################################################## End Cloud ##################################################
}

void Sun()
{

    glBegin(GL_TRIANGLE_FAN);

    x = 0.76952863377515f, y = 0.88159149111966f, radius = .08f;
    glColor3ub(253, 184, 19);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();
}

void NightLight()
{

    glBegin(GL_QUADS);///small light above from left 1st
    glColor3ub(102, 153, 153);

    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.81f,-0.05f);
    glVertex2f(-0.81f,-0.17f);
    glVertex2f(-0.8f, -0.17f);

    glVertex2f(-0.79f,-0.05f);
    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.79f,-0.06f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.795f,-0.06f);
    glVertex2f(-0.83f, -0.12f);
    glVertex2f(-0.76f, -0.12f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);///2nd
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);

    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.81f,-0.05f);
    glVertex2f(-0.81f,-0.17f);
    glVertex2f(-0.8f, -0.17f);

    glVertex2f(-0.79f,-0.05f);
    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.79f,-0.06f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.795f,-0.06f);
    glVertex2f(-0.83f, -0.12f);
    glVertex2f(-0.76f, -0.12f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);///3rd
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);

    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.81f,-0.05f);
    glVertex2f(-0.81f,-0.17f);
    glVertex2f(-0.8f, -0.17f);

    glVertex2f(-0.79f,-0.05f);
    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.79f,-0.06f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.795f,-0.06f);
    glVertex2f(-0.83f, -0.12f);
    glVertex2f(-0.76f, -0.12f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);///4th
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);

    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.81f,-0.05f);
    glVertex2f(-0.81f,-0.17f);
    glVertex2f(-0.8f, -0.17f);

    glVertex2f(-0.79f,-0.05f);
    glVertex2f(-0.8f, -0.05f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.79f,-0.06f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.795f,-0.06f);
    glVertex2f(-0.83f, -0.12f);
    glVertex2f(-0.76f, -0.12f);
    glEnd();

    glLoadIdentity();



    glBegin(GL_QUADS);/// road light from left 1st
    glColor3ub(102, 153, 153);

    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.61f,-0.4f);
    glVertex2f(-0.61f,-0.7f);
    glVertex2f(-0.6f, -0.7f);

    glVertex2f(-0.55f,-0.4f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.55f,-0.42f);

    glEnd();

//    glBegin(GL_TRIANGLES);
//    glColor3ub(255, 255, 0);
//    glVertex2f(-0.58f,-0.42f);
//    glVertex2f(-0.63f, -0.7f);
//    glVertex2f(-0.52f, -0.7f);
//    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.58f,-0.42f);
    glVertex2f(-0.62f, -0.6f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);/// 2nd
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);

    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.61f,-0.4f);
    glVertex2f(-0.61f,-0.7f);
    glVertex2f(-0.6f, -0.7f);

    glVertex2f(-0.55f,-0.4f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.55f,-0.42f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.58f,-0.42f);
    glVertex2f(-0.62f, -0.6f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);/// 3rd
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);

    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.61f,-0.4f);
    glVertex2f(-0.61f,-0.7f);
    glVertex2f(-0.6f, -0.7f);

    glVertex2f(-0.55f,-0.4f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.55f,-0.42f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.58f,-0.42f);
    glVertex2f(-0.62f, -0.6f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

    glLoadIdentity();

}

void Moon()
{
    ///### The Moon

    glBegin(GL_TRIANGLE_FAN);

    x = -0.75f, y = 0.85f, radius = .08f;
    glColor3ub(222,255,255);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();

    glBegin(GL_TRIANGLE_FAN);

    x = -0.72f, y = 0.82f, radius = .08f;
    glColor3ub(0,0,51);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();
}

void Birds()
{
    /// ####################

    /// ####################  Bird Group - 1

    /// Bird - 1

    glPushMatrix();
    glTranslatef(bird_position,0,0);

    /// Line - 1
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);

    glEnd();

    /// Line - 2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);

    glEnd();


    /// bird - 2

    /// Line - 2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.06577859364681, 0.87276160499469);
    glVertex2f(-0.03399100359693, 0.8427399921698);

    glEnd();

    /// Line - 3
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glVertex2f(-0.00750134522202, 0.86922965054471);

    glEnd();

    /// bird - 3

    /// Line - 4
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);

    glEnd();

    /// Line - 5
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);

    glEnd();

    /// ####################

    /// ####################  Bird Group - 2

    /// Duplicating Bird Group - 1 (just bird - 1 and 2)

    glTranslatef(-0.35, 0, 0);

    /// Bird - 1

    /// Line - 1
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);

    glEnd();

    /// Line - 2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);

    glEnd();


    /// bird - 3

    /// Line - 4
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);

    glEnd();

    /// Line - 5
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);

    glEnd();


    //glLoadIdentity();


    /// ####################

    /// ####################  Bird Group - 3

    glTranslatef(-0.86, -0.05, 0);

    /// Bird - 1

    /// Line - 1
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.07284250254679, 0.92750689896949);
    glVertex2f(-0.05165077584686, 0.90278321781958);

    glEnd();

    /// Line - 2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.05165077584686, 0.90278321781958);
    glVertex2f(-0.02162916302197, 0.93457080786947);

    glEnd();


    /// bird - 2

    /// Line - 2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.06577859364681, 0.87276160499469);
    glVertex2f(-0.03399100359693, 0.8427399921698);

    glEnd();

    /// Line - 3
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.03399100359693, 0.8427399921698);
    glVertex2f(-0.00750134522202, 0.86922965054471);

    glEnd();

    /// bird - 3

    /// Line - 4
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.00839244980292, 0.91691103561953);
    glVertex2f(0.02428624482786, 0.89218735446962);

    glEnd();

    /// Line - 5
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    glVertex2f(0.02428624482786, 0.89218735446962);
    glVertex2f(0.05254188042776, 0.91514505839454);

    glEnd();


    ///glLoadIdentity();

    glPopMatrix();

    glLoadIdentity();
}

void Flag()
{
    /// The Flag



    /// Bd Flag

    /// Quad - 1
    glBegin(GL_QUADS);

    glColor3ub(0, 100, 0);

    glVertex2f(0.12935690134635, 0.29961113160959);
    glVertex2f(-0.03428098152225, 0.29961113160959);
    glVertex2f(-0.03374742083323, 0.16616359522495);
    glVertex2f(0.12935690134635, 0.16616359522495);


    glEnd();


    /// Flag stand

    /// Line - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);

    glBegin(GL_LINES);

    glColor3ub(238, 232, 170);
    glVertex2f(-0.03428098152225, 0.29961113160959);
    glVertex2f(-0.03428098152225, -0.16464690578598);


    glEnd();

    glPopAttrib();


    /// red circle

    int e;

    GLfloat x20=0.05352660188788f;
    GLfloat y20=0.23248004308144f;
    GLfloat radius20 =.03f;
    int triangleAmount20 = 20; ///0.5352660188788, 2.4248004308144


    GLfloat twicePi20 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 0, 0);
    glVertex2f(x20, y20);
    for(e = 0; e <= triangleAmount20; e++)
    {
        glVertex2f(
            x20 + (radius20 * cos(e *  twicePi20 / triangleAmount20)),
            y20 + (radius20 * sin(e * twicePi20 / triangleAmount20))
        );
    }
    glEnd();
}

void parliament()
{
    /// parliament House code

    /// Quads no - 1

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.7, -0.16464690578598);
    glVertex2f(-0.4, -0.16464690578598);

    glEnd();

    /// Quads no - 2

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.3, 0.4717680024523);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.4, -0.16464690578598);
    glVertex2f(-0.3, -0.16464690578598);

    glEnd();

    /// Quads no - 3

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.7, 0.45000155841227);
    glVertex2f(0.7, -0.16464690578598);
    glVertex2f(0.4, -0.16464690578598);

    glEnd();

    /// Quads no - 4

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.3, 0.4717680024523);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.4, -0.16464690578598);
    glVertex2f(0.3, -0.16464690578598);

    glEnd();

    /// polygon - 1

    glBegin(GL_POLYGON);

    glColor3ub(138, 116, 92);
    glVertex2f(0.20513952766454, 0.65877948889508);
    glVertex2f(-0.20513952766454, 0.65877948889508);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.3575370724666, 0.48761562801603);

    glVertex2f(-0.2, 0.44236541192157);
    glVertex2f(0.2, 0.44236541192157);
    glVertex2f(0.3575370724666, 0.48761562801603);
    glVertex2f(0.3575370724666, 0.62533367699918);


    glEnd();

    /// Quads no - 5 (black)

    glBegin(GL_QUADS);

    glColor3ub(1, 1, 1);
    glVertex2f(0.24539523258032, 0.6);
    glVertex2f(-0.24539523258032, 0.6);
    glVertex2f(-0.24539523258032, -0.16464690578598);
    glVertex2f(0.24539523258032, -0.16464690578598);

    glEnd();

    /// Quads no - 6 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.3, -0.16464690578598);
    glVertex2f(-0.1, -0.16464690578598);

    glEnd();

    /// Quads no - 7 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.1, 0.5);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.1, -0.16464690578598);
    glVertex2f(0.1, -0.16464690578598);

    glEnd();

    /// Quads no - 8 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, -0.16464690578598);
    glVertex2f(0.3, -0.16464690578598);

    glEnd();

    /// line works (vertical lines)(total -10 lines)

    /// Line no - 1

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.7, -0.16564690578598);

    glEnd();

    /// Line no - 2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.57198374874035, 0.48692723190763);
    glVertex2f(-0.57198374874035, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 3

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.4, -0.16564690578598);

    glEnd();

    /// Line no - 4

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.3, -0.16564690578598);

    glEnd();

    /// Line no - 5

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.1, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 6

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 7

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.3, -0.16564690578598);

    glEnd();

    /// Line no - 8

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.4, -0.16564690578598);

    glEnd();

    /// Line no - 9

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.57198374874035, 0.48692723190763);
    glVertex2f(0.57198374874035, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 10

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.7, 0.45000155841227);
    glVertex2f(0.7, -0.16564690578598);

    glEnd();



    /// Horizontal lines

    /// Line no - 11
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.4, 0.53995665973098);

    glEnd();



    /// Line no - 12

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.3, 0.4717680024523);

    glEnd();


    /// Line no - 13

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.1, 0.5);

    glEnd();

    glPopAttrib ();

    /// Line no - 14

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.1, 0.5);

    glEnd();

    glPopAttrib ();

    /// Line no - 15

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.3, 0.4717680024523);

    glEnd();

    /// Line no - 16


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.7, 0.45000155841227);

    glEnd();

    /// Line no - 16 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.3575370724666, 0.50761562801603);

    glEnd();

    /// Line no - 17 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3575370724666, 0.62533367699918);
    glVertex2f(0.3575370724666, 0.50761562801603);

    glEnd();

    /// Line no - 18 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.20513952766454, 0.65877948889508);

    glEnd();

    /// Line no - 19 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3575370724666, 0.62533367699918);
    glVertex2f(0.20513952766454, 0.65877948889508);

    glEnd();

    /// Line no - 20 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.20513952766454, 0.65877948889508);
    glVertex2f(0.20513952766454, 0.65877948889508);

    glEnd();

    /// black quads

    /// black quads - 1

    glBegin(GL_QUADS);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.41790270262644, 0.02144669879161);
    glVertex2f(-0.54949424574363, 0.00180616996814);
    glVertex2f(-0.54949424574363, -0.16464690578598);
    glVertex2f(-0.41790270262644, -0.16464690578598);

    glEnd();

    /// black quads - 2

    glBegin(GL_QUADS);

    glColor3ub(1, 1, 1);
    glVertex2f(0.41790270262644, 0.02144669879161);
    glVertex2f(0.54949424574363, 0.00180616996814);
    glVertex2f(0.54949424574363, -0.16464690578598);
    glVertex2f(0.41790270262644, -0.16464690578598);

    glEnd();

    /// black Tringles-1

    glBegin(GL_TRIANGLES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.49842887080263, 0.44568212137837);
    glVertex2f(-0.54949424574363, 0.03912317473272);
    glVertex2f(-0.42183080839113, 0.05876370355618);


    glEnd();

    /// black Tringles-2

    glBegin(GL_TRIANGLES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.49842887080263, 0.44568212137837);
    glVertex2f(0.54949424574363, 0.03912317473272);
    glVertex2f(0.42183080839113, 0.05876370355618);


    glEnd();

    /// black quads - 3

    glBegin(GL_QUADS);

    glColor3ub(1, 1, 1);
    glVertex2f(0.07900267660713, 0.000001);
    glVertex2f(-0.07900267660713, 0.000001);
    glVertex2f(-0.07900267660713, -0.16464690578598);
    glVertex2f(0.07900267660713, -0.16464690578598);

    glEnd();

    /// black thick line - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(12);

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.03775756607787, 0.08036828526199);
    glVertex2f(-0.03775756607787, 0.08036828526199);


    glEnd();

    glPopAttrib();
}

void parliament2()
{
    /// parliament House code

    /// Quads no - 1

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.7, -0.16464690578598);
    glVertex2f(-0.4, -0.16464690578598);

    glEnd();

    /// Quads no - 2

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.3, 0.4717680024523);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.4, -0.16464690578598);
    glVertex2f(-0.3, -0.16464690578598);

    glEnd();

    /// Quads no - 3

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.7, 0.45000155841227);
    glVertex2f(0.7, -0.16464690578598);
    glVertex2f(0.4, -0.16464690578598);

    glEnd();

    /// Quads no - 4

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.3, 0.4717680024523);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.4, -0.16464690578598);
    glVertex2f(0.3, -0.16464690578598);

    glEnd();

    /// polygon - 1

    glBegin(GL_POLYGON);

    glColor3ub(138, 116, 92);
    glVertex2f(0.20513952766454, 0.65877948889508);
    glVertex2f(-0.20513952766454, 0.65877948889508);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.3575370724666, 0.48761562801603);

    glVertex2f(-0.2, 0.44236541192157);
    glVertex2f(0.2, 0.44236541192157);
    glVertex2f(0.3575370724666, 0.48761562801603);
    glVertex2f(0.3575370724666, 0.62533367699918);


    glEnd();

    /// Quads no - 5 (black)

    glBegin(GL_QUADS);

    glColor3ub(0, 0, 255);
    glVertex2f(0.24539523258032, 0.6);
    glVertex2f(-0.24539523258032, 0.6);
    glVertex2f(-0.24539523258032, -0.16464690578598);
    glVertex2f(0.24539523258032, -0.16464690578598);

    glEnd();

    /// Quads no - 6 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.3, -0.16464690578598);
    glVertex2f(-0.1, -0.16464690578598);

    glEnd();

    /// Quads no - 7 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.1, 0.5);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.1, -0.16464690578598);
    glVertex2f(0.1, -0.16464690578598);

    glEnd();

    /// Quads no - 8 (middle)

    glBegin(GL_QUADS);

    glColor3ub(138, 116, 92);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, -0.16464690578598);
    glVertex2f(0.3, -0.16464690578598);

    glEnd();

    /// line works (vertical lines)(total -10 lines)

    /// Line no - 1

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.7, -0.16564690578598);

    glEnd();

    /// Line no - 2

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.57198374874035, 0.48692723190763);
    glVertex2f(-0.57198374874035, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 3

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.4, -0.16564690578598);

    glEnd();

    /// Line no - 4

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.3, -0.16564690578598);

    glEnd();

    /// Line no - 5

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.1, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 6

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 7

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.3, -0.16564690578598);

    glEnd();

    /// Line no - 8

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.4, -0.16564690578598);

    glEnd();

    /// Line no - 9

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(6);


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.57198374874035, 0.48692723190763);
    glVertex2f(0.57198374874035, -0.16564690578598);

    glEnd();

    glPopAttrib();

    /// Line no - 10

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.7, 0.45000155841227);
    glVertex2f(0.7, -0.16564690578598);

    glEnd();



    /// Horizontal lines

    /// Line no - 11
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.7, 0.45000155841227);
    glVertex2f(-0.4, 0.53995665973098);

    glEnd();



    /// Line no - 12

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.4, 0.53995665973098);
    glVertex2f(-0.3, 0.4717680024523);

    glEnd();


    /// Line no - 13

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3, 0.56237685460688);
    glVertex2f(-0.1, 0.5);

    glEnd();

    glPopAttrib ();

    /// Line no - 14

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3, 0.56237685460688);
    glVertex2f(0.1, 0.5);

    glEnd();

    glPopAttrib ();

    /// Line no - 15

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.3, 0.4717680024523);

    glEnd();

    /// Line no - 16


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.4, 0.53995665973098);
    glVertex2f(0.7, 0.45000155841227);

    glEnd();

    /// Line no - 16 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.3575370724666, 0.50761562801603);

    glEnd();

    /// Line no - 17 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3575370724666, 0.62533367699918);
    glVertex2f(0.3575370724666, 0.50761562801603);

    glEnd();

    /// Line no - 18 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.3575370724666, 0.62533367699918);
    glVertex2f(-0.20513952766454, 0.65877948889508);

    glEnd();

    /// Line no - 19 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.3575370724666, 0.62533367699918);
    glVertex2f(0.20513952766454, 0.65877948889508);

    glEnd();

    /// Line no - 20 (top side)


    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(-0.20513952766454, 0.65877948889508);
    glVertex2f(0.20513952766454, 0.65877948889508);

    glEnd();

    /// black quads

    /// black quads - 1

    glBegin(GL_QUADS);

    glColor3ub(0, 0, 255);
    glVertex2f(-0.41790270262644, 0.02144669879161);
    glVertex2f(-0.54949424574363, 0.00180616996814);
    glVertex2f(-0.54949424574363, -0.16464690578598);
    glVertex2f(-0.41790270262644, -0.16464690578598);

    glEnd();

    /// black quads - 2

    glBegin(GL_QUADS);

    glColor3ub(0, 0, 255);
    glVertex2f(0.41790270262644, 0.02144669879161);
    glVertex2f(0.54949424574363, 0.00180616996814);
    glVertex2f(0.54949424574363, -0.16464690578598);
    glVertex2f(0.41790270262644, -0.16464690578598);

    glEnd();

    /// black Tringles-1

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 0, 255);
    glVertex2f(-0.49842887080263, 0.44568212137837);
    glVertex2f(-0.54949424574363, 0.03912317473272);
    glVertex2f(-0.42183080839113, 0.05876370355618);


    glEnd();

    /// black Tringles-2

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 0, 255);
    glVertex2f(0.49842887080263, 0.44568212137837);
    glVertex2f(0.54949424574363, 0.03912317473272);
    glVertex2f(0.42183080839113, 0.05876370355618);


    glEnd();

    /// black quads - 3

    glBegin(GL_QUADS);

    glColor3ub(0, 0, 255);
    glVertex2f(0.07900267660713, 0.000001);
    glVertex2f(-0.07900267660713, 0.000001);
    glVertex2f(-0.07900267660713, -0.16464690578598);
    glVertex2f(0.07900267660713, -0.16464690578598);

    glEnd();

    /// black thick line - 1

    glPushAttrib (GL_LINE_BIT);
    glLineWidth(12);

    glBegin(GL_LINES);

    glColor3ub(1, 1, 1);
    glVertex2f(0.03775756607787, 0.08036828526199);
    glVertex2f(-0.03775756607787, 0.08036828526199);


    glEnd();

    glPopAttrib();
}

void Morning()
{
    /// Quads No-3 green Field

    glBegin(GL_QUADS);

    glColor3ub(0, 255, 0);
    ///glColor3ub(34, 139, 34);
    glVertex2f(1,-0.34787044263853);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(-1, -0.7);
    glVertex2f(1, -0.7);

    glEnd();


    Forest();
    Gate();
    Road();

    ///glPushMatrix();
    ///glTranslatef(car_1_position,0,0);
    ///Cars();
    ///Trucks();
    ///glPopMatrix();
    ///glLoadIdentity();

    glPushMatrix();
    glTranslatef(truck_position,0,0);
    ///Cars();
    Trucks();
    glPopMatrix();
    glLoadIdentity();

    Stairs();
    Sky();
    parliament();
    Clouds();
    glTranslatef(-1.5f, 0.0f, 0.0f);
    Sun();
    Birds();
    Flag();

    glFlush();
}

void Night()
{
    /// Quads No-3 green Field

    glBegin(GL_QUADS);

    ///glColor3ub(0, 255, 0);
    glColor3ub(34, 139, 34);
    glVertex2f(1,-0.34787044263853);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(-1, -0.7);
    glVertex2f(1, -0.7);

    glEnd();

    Forest();
    Gate();
    Road();

    Cars();
    glTranslatef(-1.1f, 0.156f, 0.0f);
    Trucks();
    glLoadIdentity();

    Stairs();
    //Sky();
    /// Quads No-5 (night sky)

    glBegin(GL_QUADS);

    glColor3ub(0, 0, 51);
    ///glColor3ub(1,1,1);


    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glVertex2f(-1, -0.16464690578598);
    glVertex2f(1, -0.16464690578598);

    glEnd();

    Star();
    parliament2();
    //Clouds();
    //Sun();
    Moon();
    //Birds();
    Flag();
    NightLight();
    glFlush();
}

void Evening()
{
    /// Quads No-3 green Field

    glBegin(GL_QUADS);

    glColor3ub(0, 255, 0);
    ///glColor3ub(34, 139, 34);
    glVertex2f(1,-0.34787044263853);
    glVertex2f(-1, -0.34787044263853);
    glVertex2f(-1, -0.7);
    glVertex2f(1, -0.7);

    glEnd();

    Forest();
    Gate();
    Road();

    glPushMatrix();
    glTranslatef(car_1_position,0,0);
    Cars();
    ///Trucks();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(truck_position,0,0);
    ///Cars();
    Trucks();
    glPopMatrix();
    glLoadIdentity();

    Stairs();
    ///Sky();
    // Quads No-5 (night sky)

    glBegin(GL_QUADS);

    ///glColor3ub(51, 153, 255);
    glColor3ub(240, 179, 117);
    ///glColor3ub(1,1,1);


    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glVertex2f(-1, -0.16464690578598);
    glVertex2f(1, -0.16464690578598);

    glEnd();
    parliament();
    Clouds();
    //glTranslatef(-1.5f, 0.0f, 0.0f);
    ///Sun();
    ///Sun
    glBegin(GL_TRIANGLE_FAN);

    x = 0.76952863377515f, y = 0.88159149111966f, radius = .08f;
    glColor3ub(255, 102, 102);
    glVertex2f(x, y);
    for(int i = 0; i <= tAmount; i++)
    {
        glVertex2f((x + radius * cos(i*tPi/tAmount)), (y + radius * sin(i*tPi/tAmount)));
    }

    glEnd();
    glLoadIdentity();
    //Moon();
    Birds();
    Flag();

    glFlush();
}


void nightCall(int val)
{
    Night();
}

void EveningCall(int val)
{
    Evening();
}

void soundMorningOn()
{
    PlaySound("evening.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundNightOn()
{
    PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void soundEveningOn()
{
    PlaySound("tlow.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}



void handleKeypress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'm':
        glutDisplayFunc(Morning);
        soundMorningOn();
        glutPostRedisplay();

        break;
    case 'n':
        glutDisplayFunc(Night);
        soundNightOn();
        glutPostRedisplay();
        break;
    case 'e':
        glutDisplayFunc(Evening);
        soundEveningOn();
        glutPostRedisplay();
        break;
        glutPostRedisplay();
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Parliament House Bangladesh");
    cout << "#################################################" << endl;
    cout << "#                                               #" << endl;
    cout << "#Welcome to National Parliament House Bangladesh#" << endl;
    cout << "#                                               #" << endl;
    cout << "#################################################" << endl;

    cout << "Press 'e' for Evening view" << endl;
    cout << "Press 'm' for Morning view" << endl;
    cout << "Press 'n' for night view" << endl;
    glutDisplayFunc(Morning);
    soundMorningOn();

    glutTimerFunc(100, bird_moving, 0);
    glutTimerFunc(100, cloud_moving, 0);
    glutTimerFunc(100, car_1_moving, 0);
    glutTimerFunc(100, truck_moving, 0);

    glutKeyboardFunc(handleKeypress);

    glutMainLoop();
    return 0;
}
