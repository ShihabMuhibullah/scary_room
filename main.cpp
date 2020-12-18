#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void base(void)
{
 	glClearColor (0.4, 0.4, 0.4, 0.0);
	glOrtho(0, 500, 0, 500, -100, 100);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void downbox()
{
    glBegin(GL_LINE_LOOP);
    glColor3b(0,0,0);
    glVertex2f(5,5);
    glVertex2f(5,130);
    glVertex2f(498,180);
    glVertex2f(498,5);
    glEnd();

}

void downcol()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,115);
    glVertex2i(50,134);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,85);
    glVertex2i(80,138);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,45);
    glVertex2i(100,140);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(20,5);
    glVertex2i(130,145);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(80,5);
    glVertex2i(165,147);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(150,5);
    glVertex2i(200,151);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(215,5);
    glVertex2i(235,154);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(265,5);
    glVertex2i(265,156);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(330,5);
    glVertex2i(300,162);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(390,5);
    glVertex2i(340,166);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(450,5);
    glVertex2i(370,169);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(510,5);
    glVertex2i(400,172);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(560,5);
    glVertex2i(430,175);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(620,5);
    glVertex2i(460,175);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(680,5);
    glVertex2i(490,179);
    glEnd();

}
void downrow()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,115);
    glVertex2i(500,165);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,95);
    glVertex2i(500,145);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,70);
    glVertex2i(500,120);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,40);
    glVertex2i(500,90);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(35,5);
    glVertex2i(500,45);
    glEnd();

}

void topbox()
{
    glBegin(GL_LINE_LOOP);
    glColor3b(0,0,0);
    glVertex2f(5,400);
    glVertex2f(5,498);
    glVertex2f(498,498);
    glVertex2f(498,450);
    glEnd();

}

void topcol()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(470,447);
    glVertex2i(498,470);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(440,444);
    glVertex2i(498,498);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(410,441);
    glVertex2i(460,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(380,438);
    glVertex2i(420,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(345,434);
    glVertex2i(380,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(315,432);
    glVertex2i(340,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(285,429);
    glVertex2i(300,498);
    glEnd();



    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(265,427);
    glVertex2i(265,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(248,425);
    glVertex2i(240,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(230,423);
    glVertex2i(205,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(211,421);
    glVertex2i(180,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(190,419);
    glVertex2i(160,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(170,417);
    glVertex2i(125,498);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(150,414);
    glVertex2i(90,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(125,411);
    glVertex2i(55,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(100,409);
    glVertex2i(10,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(70,406);
    glVertex2i(5,470);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(35,404);
    glVertex2i(5,440);
    glEnd();

}

void toprow()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,410);
    glVertex2i(498,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,422);
    glVertex2i(498,472);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,440);
    glVertex2i(498,490);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,457);
    glVertex2i(485,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,474);
    glVertex2i(320,498);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,489);
    glVertex2i(150,498);
    glEnd();
}

void midbox()
{
    glBegin(GL_LINE_LOOP);
    glColor3b(0,0,0);
    glVertex2f(5,130);
    glVertex2f(5,400);
    glVertex2f(498,450);
    glVertex2f(498,180);
    glEnd();

}

void midcol()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(490,178);
    glVertex2i(465,446);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(415,170);
    glVertex2i(390,439);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(335,163);
    glVertex2i(310,430);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(265,157);
    glVertex2i(240,424);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(200,152);
    glVertex2i(180,419);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(140,144);
    glVertex2i(120,412);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(80,139);
    glVertex2i(60,407);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(20,131);
    glVertex2i(5,401);
    glEnd();


}

void midrow()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,160);
    glVertex2i(498,210);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,220);
    glVertex2i(498,270);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,280);
    glVertex2i(498,330);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(5,347);
    glVertex2i(498,400);
    glEnd();
}

void door1()
{
    glColor3ub(47,79,79);
    glBegin(GL_POLYGON);

    glVertex2i(170,148);

    glVertex2i(160,320);

    glVertex2i(220,340);

    glVertex2i(233,135);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(250,156);

    glVertex2i(240,327);

    glVertex2i(310,335);

    glVertex2i(320,162);

    glEnd();

    glColor3f(0.1,0.1,0.1);

    glBegin(GL_POLYGON);

    glVertex2i(232,153);

    glVertex2i(221,324);

    glVertex2i(240,327);

    glVertex2i(250,155);

    glEnd();

}


void piller()
{

    glColor3ub(255,160,122);

    glBegin(GL_POLYGON);

    glVertex2i(390,120);

    glVertex2i(360,498);

    glVertex2i(420,498);

    glVertex2i(450,128);

    glEnd();

    glColor3ub(128, 128, 0);

    glBegin(GL_POLYGON);

    glVertex2i(390,120);

    glVertex2i(360,498);

    glVertex2i(338,498);

    glVertex2i(370,140);

    glEnd();


    glColor3ub(211,211,211);
    glBegin(GL_LINES);

    glVertex2i(390,160);
    glVertex2i(445,167);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(385,230);
    glVertex2i(440,239);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(377,300);
    glVertex2i(436,309);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(370,370);
    glVertex2i(430,379);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(363,450);
    glVertex2i(423,459);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(367,197);
    glVertex2i(386,180);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(362,257);
    glVertex2i(378,240);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(351,355);
    glVertex2i(372,340);

    glEnd();

    glBegin(GL_LINES);
    glVertex2i(343,453);
    glVertex2i(365,440);

    glEnd();

}

void light()
{

    glColor3ub(160,82,45);
    glBegin(GL_POLYGON);

    glVertex2i(195,360);

    glVertex2i(193,381);

    glVertex2i(272,390);

    glVertex2i(275,370);

    glEnd();

    glColor3ub(211,211,211);
    glBegin(GL_LINES);

    glVertex2i(195,360);
    glVertex2i(193,381);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(193,381);
    glVertex2i(272,390);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(272,390);
    glVertex2i(275,370);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(275,370);
    glVertex2i(195,360);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(275,380);
    glVertex2i(195,370);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(215,361);
    glVertex2i(213,382);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(235,365);
    glVertex2i(233,385);
    glEnd();

    glBegin(GL_LINES);

    glVertex2i(255,367);
    glVertex2i(253,387);
    glEnd();

}

void girl_head()
{
    float theta;

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

    for(int i=0;i<360;i++)
    {
    theta=i*3.142/180;
    glVertex2f(100+25*cos(theta),140+25*sin(theta));
    }

    glFlush();
    glEnd();
}
void girl_hair()
{

    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2i(100,150);
    glVertex2i(100,90);
    glVertex2i(125,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(100,150);
    glVertex2i(100,90);
    glVertex2i(75,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(120,150);
    glVertex2i(120,90);
    glVertex2i(127,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(110,150);
    glVertex2i(110,90);
    glVertex2i(120,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(105,150);
    glVertex2i(105,90);
    glVertex2i(110,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(77,150);
    glVertex2i(77,90);
    glVertex2i(85,145);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(87,150);
    glVertex2i(87,90);
    glVertex2i(95,145);

    glEnd();
}

void girl_body()
{
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2i(80,100);
    glVertex2i(80,50);
    glVertex2i(120,50);
    glVertex2i(120,100);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(90,110);
    glVertex2i(70,100);
    glVertex2i(130,100);
    glVertex2i(110,110);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(80,70);
    glVertex2i(80,05);
    glVertex2i(120,70);

    glEnd();

    glBegin(GL_POLYGON);


    glVertex2i(120,70);
    glVertex2i(80,70);
    glVertex2i(120,05);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(70,100);
    glVertex2i(70,50);
    glVertex2i(80,50);
    glVertex2i(80,100);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(120,100);
    glVertex2i(120,50);
    glVertex2i(130,50);
    glVertex2i(130,100);

    glEnd();


    float theta;

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

    for(int i=0;i<360;i++)
    {
    theta=i*3.142/180;
    glVertex2f(125+10*cos(theta),50+10*sin(theta));
    }

    glFlush();
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);

    for(int i=0;i<360;i++)
    {
    theta=i*3.142/180;
    glVertex2f(75+10*cos(theta),50+10*sin(theta));
    }

    glFlush();
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(75,5);
    glVertex2i(75,20);
    glVertex2i(90,20);
    glVertex2i(90,5);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(110,5);
    glVertex2i(110,20);
    glVertex2i(125,20);
    glVertex2i(125,5);

    glEnd();


}

void sound()
{
    PlaySound("demon.wav", NULL, SND_ASYNC|SND_FILENAME);
}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();

    sound();

    downbox();
    downrow();
    downcol();
    topbox();
    topcol();
    toprow();
    midbox();
    midcol();
    midrow();
    door1();
    piller();
    light();
    girl_head();
    girl_hair();
    girl_body();


    glFlush();
    glEnd();

}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (600, 800);
	glutInitWindowPosition (200, 100);
	glutCreateWindow ("Ahmed Shihab Muhibullah 171-15-8751");
	base();
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
