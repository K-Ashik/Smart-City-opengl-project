#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _angle1 = 0.0f;
float _move = 0.0f;
float _movef = 0.0f;
float _moveft = 0.0f;
float _movec = 0.0f;
float _movecb = 0.0f;
float _movew = 0.0f;
float _movefb = 0.0f;
float _move3 = 0.0f;
float speed = 0.0f;
float speedt = 0.0f;
float sr=0.52;
float sg=0.80;
float sb=0.98;
float str=0.52;
float stg=0.80;
float stb=0.98;
float mr=0.98;
float mg=0.83;
float mb=0.25;
float br= 130;
float bg= 150;
float bb= 137;
float br1= 1;
float bg1= 1;
float bb1= 1;
float br11= 132.6;
float bg11= 204;
float bb11= 250;
float tr=0;
float tg=1;
float tb=0;
float tr2=0;
float tg2=0;
float tb2=0;
int csp=1;
int cspm=1;

int dcheck=0;

//float savedSpeed = 0.0f;
//bool paused = false;
float getX(float x){
return x/750.00;
}
float getY(float y){
return y/400.00;
}
float getR(float x){
return x/255.00;
}
float getG(float y){
return y/255.00;
}

float getB(float x){
return x/255.00;
}



void drawSceneDay(){



}
void idle() {
   glutPostRedisplay();   // Post a re-paint request to activate display()
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

glPushMatrix();
    glBegin(GL_POLYGON);
 glColor3f(sr,sg,sb);
        glVertex3f(1.00f,  getY(36), 0.0f);
        glVertex3f(1.00f, getY(400), 0.0f);
        glVertex3f(-1.00f,getY(400), 0.0f);
        glVertex3f(-1.00f, getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///Stars///
    glPushMatrix();

        for(float i=-1.0;i<1.00;i+=0.21){
            for(float j=.60;j<1.00;j+=0.15){
                glPushMatrix();
                   glColor3d(str,stg,stb);
                   glTranslatef (i, j, 0.0f);
                   glutSolidSphere(0.002, 50, 50);
                glPopMatrix();


            }
        }
    glPopMatrix();
	/// Make Moon //
    glPushMatrix();
    //glTranslatef(6,0,0);
   glTranslatef(0.75, 0.87, 0.0);
   glColor3f(mr,mg,mb);
	glBegin(GL_POLYGON);

	for(int i=0;i<400;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float g=0.07;
		float b = g * cos(A);
		float d = g * sin(A);
		glVertex2f(b,d );
	}
	glEnd();
	glPopMatrix();
/// Make Cloud ///

///Cloud 1///

       glPushMatrix();
         glTranslatef(-0.8,0.87,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.05;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.75,0.87,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.05;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.78,0.835,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.78,0.91,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

///Cloud 2///

glPushMatrix();
         glTranslatef(-0.50,0.85,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.05;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.55,0.85,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.05;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.525,0.82,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.525,0.89,0.0);
         glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();


    ///Road
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.4,0.4,0.4);
        glVertex3f(1.00f,  +0.03-0.16, 0.0f);
        glVertex3f(1.00f, +.03-0.30, 0.0f);
        glVertex3f(-1.00f, +0.03-0.30f, 0.0f);
        glVertex3f(-1.00f, +0.03-0.16f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3d(0.4,0.4,0.4);
        glVertex3f(1.00f, -0.04+0.09, 0.0f);
        glVertex3f(1.00f, -0.04-0.05, 0.0f);
        glVertex3f(-1.00f, -0.04-0.05f, 0.0f);
        glVertex3f(-1.00f,-0.04+0.09f, 0.0f);
	glEnd();
    glPopMatrix();
    ///road white strips
    glPushMatrix();

    glColor3d(1,1,1);

    for(float i=-1;i<3;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex3f(i,+0.04-0.16, 0.0f);
        glVertex3f(i,+0.04 -0.14, 0.0f);
        glVertex3f(i+0.04f, +0.04-0.14f, 0.0f);
        glVertex3f(i+0.04f,+0.04-0.16f, 0.0f);
        glEnd();

    }
glPopMatrix();
///Rail Tracks///
glPushMatrix();
    for(float i=-1;i<3;i+=0.06){
        glColor3d(0.47,0.21,0.02);
        glBegin(GL_POLYGON);
        glVertex3f(0.02+i,-0.02-0.15-0.16, 0.0f);
        glVertex3f(0.02+i,-0.02-0.15 -0.14, 0.0f);
        glVertex3f(0.02+i+0.04f,-0.02-0.15-0.14f, 0.0f);
        glVertex3f(0.02+i+0.04f,-0.02-0.15-0.16f, 0.0f);
        glEnd();

        glColor3d(0.60,0.60,0.60);
        glBegin(GL_POLYGON);
        glVertex3f(+0.009+0.02+i,-0.02-0.15-0.16, 0.0f);
        glVertex3f(-0.009+0.02+i+0.04f,-0.02-0.15-0.16f, 0.0f);
        glVertex3f(-0.009+0.02+i+0.04f,+0.02-0.30-0.14f, 0.0f);
        glVertex3f(+0.009+0.02+i,+0.02-0.30 -0.14, 0.0f);


        glEnd();
        glColor3d(0.47,0.21,0.02);
        glBegin(GL_POLYGON);
        glVertex3f(0.02+i,+0.02-0.30-0.16, 0.0f);
        glVertex3f(0.02+i,+0.02-0.30 -0.14, 0.0f);
        glVertex3f(0.02+i+0.04f,+0.02-0.30-0.14f, 0.0f);
        glVertex3f(0.02+i+0.04f,+0.02-0.30-0.16f, 0.0f);
        glEnd();

    }
glPopMatrix();

///Train///
glPushMatrix();
glTranslatef(_moveft, 0.00f, 0.0f);
    ///TrB1
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3d(getR(1),getG(166),getB(17));
                glVertex3f(-0.7+0.5,-0.38, 0.0f);
                glVertex3f(-0.7+0.13,-0.38, 0.0f);
                glVertex3f(-0.7+0.1,-0.41, 0.0f);
                glVertex3f(-0.7+0.5,-0.41, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
     glColor3d(getR(1),getG(166),getB(17));
                glVertex3f(-0.7+0.5,-0.38, 0.0f);
                glVertex3f(-0.7+0.13,-0.38, 0.0f);
                glVertex3f(-0.7+0.13,-0.32, 0.0f);
                glVertex3f(-0.7+0.5,-0.32, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(1,1,1);
                glVertex3f(-0.7+0.5,-0.32, 0.0f);
                glVertex3f(-0.7+0.13,-0.32, 0.0f);
                glVertex3f(-0.7+0.14,-0.30, 0.0f);
                glVertex3f(-0.7+0.5,-0.30, 0.0f);
        glEnd();
    glPopMatrix();
///Connector///
glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3d(1.0,1.0,1.0);
        glVertex3f(-0.7+0.5,-0.40, 0.0f);
        glVertex3f(-0.7+0.5,-0.385, 0.0f);
        glVertex3f(-0.7+0.52,-0.385, 0.0f);
        glVertex3f(-0.7+0.52,-0.40, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3d(1.0,1.0,1.0);
        glVertex3f(-0.7+0.92,-0.40, 0.0f);
        glVertex3f(-0.7+0.92,-0.385, 0.0f);
        glVertex3f(-0.7+0.94,-0.385, 0.0f);
        glVertex3f(-0.7+0.94,-0.40, 0.0f);
    glEnd();
glPopMatrix();

    ///TrB2
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3d(1,1,1);
                    glVertex3f(-0.7+0.92,-0.41, 0.0f);
                    glVertex3f(-0.7+0.52,-0.41, 0.0f);
                    glVertex3f(-0.7+0.52,-0.30, 0.0f);
                    glVertex3f(-0.7+0.92,-0.30, 0.0f);
        glEnd();
    glPopMatrix();
    ///TrB3
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3d(1,1,1);
                    glVertex3f(-0.7+0.94,-0.41, 0.0f);
                    glVertex3f(-0.7+1.34,-0.41, 0.0f);
                    glVertex3f(-0.7+1.34,-0.30, 0.0f);
                    glVertex3f(-0.7+0.94,-0.30, 0.0f);
        glEnd();
    glPopMatrix();
    ///TrWndB1
    glPushMatrix();
        for(float i=0.15;i<0.5;i+=0.05){
            glBegin(GL_POLYGON);
            glColor3d(0,0,0);
                glVertex3f(-0.7+i-0.002,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.327, 0.0f);
                glVertex3f(-0.7+i-0.002,-0.327, 0.0f);
            glEnd();
        }
        for(float i=0.15;i<0.5;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3d(getR(br),getG(bg),getB(bb));
                glVertex3f(-0.7+i,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.33, 0.0f);
                glVertex3f(-0.7+i,-0.33, 0.0f);
            glEnd();
        }
    glPopMatrix();
    ///TrWndB2
    glPushMatrix();
        for(float i=0.54;i<0.92;i+=0.05){
            glBegin(GL_POLYGON);
            glColor3d(0,0,0);
                glVertex3f(-0.7+i-0.002,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.327, 0.0f);
                glVertex3f(-0.7+i-0.002,-0.327, 0.0f);
            glEnd();
        }
        for(float i=0.54;i<0.92;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3d(getR(br),getG(bg),getB(bb));
                glVertex3f(-0.7+i,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.33, 0.0f);
                glVertex3f(-0.7+i,-0.33, 0.0f);
            glEnd();
        }
    glPopMatrix();
    ///TrWndB3
    glPushMatrix();
        for(float i=0.96;i<1.34;i+=0.05){
            glBegin(GL_POLYGON);
            glColor3d(0,0,0);
                glVertex3f(-0.7+i-0.002,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.373, 0.0f);
                glVertex3f(-0.7+i+0.022,-0.327, 0.0f);
                glVertex3f(-0.7+i-0.002,-0.327, 0.0f);
            glEnd();
        }
        for(float i=0.96;i<1.34;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3d(getR(br),getG(bg),getB(bb));
                glVertex3f(-0.7+i,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.37, 0.0f);
                glVertex3f(-0.7+i+0.02,-0.33, 0.0f);
                glVertex3f(-0.7+i,-0.33, 0.0f);
            glEnd();
        }
    glPopMatrix();
    ///TrB1whealf
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+0.17,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
    ///TrB1whealb
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+0.43,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
    ///TrB2whealf
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+0.59,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
    ///TrB2whealb
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+0.85,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
    ///TrB3whealf
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+1.01,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
    ///TrB3whealb
    glPushMatrix();
           glColor3d(0,0,0);
           glTranslatef(-0.7+1.27,-0.41, 0.0f);
           glutSolidSphere(0.017, 50, 50);
    glPopMatrix();
glPopMatrix();
///CarT1Uplane
    glPushMatrix();
glTranslatef(_angle1, +0.35f, 0.0f);

    glPushMatrix();
    ///LBody///
    glBegin(GL_POLYGON);
    glColor3d(0.8,0.8,0.8);
        glVertex3f(-1.00f, -0.40f, 0.0f);
        glVertex3f(-0.99f, -0.34f, 0.0f);
        glVertex3f(-0.71f, -0.34f, 0.0f);
        glVertex3f(-0.70f, -0.40f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3d(0.8,0.8,0.8);
        glVertex3f(-0.92f, -0.34f, 0.0f);
        glVertex3f(-0.880f, -0.29f, 0.0f);
        glVertex3f(-0.820f, -0.29f, 0.0f);
        glVertex3f(-0.78f, -0.34f, 0.0f);
	glEnd();
	///BWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(-0.915f, -0.34f, 0.0f);
        glVertex3f(-0.875f, -0.295f, 0.0f);
        glVertex3f(-0.852f, -0.295f, 0.0f);
        glVertex3f(-0.852f, -0.34f, 0.0f);
	glEnd();
	///MidLine///
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(-0.851f, -0.34f, 0.0f);
        glVertex3f(-0.851f, -0.295f, 0.0f);
        glVertex3f(-0.848f, -0.295f, 0.0f);
        glVertex3f(-0.848f, -0.34f, 0.0f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(-0.785f, -0.34f, 0.0f);
        glVertex3f(-0.825f, -0.295f, 0.0f);
        glVertex3f(-0.847f, -0.295f, 0.0f);
        glVertex3f(-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.95, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.75, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();

   ///CarT1
    glPushMatrix();
    glTranslatef(_movec, +0.20f, 0.0f);
    glPushMatrix();
    ///LBody///
    glBegin(GL_POLYGON);
    glColor3d(0.4,0.8,0.4);
        glVertex3f(-1.00f, -0.40f, 0.0f);
        glVertex3f(-0.99f, -0.34f, 0.0f);
        glVertex3f(-0.71f, -0.34f, 0.0f);
        glVertex3f(-0.70f, -0.40f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3d(0.4,0.8,0.4);
        glVertex3f(-0.92f, -0.34f, 0.0f);
        glVertex3f(-0.880f, -0.29f, 0.0f);
        glVertex3f(-0.820f, -0.29f, 0.0f);
        glVertex3f(-0.78f, -0.34f, 0.0f);
	glEnd();
	///BWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(-0.915f, -0.34f, 0.0f);
        glVertex3f(-0.875f, -0.295f, 0.0f);
        glVertex3f(-0.852f, -0.295f, 0.0f);
        glVertex3f(-0.852f, -0.34f, 0.0f);
	glEnd();
	///MidLine///
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(-0.851f, -0.34f, 0.0f);
        glVertex3f(-0.851f, -0.295f, 0.0f);
        glVertex3f(-0.848f, -0.295f, 0.0f);
        glVertex3f(-0.848f, -0.34f, 0.0f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(-0.785f, -0.34f, 0.0f);
        glVertex3f(-0.825f, -0.295f, 0.0f);
        glVertex3f(-0.847f, -0.295f, 0.0f);
        glVertex3f(-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.95, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.75, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();


    ///CarT2
    glPushMatrix();
    glTranslatef(_movec, +0.19f, 0.0f);

    ///LBody///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.4,0.8,0.8);
        glVertex3f(+0.9-1.00f, -0.40f, 0.0f);
        glVertex3f(+0.9-0.99f, -0.34f, 0.0f);
        glVertex3f(+0.9-0.71f, -0.34f, 0.0f);
        glVertex3f(+0.9-0.70f, -0.40f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3d(0.4,0.8,0.8);
        glVertex3f(+0.925-0.852f, -0.34f, 0.0f);
        glVertex3f(+0.925-0.852f, -0.29f, 0.0f);
        glVertex3f(+0.925-0.820f, -0.29f, 0.0f);
        glVertex3f(+0.925-0.78f, -0.34f, 0.0f);
	glEnd();

	///MidLine///
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(+0.925-0.851f, -0.34f, 0.0f);
        glVertex3f(+0.925-0.851f, -0.295f, 0.0f);
        glVertex3f(+0.925-0.848f, -0.295f, 0.0f);
        glVertex3f(+0.925-0.848f, -0.34f, 0.0f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(+0.925-0.785f, -0.34f, 0.0f);
        glVertex3f(+0.925-0.825f, -0.295f, 0.0f);
        glVertex3f(+0.925-0.847f, -0.295f, 0.0f);
        glVertex3f(+0.925-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (+0.9-0.95, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (+0.9-0.75, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();

    ///CarT3
    glPushMatrix();
    glTranslatef(_movec, +0.21f, 0.0f);
    ///LBody///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.7,0.8,0.8);
        glVertex3f(+1.3-1.00f, -0.40f, 0.0f);
        glVertex3f(+1.3-1.00f, -0.34f, 0.0f);
        glVertex3f(+1.3-0.71f, -0.34f, 0.0f);
        glVertex3f(+1.3-0.70f, -0.40f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3d(0.7,0.8,0.8);
        glVertex3f(+1.3-1.0f, -0.34f, 0.0f);
        glVertex3f(+1.3-1.0f, -0.29f, 0.0f);
        glVertex3f(+1.325-0.820f, -0.29f, 0.0f);
        glVertex3f(+1.325-0.78f, -0.34f, 0.0f);
	glEnd();

	///MidLine///
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(+1.325-0.851f, -0.34f, 0.0f);
        glVertex3f(+1.325-0.851f, -0.295f, 0.0f);
        glVertex3f(+1.325-0.848f, -0.295f, 0.0f);
        glVertex3f(+1.325-0.848f, -0.34f, 0.0f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(+1.325-0.785f, -0.34f, 0.0f);
        glVertex3f(+1.325-0.825f, -0.295f, 0.0f);
        glVertex3f(+1.325-0.847f, -0.295f, 0.0f);
        glVertex3f(+1.325-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (+1.3-0.95, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (+1.3-0.75, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();

///GrassField///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0.1);
        glVertex3f(1.00f,  -0.48, 0.0f);
        glVertex3f(1.00f, -0.58, 0.0f);
        glVertex3f(-1.00f, -0.58f, 0.0f);
        glVertex3f(-1.00f, -0.48f, 0.0f);
	glEnd();
    glPopMatrix();

    ///buildings1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.1, 0.30, 0.34);
        glVertex3f(getX(720), getY(36), 0.0f);
        glVertex3f(getX(720), getY(300), 0.0f);
        glVertex3f(getX(600), getY(300), 0.0f);
        glVertex3f(getX(600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings1.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.05, 0.20, 0.28);
        glVertex3f(getX(740), getY(36), 0.0f);
        glVertex3f(getX(740), getY(250), 0.0f);
        glVertex3f(getX(720), getY(300), 0.0f);
        glVertex3f(getX(720), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b1 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(690), getY(36), 0.0f);
        glVertex3f(getX(690), getY(72), 0.0f);
        glVertex3f(getX(630), getY(72), 0.0f);
        glVertex3f(getX(630), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
     ///b1 window
    glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(700), getY(100), 0.0f);
        glVertex3f(getX(700), getY(125), 0.0f);
        glVertex3f(getX(680), getY(125), 0.0f);
        glVertex3f(getX(680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
  glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(620), getY(100), 0.0f);
        glVertex3f(getX(620), getY(125), 0.0f);
        glVertex3f(getX(640), getY(125), 0.0f);
        glVertex3f(getX(640), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
        //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

        glVertex3f(getX(620), getY(155), 0.0f);
        glVertex3f(getX(620), getY(180), 0.0f);
        glVertex3f(getX(640), getY(180), 0.0f);
        glVertex3f(getX(640), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
       //
     glPushMatrix();
    glBegin(GL_POLYGON);
glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(700), getY(155), 0.0f);
        glVertex3f(getX(700), getY(180), 0.0f);
        glVertex3f(getX(680), getY(180), 0.0f);
        glVertex3f(getX(680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(700), getY(205), 0.0f);
        glVertex3f(getX(700), getY(230), 0.0f);
        glVertex3f(getX(680), getY(230), 0.0f);
        glVertex3f(getX(680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(620), getY(205), 0.0f);
        glVertex3f(getX(620), getY(230), 0.0f);
        glVertex3f(getX(640), getY(230), 0.0f);
        glVertex3f(getX(640), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(620), getY(255), 0.0f);
        glVertex3f(getX(620), getY(280), 0.0f);
        glVertex3f(getX(640), getY(280), 0.0f);
        glVertex3f(getX(640), getY(255), 0.0f);
	glEnd();
    glPopMatrix();

  ///
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);
        glVertex3f(getX(700), getY(255), 0.0f);
        glVertex3f(getX(700), getY(280), 0.0f);
        glVertex3f(getX(680), getY(280), 0.0f);
        glVertex3f(getX(680), getY(255), 0.0f);
	glEnd();
    glPopMatrix();
        ///building 2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.55, 0.35, 0.0);
        glVertex3f(getX(550), getY(36), 0.0f);
        glVertex3f(getX(550), getY(300), 0.0f);
        glVertex3f(getX(400), getY(300), 0.0f);
        glVertex3f(getX(400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings2.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.40, 0.20, 0.0);
        glVertex3f(getX(565), getY(36), 0.0f);
        glVertex3f(getX(565), getY(250), 0.0f);
        glVertex3f(getX(550), getY(300), 0.0f);
        glVertex3f(getX(550), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b2 door
   glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(540), getY(36), 0.0f);
        glVertex3f(getX(540), getY(72), 0.0f);
        glVertex3f(getX(500), getY(72), 0.0f);
        glVertex3f(getX(500), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(520), getY(90), 0.0f);
        glVertex3f(getX(520), getY(115), 0.0f);
        glVertex3f(getX(500), getY(115), 0.0f);
        glVertex3f(getX(500), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(430), getY(90), 0.0f);
        glVertex3f(getX(430), getY(115), 0.0f);
        glVertex3f(getX(450), getY(115), 0.0f);
        glVertex3f(getX(450), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(430), getY(145), 0.0f);
        glVertex3f(getX(430), getY(170), 0.0f);
        glVertex3f(getX(450), getY(170), 0.0f);
        glVertex3f(getX(450), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
     ///
    glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(520), getY(145), 0.0f);
        glVertex3f(getX(520), getY(170), 0.0f);
        glVertex3f(getX(500), getY(170), 0.0f);
        glVertex3f(getX(500), getY(145), 0.0f);
	glEnd();
    glPopMatrix();

     ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(520), getY(200), 0.0f);
        glVertex3f(getX(520), getY(225), 0.0f);
        glVertex3f(getX(500), getY(225), 0.0f);
        glVertex3f(getX(500), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
      ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(430), getY(200), 0.0f);
        glVertex3f(getX(430), getY(225), 0.0f);
        glVertex3f(getX(450), getY(225), 0.0f);
        glVertex3f(getX(450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
  glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(430), getY(250), 0.0f);
        glVertex3f(getX(430), getY(275), 0.0f);
        glVertex3f(getX(450), getY(275), 0.0f);
        glVertex3f(getX(450), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(520), getY(250), 0.0f);
        glVertex3f(getX(520), getY(275), 0.0f);
        glVertex3f(getX(500), getY(275), 0.0f);
        glVertex3f(getX(500), getY(250), 0.0f);
	glEnd();
    glPopMatrix();

    ///grass
     glPushMatrix();
    glBegin(GL_POLYGON); //Mushroom
	glColor3f(0,0.8,0.1);
        glVertex3f(getX(-740+20),getY(-200),0.0f);
        glVertex3f(getX(-750+20),getY(-170+10),0.0f);
        glVertex3f(getX(-736+20),getY(-185+10),0.0f);
        glVertex3f(getX(-725+20),getY(-150+10),0.0f);
        glVertex3f(getX(-710+20),getY(-185+10),0.0f);
        glVertex3f(getX(-695+20),getY(-175+10),0.0f);
        glVertex3f(getX(-710+20),getY(-200),0.0f);
        //glVertex3f(getX(-725),getY(-100),0.0f);
       // glVertex3f(getX(-712.5),getY(-200),0.0f);



	glEnd();
    glPopMatrix();

    ///buildings3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.50, 0.30, 0.30);
        glVertex3f(getX(-720), getY(36), 0.0f);
        glVertex3f(getX(-720), getY(300), 0.0f);
        glVertex3f(getX(-600), getY(300), 0.0f);
        glVertex3f(getX(-600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings31
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.25, 0.15, 0.15);
        glVertex3f(getX(-585), getY(36), 0.0f);
        glVertex3f(getX(-585), getY(250), 0.0f);
        glVertex3f(getX(-600), getY(300), 0.0f);
        glVertex3f(getX(-600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b1 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-690), getY(36), 0.0f);
        glVertex3f(getX(-690), getY(72), 0.0f);
        glVertex3f(getX(-630), getY(72), 0.0f);
        glVertex3f(getX(-630), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
     ///b1 window
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-700), getY(100), 0.0f);
        glVertex3f(getX(-700), getY(125), 0.0f);
        glVertex3f(getX(-680), getY(125), 0.0f);
        glVertex3f(getX(-680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-620), getY(100), 0.0f);
        glVertex3f(getX(-620), getY(125), 0.0f);
        glVertex3f(getX(-640), getY(125), 0.0f);
        glVertex3f(getX(-640), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
        //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);
        glVertex3f(getX(-620), getY(155), 0.0f);
        glVertex3f(getX(-620), getY(180), 0.0f);
        glVertex3f(getX(-640), getY(180), 0.0f);
        glVertex3f(getX(-640), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
       //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-700), getY(155), 0.0f);
        glVertex3f(getX(-700), getY(180), 0.0f);
        glVertex3f(getX(-680), getY(180), 0.0f);
        glVertex3f(getX(-680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-700), getY(205), 0.0f);
        glVertex3f(getX(-700), getY(230), 0.0f);
        glVertex3f(getX(-680), getY(230), 0.0f);
        glVertex3f(getX(-680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-620), getY(205), 0.0f);
        glVertex3f(getX(-620), getY(230), 0.0f);
        glVertex3f(getX(-640), getY(230), 0.0f);
        glVertex3f(getX(-640), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-620), getY(255), 0.0f);
        glVertex3f(getX(-620), getY(280), 0.0f);
        glVertex3f(getX(-640), getY(280), 0.0f);
        glVertex3f(getX(-640), getY(255), 0.0f);
	glEnd();
    glPopMatrix();

  ///
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-700), getY(255), 0.0f);
        glVertex3f(getX(-700), getY(280), 0.0f);
        glVertex3f(getX(-680), getY(280), 0.0f);
        glVertex3f(getX(-680), getY(255), 0.0f);
	glEnd();
    glPopMatrix();
        ///building 4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-550), getY(36), 0.0f);
        glVertex3f(getX(-550), getY(300), 0.0f);
        glVertex3f(getX(-400), getY(300), 0.0f);
        glVertex3f(getX(-400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings41
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.1, 0.30, 0.219);
        glVertex3f(getX(-385), getY(36), 0.0f);
        glVertex3f(getX(-385), getY(250), 0.0f);
        glVertex3f(getX(-400), getY(300), 0.0f);
        glVertex3f(getX(-400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b2 door
   glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-540), getY(36), 0.0f);
        glVertex3f(getX(-540), getY(72), 0.0f);
        glVertex3f(getX(-500), getY(72), 0.0f);
        glVertex3f(getX(-500), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-520), getY(90), 0.0f);
        glVertex3f(getX(-520), getY(115), 0.0f);
        glVertex3f(getX(-500), getY(115), 0.0f);
        glVertex3f(getX(-500), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-430), getY(90), 0.0f);
        glVertex3f(getX(-430), getY(115), 0.0f);
        glVertex3f(getX(-450), getY(115), 0.0f);
        glVertex3f(getX(-450), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-430), getY(145), 0.0f);
        glVertex3f(getX(-430), getY(170), 0.0f);
        glVertex3f(getX(-450), getY(170), 0.0f);
        glVertex3f(getX(-450), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
     ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.843, 0.000);
        glVertex3f(getX(-520), getY(145), 0.0f);
        glVertex3f(getX(-520), getY(170), 0.0f);
        glVertex3f(getX(-500), getY(170), 0.0f);
        glVertex3f(getX(-500), getY(145), 0.0f);
	glEnd();
    glPopMatrix();

     ///
    glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-520), getY(200), 0.0f);
        glVertex3f(getX(-520), getY(225), 0.0f);
        glVertex3f(getX(-500), getY(225), 0.0f);
        glVertex3f(getX(-500), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
      ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-430), getY(200), 0.0f);
        glVertex3f(getX(-430), getY(225), 0.0f);
        glVertex3f(getX(-450), getY(225), 0.0f);
        glVertex3f(getX(-450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-430), getY(250), 0.0f);
        glVertex3f(getX(-430), getY(275), 0.0f);
        glVertex3f(getX(-450), getY(275), 0.0f);
        glVertex3f(getX(-450), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));
        glVertex3f(getX(-520), getY(250), 0.0f);
        glVertex3f(getX(-520), getY(275), 0.0f);
        glVertex3f(getX(-500), getY(275), 0.0f);
        glVertex3f(getX(-500), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    ///////////////////////////////////////////

   /// field flag
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(250), getY(330), 0.0f);
        glVertex3f(getX(250), getY(375), 0.0f);
        glVertex3f(getX(245), getY(375), 0.0f);
        glVertex3f(getX(245), getY(330), 0.0f);

	glEnd();
    glPopMatrix();
    /// field flag2
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(180), getY(330), 0.0f);
        glVertex3f(getX(180), getY(375), 0.0f);
        glVertex3f(getX(175), getY(375), 0.0f);
        glVertex3f(getX(175), getY(330), 0.0f);

	glEnd();
    glPopMatrix();
    /// field flag  BD green
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
        glVertex3f(getX(280), getY(360), 0.0f);
        glVertex3f(getX(280), getY(375), 0.0f);
        glVertex3f(getX(250), getY(375), 0.0f);
        glVertex3f(getX(250), getY(360), 0.0f);
	glEnd();
    glPopMatrix();
     /// field flag  BD red
     glPushMatrix();
	   glColor3d(1,0,0);
	   glTranslatef (.35, .92, 0.0f);
	   glutSolidSphere(0.01, 50, 50);
    glPopMatrix();
    /// field flag india white
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(210), getY(360), 0.0f);
        glVertex3f(getX(210), getY(375), 0.0f);
        glVertex3f(getX(175), getY(375), 0.0f);
        glVertex3f(getX(175), getY(360), 0.0f);

	glEnd();
    glPopMatrix();
     /// field flag india green
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
        glVertex3f(getX(210), getY(360), 0.0f);
        glVertex3f(getX(210), getY(365), 0.0f);
        glVertex3f(getX(175), getY(365), 0.0f);
        glVertex3f(getX(175), getY(360), 0.0f);

	glEnd();
    glPopMatrix();
    /// field flag india brown
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,.50,.34);
        glVertex3f(getX(210), getY(370), 0.0f);
        glVertex3f(getX(210), getY(375), 0.0f);
        glVertex3f(getX(175), getY(375), 0.0f);
        glVertex3f(getX(175), getY(370), 0.0f);

	glEnd();
    glPopMatrix();
   /// field buiding
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.55, 0.35, 0.0);
        glVertex3f(getX(250), getY(240), 0.0f);
        glVertex3f(getX(250), getY(330), 0.0f);
        glVertex3f(getX(50), getY(330), 0.0f);
        glVertex3f(getX(50), getY(240), 0.0f);
	glEnd();
    glPopMatrix();
    /// field buiding.1
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.40, 0.20, 0.0);
        glVertex3f(getX(265), getY(240), 0.0f);
        glVertex3f(getX(265), getY(290), 0.0f);
        glVertex3f(getX(250), getY(330), 0.0f);
        glVertex3f(getX(250), getY(240), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win1
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(230), getY(270), 0.0f);
        glVertex3f(getX(230), getY(290), 0.0f);
        glVertex3f(getX(200), getY(290), 0.0f);
        glVertex3f(getX(200), getY(270), 0.0f);
	glEnd();
    glPopMatrix();
    /// field buiding  win2
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(180), getY(270), 0.0f);
        glVertex3f(getX(180), getY(290), 0.0f);
        glVertex3f(getX(150), getY(290), 0.0f);
        glVertex3f(getX(150), getY(270), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win3
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(130), getY(270), 0.0f);
        glVertex3f(getX(130), getY(290), 0.0f);
        glVertex3f(getX(100), getY(290), 0.0f);
        glVertex3f(getX(100), getY(270), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win4
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(80), getY(270), 0.0f);
        glVertex3f(getX(80), getY(290), 0.0f);
        glVertex3f(getX(55), getY(290), 0.0f);
        glVertex3f(getX(55), getY(270), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win21
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(230), getY(300), 0.0f);
        glVertex3f(getX(230), getY(320), 0.0f);
        glVertex3f(getX(200), getY(320), 0.0f);
        glVertex3f(getX(200), getY(300), 0.0f);
	glEnd();
    glPopMatrix();
    /// field buiding  win2
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(180), getY(300), 0.0f);
        glVertex3f(getX(180), getY(320), 0.0f);
        glVertex3f(getX(150), getY(320), 0.0f);
        glVertex3f(getX(150), getY(300), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win3
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(130), getY(300), 0.0f);
        glVertex3f(getX(130), getY(320), 0.0f);
        glVertex3f(getX(100), getY(320), 0.0f);
        glVertex3f(getX(100), getY(300), 0.0f);
	glEnd();
    glPopMatrix();
     /// field buiding  win4
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(80), getY(300), 0.0f);
        glVertex3f(getX(80), getY(320), 0.0f);
        glVertex3f(getX(55), getY(320), 0.0f);
        glVertex3f(getX(55), getY(300), 0.0f);
	glEnd();
    glPopMatrix();
///foot
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(getR(1),getG(166),getB(17));
        glVertex3f(getX(15), getY(36), 0.0f);
        glVertex3f(getX(50), getY(240), 0.0f);
        glVertex3f(getX(250), getY(240), 0.0f);
        glVertex3f(getX(285), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///footline
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(35), getY(150), 0.0f);
        glVertex3f(getX(35), getY(153), 0.0f);
        glVertex3f(getX(265), getY(153), 0.0f);
        glVertex3f(getX(265), getY(150), 0.0f);
	glEnd();
    glPopMatrix();
///
   ///foot incircle
 glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.2, 0.37, 0.0);
	glBegin(GL_LINES);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///bar
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115), getY(36), 0.0f);
        glVertex3f(getX(115), getY(65), 0.0f);
        glVertex3f(getX(118), getY(65), 0.0f);
        glVertex3f(getX(118), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
//
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115+70), getY(36), 0.0f);
        glVertex3f(getX(115+70), getY(65), 0.0f);
        glVertex3f(getX(118+70), getY(65), 0.0f);
        glVertex3f(getX(118+70), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115), getY(65), 0.0f);
        glVertex3f(getX(115), getY(68), 0.0f);
        glVertex3f(getX(118+70), getY(68), 0.0f);
        glVertex3f(getX(118+70), getY(65), 0.0f);
	glEnd();
    glPopMatrix();
///bar 2
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115), getY(240), 0.0f);
        glVertex3f(getX(115), getY(255), 0.0f);
        glVertex3f(getX(118), getY(255), 0.0f);
        glVertex3f(getX(118), getY(240), 0.0f);
	glEnd();
    glPopMatrix();
//
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115+70), getY(240), 0.0f);
        glVertex3f(getX(115+70), getY(255), 0.0f);
        glVertex3f(getX(118+70), getY(255), 0.0f);
        glVertex3f(getX(118+70), getY(240), 0.0f);
	glEnd();
    glPopMatrix();
///
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(115), getY(255), 0.0f);
        glVertex3f(getX(115), getY(258), 0.0f);
        glVertex3f(getX(118+70), getY(258), 0.0f);
        glVertex3f(getX(118+70), getY(255), 0.0f);
	glEnd();
    glPopMatrix();
///player
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.1, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70), getY(205), 0.0f);
        glVertex3f(getX(70), getY(217), 0.0f);
        glVertex3f(getX(80), getY(217), 0.0f);
        glVertex3f(getX(80), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70), getY(205), 0.0f);
        glVertex3f(getX(70), getY(195), 0.0f);
        glVertex3f(getX(74), getY(195), 0.0f);
        glVertex3f(getX(74), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80), getY(205), 0.0f);
        glVertex3f(getX(80), getY(195), 0.0f);
        glVertex3f(getX(76), getY(195), 0.0f);
        glVertex3f(getX(76), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///p2
///player
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.14, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+30), getY(205), 0.0f);
        glVertex3f(getX(70+30), getY(217), 0.0f);
        glVertex3f(getX(80+30), getY(217), 0.0f);
        glVertex3f(getX(80+30), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+30), getY(205), 0.0f);
        glVertex3f(getX(70+30), getY(195), 0.0f);
        glVertex3f(getX(74+30), getY(195), 0.0f);
        glVertex3f(getX(74+30), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80+30), getY(205), 0.0f);
        glVertex3f(getX(80+30), getY(195), 0.0f);
        glVertex3f(getX(76+30), getY(195), 0.0f);
        glVertex3f(getX(76+30), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///p3
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.18, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+60), getY(205), 0.0f);
        glVertex3f(getX(70+60), getY(217), 0.0f);
        glVertex3f(getX(80+60), getY(217), 0.0f);
        glVertex3f(getX(80+60), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+60), getY(205), 0.0f);
        glVertex3f(getX(70+60), getY(195), 0.0f);
        glVertex3f(getX(74+60), getY(195), 0.0f);
        glVertex3f(getX(74+60), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80+60), getY(205), 0.0f);
        glVertex3f(getX(80+60), getY(195), 0.0f);
        glVertex3f(getX(76+60), getY(195), 0.0f);
        glVertex3f(getX(76+60), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///p4
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.22, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+90), getY(205), 0.0f);
        glVertex3f(getX(70+90), getY(217), 0.0f);
        glVertex3f(getX(80+90), getY(217), 0.0f);
        glVertex3f(getX(80+90), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+90), getY(205), 0.0f);
        glVertex3f(getX(70+90), getY(195), 0.0f);
        glVertex3f(getX(74+90), getY(195), 0.0f);
        glVertex3f(getX(74+90), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80+90), getY(205), 0.0f);
        glVertex3f(getX(80+90), getY(195), 0.0f);
        glVertex3f(getX(76+90), getY(195), 0.0f);
        glVertex3f(getX(76+90), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///p5
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.26, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+120), getY(205), 0.0f);
        glVertex3f(getX(70+120), getY(217), 0.0f);
        glVertex3f(getX(80+120), getY(217), 0.0f);
        glVertex3f(getX(80+120), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+120), getY(205), 0.0f);
        glVertex3f(getX(70+120), getY(195), 0.0f);
        glVertex3f(getX(74+120), getY(195), 0.0f);
        glVertex3f(getX(74+120), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80+120), getY(205), 0.0f);
        glVertex3f(getX(80+120), getY(195), 0.0f);
        glVertex3f(getX(76+120), getY(195), 0.0f);
        glVertex3f(getX(76+120), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
   ///p6
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.3, 0.55, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+150), getY(205), 0.0f);
        glVertex3f(getX(70+150), getY(217), 0.0f);
        glVertex3f(getX(80+150), getY(217), 0.0f);
        glVertex3f(getX(80+150), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+150), getY(205), 0.0f);
        glVertex3f(getX(70+150), getY(195), 0.0f);
        glVertex3f(getX(74+150), getY(195), 0.0f);
        glVertex3f(getX(74+150), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80+150), getY(205), 0.0f);
        glVertex3f(getX(80+150), getY(195), 0.0f);
        glVertex3f(getX(76+150), getY(195), 0.0f);
        glVertex3f(getX(76+150), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
////////////////////////////////////////////////////////////////4
///ball
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.13, 0.425, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.014;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///
glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.13, 0.425, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.007;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///refar
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.1, 0.425, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(getR(218),getG(165),getB(32));
        glVertex3f(getX(70), getY(205-50), 0.0f);
        glVertex3f(getX(70), getY(217-50), 0.0f);
        glVertex3f(getX(80), getY(217-50), 0.0f);
        glVertex3f(getX(80), getY(205-50), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70), getY(205-50), 0.0f);
        glVertex3f(getX(70), getY(195-50), 0.0f);
        glVertex3f(getX(74), getY(195-50), 0.0f);
        glVertex3f(getX(74), getY(205-50), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(80), getY(205-50), 0.0f);
        glVertex3f(getX(80), getY(195-50), 0.0f);
        glVertex3f(getX(76), getY(195-50), 0.0f);
        glVertex3f(getX(76), getY(205-50), 0.0f);
	glEnd();
    glPopMatrix();
///player
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.1, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70), getY(205-100), 0.0f);
        glVertex3f(getX(70), getY(217-100), 0.0f);
        glVertex3f(getX(80), getY(217-100), 0.0f);
        glVertex3f(getX(80), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70), getY(205-100), 0.0f);
        glVertex3f(getX(70), getY(195-100), 0.0f);
        glVertex3f(getX(74), getY(195-100), 0.0f);
        glVertex3f(getX(74), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(80), getY(205-100), 0.0f);
        glVertex3f(getX(80), getY(195-100), 0.0f);
        glVertex3f(getX(76), getY(195-100), 0.0f);
        glVertex3f(getX(76), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///p2
///player
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.14, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+30), getY(205-100), 0.0f);
        glVertex3f(getX(70+30), getY(217-100), 0.0f);
        glVertex3f(getX(80+30), getY(217-100), 0.0f);
        glVertex3f(getX(80+30), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
      glColor3d(1,1,1);
        glVertex3f(getX(70+30), getY(205-100), 0.0f);
        glVertex3f(getX(70+30), getY(195-100), 0.0f);
        glVertex3f(getX(74+30), getY(195-100), 0.0f);
        glVertex3f(getX(74+30), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
 glColor3d(1,1,1);
         glVertex3f(getX(80+30), getY(205-100), 0.0f);
        glVertex3f(getX(80+30), getY(195-100), 0.0f);
        glVertex3f(getX(76+30), getY(195-100), 0.0f);
        glVertex3f(getX(76+30), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///p3
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.18, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+60), getY(205-100), 0.0f);
        glVertex3f(getX(70+60), getY(217-100), 0.0f);
        glVertex3f(getX(80+60), getY(217-100), 0.0f);
        glVertex3f(getX(80+60), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
 glColor3d(1,1,1);
         glVertex3f(getX(70+60), getY(205-100), 0.0f);
        glVertex3f(getX(70+60), getY(195-100), 0.0f);
        glVertex3f(getX(74+60), getY(195-100), 0.0f);
        glVertex3f(getX(74+60), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
 glColor3d(1,1,1);
         glVertex3f(getX(80+60), getY(205-100), 0.0f);
        glVertex3f(getX(80+60), getY(195-100), 0.0f);
        glVertex3f(getX(76+60), getY(195-100), 0.0f);
        glVertex3f(getX(76+60), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///p4
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.22, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+90), getY(205-100), 0.0f);
        glVertex3f(getX(70+90), getY(217-100), 0.0f);
        glVertex3f(getX(80+90), getY(217-100), 0.0f);
        glVertex3f(getX(80+90), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
      glColor3d(1,1,1);
        glVertex3f(getX(70+90), getY(205-100), 0.0f);
        glVertex3f(getX(70+90), getY(195-100), 0.0f);
        glVertex3f(getX(74+90), getY(195-100), 0.0f);
        glVertex3f(getX(74+90), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(80+90), getY(205-100), 0.0f);
        glVertex3f(getX(80+90), getY(195-100), 0.0f);
        glVertex3f(getX(76+90), getY(195-100), 0.0f);
        glVertex3f(getX(76+90), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
    ///p5
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.26, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+120), getY(205-100), 0.0f);
        glVertex3f(getX(70+120), getY(217-100), 0.0f);
        glVertex3f(getX(80+120), getY(217-100), 0.0f);
        glVertex3f(getX(80+120), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
      glColor3d(1,1,1);
        glVertex3f(getX(70+120), getY(205-100), 0.0f);
        glVertex3f(getX(70+120), getY(195-100), 0.0f);
        glVertex3f(getX(74+120), getY(195-100), 0.0f);
        glVertex3f(getX(74+120), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(80+120), getY(205-100), 0.0f);
        glVertex3f(getX(80+120), getY(195-100), 0.0f);
        glVertex3f(getX(76+120), getY(195-100), 0.0f);
        glVertex3f(getX(76+120), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
   ///p6
glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.3, 0.30, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.01;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///body
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,0,0);
        glVertex3f(getX(70+150), getY(205-100), 0.0f);
        glVertex3f(getX(70+150), getY(217-100), 0.0f);
        glVertex3f(getX(80+150), getY(217-100), 0.0f);
        glVertex3f(getX(80+150), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
 ///leg
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(70+150), getY(205-100), 0.0f);
        glVertex3f(getX(70+150), getY(195-100), 0.0f);
        glVertex3f(getX(74+150), getY(195-100), 0.0f);
        glVertex3f(getX(74+150), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();
///leg2
 glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(1,1,1);
        glVertex3f(getX(80+150), getY(205-100), 0.0f);
        glVertex3f(getX(80+150), getY(195-100), 0.0f);
        glVertex3f(getX(76+150), getY(195-100), 0.0f);
        glVertex3f(getX(76+150), getY(205-100), 0.0f);
	glEnd();
    glPopMatrix();

///trafic
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(130),getG(150),getB(137));
        glVertex3f(getX(-100), getY(35), 0.0f);
        glVertex3f(getX(-100), getY(-36), 0.0f);
        glVertex3f(getX(-70), getY(-36), 0.0f);
        glVertex3f(getX(-70), getY(35), 0.0f);
	glEnd();
    glPopMatrix();

    ///
     glPushMatrix();
         glTranslatef(-.11,-0.02,0.0);
      glColor3f(tr,tg,tb);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.02;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///
 glPushMatrix();
         glTranslatef(-.11,0.05,0.0);
       glColor3f(tr2,tg2,tb2);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.02;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///light bar
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(130),getG(150),getB(137));
        glVertex3f(getX(-50), getY(200), 0.0f);
        glVertex3f(getX(-50), getY(36), 0.0f);
        glVertex3f(getX(-30), getY(36), 0.0f);
        glVertex3f(getX(-30), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
///

///
glPushMatrix();
glTranslatef(-0.03,-0.08,0.0);
    glPushMatrix();
         glTranslatef(-.007,0.53,0.0);
     glColor3d(getR(br1),getG(bg1),getB(bb1));
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.007;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///
glPushMatrix();
glTranslatef(-.009,0.50,0.0);
         glColor3d(getR(br1),getG(bg1),getB(bb1));

             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.007;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///
glPushMatrix();
         glTranslatef(-.01,0.47,0.0);
glColor3d(getR(br1),getG(bg1),getB(bb1));
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.007;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

///light tri
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3d(getR(br11),getG(bg11),getB(bb11));
        glVertex3f(getX(-10), getY(200), 0.0f);
        glVertex3f(getX(20), getY(230), 0.0f);
        glVertex3f(getX(20), getY(180), 0.0f);
	glEnd();
    glPopMatrix();
glPopMatrix();
    ///tree1
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(-30), getY(-200), 0.0f);
        glVertex3f(getX(-30), getY(-100), 0.0f);
        glVertex3f(getX(-10), getY(-100), 0.0f);
        glVertex3f(getX(-10), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.01,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.023,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.050,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

    ///tree2
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(-30-150), getY(-200), 0.0f);
        glVertex3f(getX(-30-150), getY(-100), 0.0f);
        glVertex3f(getX(-10-150), getY(-100), 0.0f);
        glVertex3f(getX(-10-150), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.19,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.22,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.25,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();


   ///tree3
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(-30-340), getY(-200), 0.0f);
        glVertex3f(getX(-30-340), getY(-100), 0.0f);
        glVertex3f(getX(-10-340), getY(-100), 0.0f);
        glVertex3f(getX(-10-340), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.45,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.48,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.51,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

  ///tree4
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(-30-530), getY(-200), 0.0f);
        glVertex3f(getX(-30-530), getY(-100), 0.0f);
        glVertex3f(getX(-10-530), getY(-100), 0.0f);
        glVertex3f(getX(-10-530), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.7,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.73,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.75,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
/////////////////////////////////////////////////



    ///tree22
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(180), getY(-200), 0.0f);
        glVertex3f(getX(180), getY(-100), 0.0f);
        glVertex3f(getX(160), getY(-100), 0.0f);
        glVertex3f(getX(160), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.19,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.22,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.25,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();


   ///tree32
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(370), getY(-200), 0.0f);
        glVertex3f(getX(370), getY(-100), 0.0f);
        glVertex3f(getX(350), getY(-100), 0.0f);
        glVertex3f(getX(350), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.45,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.48,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.51,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

  ///tree42
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(560), getY(-200), 0.0f);
        glVertex3f(getX(560), getY(-100), 0.0f);
        glVertex3f(getX(540), getY(-100), 0.0f);
        glVertex3f(getX(540), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.7,-0.25,0.0);
      glColor3f(0,0.8,0.1);
             glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.73,-0.195,0.0);
      glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.75,-0.25,0.0);
         glColor3f(0,0.8,0.1);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///mos
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-350), getY(36), 0.0f);
        glVertex3f(getX(-350), getY(150), 0.0f);
        glVertex3f(getX(-100), getY(150), 0.0f);
        glVertex3f(getX(-100), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///mos3
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.1, 0.30, 0.219);
        glVertex3f(getX(-100), getY(36), 0.0f);
        glVertex3f(getX(-100), getY(150), 0.0f);
        glVertex3f(getX(-80), getY(120), 0.0f);
        glVertex3f(getX(-80), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///mos door
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-320-10), getY(38), 0.0f);
        glVertex3f(getX(-320-10), getY(85), 0.0f);
        glVertex3f(getX(-280-10), getY(85), 0.0f);
        glVertex3f(getX(-280-10), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
    ///mos door2

 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-320+70), getY(38), 0.0f);
        glVertex3f(getX(-320+70), getY(85), 0.0f);
        glVertex3f(getX(-280+70), getY(85), 0.0f);
        glVertex3f(getX(-280+70), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
///line
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3d(getR(205),getG(133),getB(63));
        glVertex3f(getX(-228), getY(38), 0.0f);
        glVertex3f(getX(-228), getY(85), 0.0f);
        glVertex3f(getX(-232), getY(85), 0.0f);
        glVertex3f(getX(-232), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
///gol
 glPushMatrix();
         glTranslatef(-.305,0.23,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///mos door3

 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-320+150), getY(38), 0.0f);
        glVertex3f(getX(-320+150), getY(85), 0.0f);
        glVertex3f(getX(-280+150), getY(85), 0.0f);
        glVertex3f(getX(-280+150), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
///mos line
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-350), getY(105), 0.0f);
        glVertex3f(getX(-350), getY(108), 0.0f);
        glVertex3f(getX(-100), getY(108), 0.0f);
        glVertex3f(getX(-100), getY(105), 0.0f);
	glEnd();
	glPopMatrix();
	///
	glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-350), getY(105+10), 0.0f);
        glVertex3f(getX(-350), getY(109+10), 0.0f);
        glVertex3f(getX(-100), getY(109+10), 0.0f);
        glVertex3f(getX(-100), getY(105+10), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);
        glVertex3f(getX(-350), getY(105+10+10), 0.0f);
        glVertex3f(getX(-350), getY(108+10+10), 0.0f);
        glVertex3f(getX(-100), getY(108+10+10), 0.0f);
        glVertex3f(getX(-100), getY(105+10+10), 0.0f);
	glEnd();
    glPopMatrix();
///dome
glPushMatrix();
         glTranslatef(-.305,0.37,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///beside dom
glPushMatrix();
         glTranslatef(-.20,0.37,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
////beside
glPushMatrix();
         glTranslatef(-.40,0.37,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-245), getY(155), 0.0f);
        glVertex3f(getX(-245), getY(180), 0.0f);
        glVertex3f(getX(-215), getY(180), 0.0f);
        glVertex3f(getX(-215), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
///
glPushMatrix();
         glTranslatef(-.305,0.45,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.025;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
///
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-243), getY(185), 0.0f);
        glVertex3f(getX(-243), getY(215), 0.0f);
        glVertex3f(getX(-218), getY(215), 0.0f);
        glVertex3f(getX(-218), getY(185), 0.0f);
	glEnd();
    glPopMatrix();
///
glPushMatrix();
         glTranslatef(-.305,0.53,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.023;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
        ///
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-240), getY(215), 0.0f);
        glVertex3f(getX(-240), getY(245), 0.0f);
        glVertex3f(getX(-220), getY(245), 0.0f);
        glVertex3f(getX(-220), getY(215), 0.0f);
	glEnd();
    glPopMatrix();
glPushMatrix();
         glTranslatef(-.3065,0.62,0.0);
    glColor3d(0.18, 0.38, 0.28);
            glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.0205;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );

            }
            glEnd();
            glPopMatrix();
        ///
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-238), getY(245), 0.0f);
        glVertex3f(getX(-238), getY(275), 0.0f);
        glVertex3f(getX(-223), getY(275), 0.0f);
        glVertex3f(getX(-223), getY(245), 0.0f);
	glEnd();
    glPopMatrix();
      ///
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);
        glVertex3f(getX(-235), getY(275), 0.0f);
        glVertex3f(getX(-235), getY(285), 0.0f);
        glVertex3f(getX(-228), getY(285), 0.0f);
        glVertex3f(getX(-228), getY(275), 0.0f);
	glEnd();
    glPopMatrix();
/*///field try

  glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.55, 0.35, 0.0);
        glVertex3f(getX(-30), getY(90), 0.0f);
        glVertex3f(getX(-30), getY(110), 0.0f);
        glVertex3f(getX(-50), getY(140), 0.0f);
        glVertex3f(getX(-50), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///try2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.55, 0.35, 0.0);

        glVertex3f(getX(-50), getY(140), 0.0f);
        glVertex3f(getX(-50), getY(90), 0.0f);
	glEnd();
    glPopMatrix();*/
    ///grass3///
glPushMatrix();
    glBegin(GL_POLYGON); //Mushroom
	glColor3f(0,0.8,0.1);
        glVertex3f(getX(740-20),getY(-200),0.0f);
        glVertex3f(getX(750-20),getY(-170+10),0.0f);
        glVertex3f(getX(736-20),getY(-185+10),0.0f);
        glVertex3f(getX(725-20),getY(-150+10),0.0f);
        glVertex3f(getX(710-20),getY(-185+10),0.0f);
        glVertex3f(getX(695-20),getY(-175+10),0.0f);
        glVertex3f(getX(710-20),getY(-200),0.0f);
        //glVertex3f(getX(-725),getY(-100),0.0f);
       // glVertex3f(getX(-712.5),getY(-200),0.0f);



	glEnd();
    glPopMatrix();

    ///grass2///
glPushMatrix();
    glBegin(GL_POLYGON); //Mushroom
	glColor3f(0,0.8,0.1);
        glVertex3f(getX(740-20-50),getY(-200),0.0f);
        glVertex3f(getX(750-20-50),getY(-170+10),0.0f);
        glVertex3f(getX(736-20-50),getY(-185+10),0.0f);
        glVertex3f(getX(725-20-50),getY(-150+10),0.0f);
        glVertex3f(getX(710-20-50),getY(-185+10),0.0f);
        glVertex3f(getX(695-20-50),getY(-175+10),0.0f);
        glVertex3f(getX(710-20-50),getY(-200),0.0f);
        //glVertex3f(getX(-725),getY(-100),0.0f);
       // glVertex3f(getX(-712.5),getY(-200),0.0f);



	glEnd();
    glPopMatrix();
       ///grass1///
        glPushMatrix();
        glBegin(GL_POLYGON); //Mushroom
        glColor3f(0,0.8,0.1);
        glVertex3f(getX(-740+70),getY(-200),0.0f);
        glVertex3f(getX(-750+70),getY(-170+10),0.0f);
        glVertex3f(getX(-736+70),getY(-185+10),0.0f);
        glVertex3f(getX(-725+70),getY(-150+10),0.0f);
        glVertex3f(getX(-710+70),getY(-185+10),0.0f);
        glVertex3f(getX(-695+70),getY(-175+10),0.0f);
        glVertex3f(getX(-710+70),getY(-200),0.0f);
        //glVertex3f(getX(-725),getY(-100),0.0f);
       // glVertex3f(getX(-712.5),getY(-200),0.0f);



	glEnd();
    glPopMatrix();
    ///waves///
    glPushMatrix();
        glTranslatef(_movew, -0.00f, 0.0f);
    glColor3d(0.4,0.4,1.1);

    for(float i=-1;i<3;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex3f(i,-0.59f,0.0f);
        glVertex3f(i+0.04f,-0.53f,0.0f);
        glVertex3f(i+0.05f,-0.59f,0.0f);
        glEnd();

    }
    glPopMatrix();
    ///River///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.4,.4,1.1);
        glVertex3f(1.00f,  -0.58, 0.0f);
        glVertex3f(1.00f, -1.0f, 0.0f);
        glVertex3f(-1.00f, -1.00f, 0.0f);
        glVertex3f(-1.00f, -0.58f, 0.0f);
	glEnd();
    glPopMatrix();
    ///FishF1///
    glPushMatrix();
    glTranslatef(_movef, -0.00f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3d(0,0,0);
                glVertex3f(-.80f, -0.7f, 0.0f);
                glVertex3f(-.80f, -0.75f, 0.0f);
                glVertex3f(-.775f, -0.725f, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
                glVertex3f(-.775f, -0.71f, 0.0f);
                glVertex3f(-.775f, -0.74f, 0.0f);
                glVertex3f(-.750f, -0.74f, 0.0f);
                glVertex3f(-.750f, -0.71f, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3d(0.2,0.2,0.7);
                glVertex3f(-.750f, -0.710f, 0.0f);
                glVertex3f(-.725f, -0.725f, 0.0f);
                glVertex3f(-.750f, -0.740f, 0.0f);
        glEnd();
	glPopMatrix();

    ///FishF2///
    glPushMatrix();
    glTranslatef(_movef, -0.00f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3d(0,0,0);
                glVertex3f(+0.4-.80f, -0.2-0.7f, 0.0f);
                glVertex3f(+0.4-.80f, -0.2-0.75f, 0.0f);
                glVertex3f(+0.4-.775f, -0.2-0.725f, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
                glVertex3f(+0.4-.775f,-0.2 -0.71f, 0.0f);
                glVertex3f(+0.4-.775f, -0.2-0.74f, 0.0f);
                glVertex3f(+0.4-.750f, -0.2-0.74f, 0.0f);
                glVertex3f(+0.4-.750f, -0.2-0.71f, 0.0f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3d(0.2,0.2,0.7);
                glVertex3f(+0.4-.750f, -0.2-0.710f, 0.0f);
                glVertex3f(+0.4-.725f, -0.2-0.725f, 0.0f);
                glVertex3f(+0.4-.750f, -0.2-0.740f, 0.0f);
        glEnd();
	glPopMatrix();
    ///FishB1///
	glPushMatrix();
	glTranslatef(_movefb, -0.00f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
            glVertex3f(0.80f, -0.6f, 0.0f);
            glVertex3f(.80f, -0.65f, 0.0f);
            glVertex3f(.775f, -0.625f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
            glVertex3f(.775f, -0.610f, 0.0f);
            glVertex3f(.775f, -0.640f, 0.0f);
            glVertex3f(.750f, -0.640f, 0.0f);
            glVertex3f(.75f, -0.610f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3d(0.2,0.2,0.7);
            glVertex3f(.750f, -0.610f, 0.0f);
            glVertex3f(.725f, -0.625f, 0.0f);
            glVertex3f(.750f, -0.640f, 0.0f);
    glEnd();

	glPopMatrix();



    /////Boat/////
    glPushMatrix();
     glTranslatef(_move3, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.4,0.0 , 0.0);
     glVertex3f(-0.833f, -0.66f, 0.0);
     glVertex3f(-0.33f, -0.66f, 0.0);
     glVertex3f(-0.25f, -0.583f, 0.0);
     glVertex3f(-0.916f, -0.583f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 0.4);
     glVertex3f(-0.833f, -0.583f, 0.0);
     glVertex3f(-0.33f, -0.583f, 0.0);
     glVertex3f(-0.416f, -0.5f, 0.0);
     glVertex3f(-0.75f, -0.5f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.4 , 0.698);
     glVertex3f(-0.66f, -0.5f, 0.0);
     glVertex3f(-0.5f, -0.5f, 0.0);
     glVertex3f(-0.583f, -0.33f, 0.0);
     glEnd();
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex3f(-0.583f, -0.33f, 0.0);
     glVertex3f(-0.583f, -0.166f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex3f(-0.583f, -0.283f, 0.0);
     glVertex3f(-0.55f, -0.25f, 0.0);
     glVertex3f(-0.583f, -0.2166f, 0.0);
     glEnd();

     ////Boatwindows//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex3f(-0.75f,-0.566f,0.0f);
     glVertex3f(-0.7f,-0.566f,0.0f);
     glVertex3f(-0.7,-0.516f,0.0f);
     glVertex3f(-0.75f,-0.516f,0.0f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex3f(-0.633f,-0.566f,0.0f);
     glVertex3f(-0.583f,-0.566f,0.0f);
     glVertex3f(-0.583,-0.516f,0.0f);
     glVertex3f(-0.633f,-0.516f,0.0f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex3f(-0.516f,-0.566f,0.0f);
     glVertex3f(-0.46f,-0.566f,0.0f);
     glVertex3f(-0.46f,-0.516f,0.0f);
     glVertex3f(-0.516f,-0.516f,0.0f);
     glEnd();
            glBegin(GL_POLYGON);
     glColor3f(0.0,0.4 , 0.698);
     glVertex3f(-0.833f,-0.6833f,0.0f);
     glVertex3f(-0.33f,-0.6833f,0.0f);
     glVertex3f(-0.33f,-0.66f,0.0f);
     glVertex3f(-0.833f,-0.66f,0.0f);
     glEnd();

       glPopMatrix();


	glutSwapBuffers();
}

void update(int value) {

    _movec+= .008;
    if(_movec-1.1 > 1.0)
    {
        _movec = -1.5;

    }
    _movecb -= .008;
    if(_movecb+1.1 < -1.0)
    {
        _movecb = 1.5;

    }

    _movef += .01;
    if(_movef-1.3  > 1.0)
    {
        _movef = -1.0;
    }


    _movew += .002;
    if(_movew+1>1.0){
        _movew = -1.0;

    }
    _movefb -= .01;
    if(_movefb+1.3 < -1.0)
    {
        _movefb = 1.0;

    }

    _move3 += .005;
    if(_move3-1.663  > 1.0)
    {
        _move3 = -1.0;
    }
 ///

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds
}
///
void update1(int value) {

if(tr2==1&&tg2==0&&tb==0)
          {

              if(_angle1<=.8970010&&_angle1>=.8459900){
                    }
                    else{
                        if(speed>1 || speed<0)
    {

        speed = 0.0f;
    }
	_angle1 -= speed;

	if (_angle1 < -0.31) {
		_angle1 += 2.31;
	}
                    }
          }
else{
 if(speed>1 || speed<0)
    {

        speed = 0.0f;
    }
	_angle1 -= speed;

	if (_angle1 < -0.31) {
		_angle1 += 2.31;
	}
}
	if(speedt>1 || speedt<0)
    {

        speedt = 0.0f;
    }
	_moveft -= speedt;

	if (_moveft < -1.86) {
		_moveft += 3.86;
	}

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 20 milliseconds
}
void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
          speed+=0.001f;
         update1(0);
          break;
        case GLUT_KEY_DOWN:
          speed-=0.03f;
          update1(0);
          break;
        case GLUT_KEY_LEFT:
          speedt+=0.001f;
         update1(0);
          break;
        case GLUT_KEY_RIGHT:
          speedt-=0.03f;
          update1(0);
          break;
        case GLUT_KEY_PAGE_UP:
            if(dcheck==0){
                dcheck=1;
                sr=0.0;
                sg=0.0;
                sb=0.2;
                str=1;
                stg=1;
                stb=1;
                mr=0.76;
                mg=0.76;
                mb=0.76;
                br=244;
                bg= 170;
                 bb=22;
                 br1= 244;
                bg1= 170;
                bb1= 22;
                br11= 244;
                bg11= 170;
                bb11= 22;
            }else{
                dcheck=0;
                sr=0.52;
                sg=0.80;
                sb=0.98;
                str=0.52;
                stg=0.80;
                stb=0.98;
                mr=0.98;
                mg=0.83;
                mb=0.25;
                br= 130;
                bg= 150;
                bb= 137;
                 br1= 1;
                bg1= 1;
                bb1= 1;
                br11= 132.6;
                bg11= 204;
                bb11= 250;
            }
          update1(0);
          break;
           case GLUT_KEY_PAGE_DOWN:
              if(cspm!=0)
          {

              tr2=1;
              tg2=0;
              tb2=0;
              tr=0;
              tg=0;
              tb=0;

                    cspm=0;
          }
          else
          {
              tr2=0;
              tg2=0;
              tb2=0;
              tr=0;
              tg=1;
              tb=0;
              cspm=1;

          }
          break;

    }
}
void menu(int id)
{
	switch (id)
	{
	case 1:
	    glutIdleFunc(drawSceneDay);
		break;
	case 2: glutIdleFunc(drawScene);
		break;

    case 3: exit(0);
	}
}

void handleKeypress(unsigned char key, int x, int y) {

    switch(key){
        case 27:
            exit(0);
        default:
            break;
    }
    glutPostRedisplay();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE );
	glutInitWindowSize(1500,1000);
	glutCreateWindow("Transformation");
	glutSpecialFunc(specialKeys); //Special Key Handler
//    glutMouseFunc(mouse);
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0);
	glutTimerFunc(20, update1, 0); //Add a timer


	glutMainLoop();
	return 0;
}
