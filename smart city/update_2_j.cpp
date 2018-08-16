#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _angle1 = 0.0f;
float _move = 0.0f;
float _movef = 0.0f;
float _movec = 0.0f;
float _movecb = 0.0f;
float _movew = 0.0f;
float _movefb = 0.0f;
float _move3 = 0.0f;
float speed = 0.0f;
//float savedSpeed = 0.0f;
//bool paused = false;
float getX(float x){
return x/750.00;
}
float getY(float y){
return y/400.00;
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
	/// Make Moon //
    glPushMatrix();
    //glTranslatef(6,0,0);
   glTranslatef(0.75, 0.87, 0.0);
   glColor3f(0.890,0.890,0.890);
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

///CarT1Uplane
    glPushMatrix();
glTranslatef(_angle1, +0.35f, 0.0f);
    cout<<speed;
   /* if(speed>=1){
       glTranslatef(_angle1, +0.35f, 0.0f);
    }
    else{
        glTranslatef(speed, +0.35f, 0.0f);
    }*/
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
    glTranslatef(_movec, +0.18f, 0.0f);
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
    glTranslatef(_movec, +0.18f, 0.0f);

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
    glTranslatef(_movec, +0.18f, 0.0f);
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
    glColor3d(0,0,0);
        glVertex3f(getX(700), getY(100), 0.0f);
        glVertex3f(getX(700), getY(125), 0.0f);
        glVertex3f(getX(680), getY(125), 0.0f);
        glVertex3f(getX(680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(620), getY(100), 0.0f);
        glVertex3f(getX(620), getY(125), 0.0f);
        glVertex3f(getX(640), getY(125), 0.0f);
        glVertex3f(getX(640), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
        //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);
        glVertex3f(getX(620), getY(155), 0.0f);
        glVertex3f(getX(620), getY(180), 0.0f);
        glVertex3f(getX(640), getY(180), 0.0f);
        glVertex3f(getX(640), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
       //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(700), getY(155), 0.0f);
        glVertex3f(getX(700), getY(180), 0.0f);
        glVertex3f(getX(680), getY(180), 0.0f);
        glVertex3f(getX(680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(700), getY(205), 0.0f);
        glVertex3f(getX(700), getY(230), 0.0f);
        glVertex3f(getX(680), getY(230), 0.0f);
        glVertex3f(getX(680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(620), getY(205), 0.0f);
        glVertex3f(getX(620), getY(230), 0.0f);
        glVertex3f(getX(640), getY(230), 0.0f);
        glVertex3f(getX(640), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
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
    glColor3d(0,0,0);
        glVertex3f(getX(520), getY(90), 0.0f);
        glVertex3f(getX(520), getY(115), 0.0f);
        glVertex3f(getX(500), getY(115), 0.0f);
        glVertex3f(getX(500), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(430), getY(90), 0.0f);
        glVertex3f(getX(430), getY(115), 0.0f);
        glVertex3f(getX(450), getY(115), 0.0f);
        glVertex3f(getX(450), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(430), getY(145), 0.0f);
        glVertex3f(getX(430), getY(170), 0.0f);
        glVertex3f(getX(450), getY(170), 0.0f);
        glVertex3f(getX(450), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
     ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
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
    glColor3d(0,0,0);
        glVertex3f(getX(430), getY(200), 0.0f);
        glVertex3f(getX(430), getY(225), 0.0f);
        glVertex3f(getX(450), getY(225), 0.0f);
        glVertex3f(getX(450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
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
    glColor3d(0,0,0);
        glVertex3f(getX(-700), getY(100), 0.0f);
        glVertex3f(getX(-700), getY(125), 0.0f);
        glVertex3f(getX(-680), getY(125), 0.0f);
        glVertex3f(getX(-680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
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
    glColor3d(0,0,0);
        glVertex3f(getX(-700), getY(155), 0.0f);
        glVertex3f(getX(-700), getY(180), 0.0f);
        glVertex3f(getX(-680), getY(180), 0.0f);
        glVertex3f(getX(-680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-700), getY(205), 0.0f);
        glVertex3f(getX(-700), getY(230), 0.0f);
        glVertex3f(getX(-680), getY(230), 0.0f);
        glVertex3f(getX(-680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.843, 0.000);
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
    glColor3d(1.000, 0.647, 0.000);
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
    glColor3d(1.000, 0.843, 0.000);
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
    glColor3d(0,0,0);
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
    glColor3d(0,0,0);
        glVertex3f(getX(-520), getY(200), 0.0f);
        glVertex3f(getX(-520), getY(225), 0.0f);
        glVertex3f(getX(-500), getY(225), 0.0f);
        glVertex3f(getX(-500), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
      ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-430), getY(200), 0.0f);
        glVertex3f(getX(-430), getY(225), 0.0f);
        glVertex3f(getX(-450), getY(225), 0.0f);
        glVertex3f(getX(-450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
        glVertex3f(getX(-430), getY(250), 0.0f);
        glVertex3f(getX(-430), getY(275), 0.0f);
        glVertex3f(getX(-450), getY(275), 0.0f);
        glVertex3f(getX(-450), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.843, 0.000);
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
///field circle
 glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.25, 0.45, 0.0);
	glBegin(GL_LINES);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100 ;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    ///cricket outfield

 glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(.2, 0.35, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.28;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

///cricket

 glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(.2, 0.35, 0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    ///field pitch
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.5,0.35,.05);
        glVertex3f(getX(240-45), getY(120), 0.0f);
        glVertex3f(getX(220-45), getY(185), 0.0f);
        glVertex3f(getX(170-45), getY(185), 0.0f);
        glVertex3f(getX(160-45), getY(120), 0.0f);
	glEnd();
    glPopMatrix();
    ///field incircle
 glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.2, 0.37, 0.0);
	glBegin(GL_LINES);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
     ///field outcircle
 glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.2, 0.35, 0.0);
	glBegin(GL_LINES);
	for(int i=0;i<50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.23;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

///tree
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(30), getY(220), 0.0f);
        glVertex3f(getX(30), getY(300), 0.0f);
        glVertex3f(getX(10), getY(300), 0.0f);
        glVertex3f(getX(10), getY(220), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree1
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);
        glVertex3f(getX(-30), getY(180), 0.0f);
        glVertex3f(getX(-30), getY(300), 0.0f);
        glVertex3f(getX(-10), getY(300), 0.0f);
        glVertex3f(getX(-10), getY(180), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.01,0.75,0.0);
         glColor3f(0,1,0);
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

            glPushMatrix();
         glTranslatef(0.015,0.77,0.0);
      glColor3f(0,0.8,0.1);
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

            glPushMatrix();
         glTranslatef(.04,0.75,0.0);
         glColor3f(0,0.8,0.1);
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

            glPushMatrix();
         glTranslatef(.03,0.77,0.0);
        glColor3f(0,0.8,0.1);
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
                  glPushMatrix();
         glTranslatef(.03,0.79,0.0);
     glColor3f(0,0.8,0.1);
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
///tree up11

       glPushMatrix();
         glTranslatef(-.01,0.75,0.0);
         glColor3f(0,0.8,0.1);
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

            glPushMatrix();
         glTranslatef(-0.015,0.77,0.0);
      glColor3f(0,0.8,0.1);
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

            glPushMatrix();
         glTranslatef(-.04,0.75,0.0);
         glColor3f(0,0.8,0.1);
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

            glPushMatrix();
         glTranslatef(-.03,0.77,0.0);
        glColor3f(0,0.8,0.1);
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
                  glPushMatrix();
         glTranslatef(-.03,0.79,0.0);
     glColor3f(0,0.8,0.1);
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
    ///fish///
    glPushMatrix();
    glTranslatef(_movef, -0.00f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3d(0,0,0);
            glVertex3f(-.80f, -0.7f, 0.0f);
            glVertex3f(-.80f, -0.8f, 0.0f);
            glVertex3f(-.75f, -0.75f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
            glVertex3f(-.75f, -0.725f, 0.0f);
            glVertex3f(-.75f, -0.775f, 0.0f);
            glVertex3f(-.70f, -0.775f, 0.0f);
            glVertex3f(-.70f, -0.725f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3d(0,0,1);
            glVertex3f(-.70f, -0.725f, 0.0f);
            glVertex3f(-.65f, -0.750f, 0.0f);
            glVertex3f(-.70f, -0.775f, 0.0f);
    glEnd();

	glPopMatrix();
    ///Fish///
	glPushMatrix();
	glTranslatef(_movefb, -0.00f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
            glVertex3f(0.80f, -0.6f, 0.0f);
            glVertex3f(.80f, -0.7f, 0.0f);
            glVertex3f(.75f, -0.65f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
            glVertex3f(.75f, -0.625f, 0.0f);
            glVertex3f(.75f, -0.675f, 0.0f);
            glVertex3f(.70f, -0.675f, 0.0f);
            glVertex3f(.70f, -0.625f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3d(0.5,0.2,0.7);
            glVertex3f(.70f, -0.625f, 0.0f);
            glVertex3f(.65f, -0.650f, 0.0f);
            glVertex3f(.70f, -0.675f, 0.0f);
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

    _move += .01;
    if(_move-1.3 > 1.0)
    {
        _move = -1.0;

    }
    _movef += .01;
    if(_movef-1.3 > 1.0)
    {
        _movef = -1.0;

    }

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


 if(speed>1 || speed<0)
    {

        speed = 0.0f;
    }
	_angle1 += speed;

	if (_angle1 > getX(1500)) {
		_angle1 -= getX(1500);
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
          speed-=0.05f;
          update1(0);
          break;

    }
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1500,1000);
	glutCreateWindow("Transformation");
	glutSpecialFunc(specialKeys); //Special Key Handler
//glutMouseFunc(mouse);
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0);
	glutTimerFunc(20, update1, 0); //Add a timer
	glutMainLoop();
	return 0;
}
