#include<windows.h>
#include<iostream>
#include<GL/glut.h>
#include<math.h>
using namespace std;
float x,y,r;//circle
int i;//circle loop

bool run=true;
bool stop=false;
bool rainday = false;
float rain1 = 0.0;
float position_sun =1; // for sun
float speed_sun =0.5;
float position_moon =1; // for moon
float speed_moon =0.5;

float position_cloud_1 =1; // for cloud 1
float speed_cloud_1 =1;

float position_cloud_2 =1; // for cloud 2
float speed_cloud_2 =1;

float position_cloud_3 =0.4; // for cloud 3
float speed_cloud_3 =0.4;

float position_cloud_4 =0.4; // for cloud 3
float speed_cloud_4 =0.4;

float position_rail =1; // for rail
float speed_rail =1;

float position_boat_2 =0.2; // for boat 2
float speed_boat_2 =0.2;

float position_boat_3 =0.4; // for boat 3
float speed_boat_3 =0.4;
void sky(){

//sky
glBegin(GL_QUADS);
glColor3ub(153,255,255);
glPointSize(5.0);
glVertex2i(0,640);
glVertex2i(1500,640);
glVertex2i(1500,900);
glVertex2i(0,900);
glEnd();
//end
}

void sky_night(){

//sky
glBegin(GL_QUADS);
glColor3ub(0,0,0);
glPointSize(5.0);
glVertex2i(0,640);
glVertex2i(1500,640);
glVertex2i(1500,900);
glVertex2i(0,900);
glEnd();
//end
}

void back_hill()
{
glColor3ub(49,175,141);
glBegin(GL_QUADS);
glVertex2i(0,630);          //   back 1
glVertex2i(0,740);
glVertex2i(50,760);
glVertex2i(50,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(50,630);          //   back 2
glVertex2i(50,760);
glVertex2i(120,750);
glVertex2i(120,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(100,630);          //   back 3
glVertex2i(120,750);
glVertex2i(180,800);
glVertex2i(180,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(180,630);       //  back 4
glVertex2i(180,800);
glVertex2i(240,810);
glVertex2i(240,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(240,630);
glVertex2i(240,810);
glVertex2i(290,770);  ////   back 5
glVertex2i(290,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(290,630);
glVertex2i(290,770);
glVertex2i(390,790);       /////  back   6
glVertex2i(390,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(400,630);
glVertex2i(470,790);         ///////// back 5
glVertex2i(500,790);
glVertex2i(500,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,630);
glVertex2i(500,790);         //////////// back 6
glVertex2i(570,700);
glVertex2i(570,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(570,630);
glVertex2i(570,700);
glVertex2i(620,790);         ////////// back 7
glVertex2i(620,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(620,630);
glVertex2i(620,790);             ///////// back  8
glVertex2i(700,750);
glVertex2i(700,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(700,630);
glVertex2i(700,750);                  ////////  back 9
glVertex2i(800,790);
glVertex2i(800,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(800,630);
glVertex2i(800,790);          //////////back 10
glVertex2i(890,680);
glVertex2i(890,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(890,630);
glVertex2i(890,680);       //// back 11
glVertex2i(950,770);
glVertex2i(950,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(950,630);
glVertex2i(950,770);       //////////// back 12
glVertex2i(1100,790);
glVertex2i(1100,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1100,790);            //////// back     13
glVertex2i(1200,700);
glVertex2i(1200,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1200,700);            //////// back     14
glVertex2i(1300,790);
glVertex2i(1300,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1300,630);
glVertex2i(1300,790);             //////// back     15
glVertex2i(1400,740);
glVertex2i(1400,630);
glEnd();



glColor3ub(52,203,147);
glBegin(GL_QUADS);
glVertex2i(0,630);          //   1
glVertex2i(20,670);
glVertex2i(80,700);
glVertex2i(80,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(80,630);
glVertex2i(80,700);       //   2
glVertex2i(120,700);
glVertex2i(120,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(120,630);
glVertex2i(120,700);      //     3
glVertex2i(200,750);
glVertex2i(200,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(200,630);
glVertex2i(200,750);     //     4
glVertex2i(270,690);
glVertex2i(270,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(270,630);
glVertex2i(270,690);           //   5
glVertex2i(400,820);
glVertex2i(400,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(400,630);            //      6
glVertex2i(400,820);
glVertex2i(520,740);
glVertex2i(520,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(520,630);
glVertex2i(520,740);            //          7
glVertex2i(570,790);
glVertex2i(570,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(570,630);
glVertex2i(570,790);           //        8
glVertex2i(620,740);
glVertex2i(620,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(620,630);
glVertex2i(620,740);           //        9
glVertex2i(650,760);
glVertex2i(650,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(650,630);
glVertex2i(650,760);           //        10
glVertex2i(750,690);
glVertex2i(750,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(750,630);
glVertex2i(750,690);           //        11
glVertex2i(900,740);
glVertex2i(900,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(900,630);
glVertex2i(900,740);           //        12
glVertex2i(1020,720);
glVertex2i(1020,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(900,630);
glVertex2i(900,740);           //        13
glVertex2i(1020,720);
glVertex2i(1020,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1020,630);
glVertex2i(1020,720);                //        14
glVertex2i(1100,740);
glVertex2i(1100,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1100,740);              //     15
glVertex2i(1200,790);
glVertex2i(1200,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1200,630);
glVertex2i(1200,790);
glVertex2i(1300,700);           //   16
glVertex2i(1300,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1300,630);
glVertex2i(1300,700);              //  17
glVertex2i(1500,800);
glVertex2i(1500,630);
glEnd();


glColor3ub(134,240,197);
glBegin(GL_QUADS);
glVertex2i(20,745);
glVertex2i(50,755);///// left 1
glVertex2i(30,735);
glVertex2i(10,725);
glEnd();


glBegin(GL_QUADS);
glVertex2i(70,750);
glVertex2i(100,740);
glVertex2i(110,730);////// left 2
glVertex2i(60,720);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(180,800);
glVertex2i(240,810); ////////// left 3
glVertex2i(280,770);
glVertex2i(140,760);
glEnd();

glBegin(GL_QUADS);
glVertex2i(240,750);
glVertex2i(230,740);
glVertex2i(290,730);
glVertex2i(270,720);
glEnd();



glBegin(GL_POLYGON);
glVertex2i(470,790);
glVertex2i(480,790); ////////// left 3-4
glVertex2i(480,770);
glVertex2i(467,775);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(300,770);       //////left 4
glVertex2i(365,785);
glVertex2i(320,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(500,785);
glVertex2i(520,755);
glVertex2i(510,745);////// left 5
glVertex2i(490,760);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(620,790);
glVertex2i(640,780); ////////// left 5-6
glVertex2i(615,775);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(680,740);
glVertex2i(670,760); ////// left 6
glVertex2i(700,745);
glVertex2i(690,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(712,755);
glVertex2i(800,790); ////// left 7
glVertex2i(780,760);
glVertex2i(770,750);
glVertex2i(770,740);
glVertex2i(750,720);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(950,770);
glVertex2i(1100,790); ////// left 8
glVertex2i(1050,740);
glVertex2i(1000,750);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(1300,790);
glVertex2i(1355,750); ////// left 9
glVertex2i(1270,760);
glEnd();




glBegin(GL_POLYGON);
glVertex2i(40,680);
glVertex2i(80,700);
glVertex2i(120,700); ////// upper 1
glVertex2i(110,680);
glVertex2i(70,660);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(157,720);
glVertex2i(200,750);
glVertex2i(220,730); ////// upper 2
glEnd();

glBegin(GL_QUADS);
glVertex2i(400,820);
glVertex2i(400,810);
glVertex2i(390,790); ////// upper 3
glVertex2i(370,790);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(370,790);
glVertex2i(390,790);
glVertex2i(400,780);
glVertex2i(420,760);
glVertex2i(350,760);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(350,760);
glVertex2i(420,760);
glVertex2i(400,740);
glVertex2i(400,730);
glVertex2i(430,710);
glVertex2i(290,700);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(570,790);
glVertex2i(590,760);
glVertex2i(520,740);/////upper  4
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(610,730);
glVertex2i(650,760);         //////////upper 5
glVertex2i(675,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(900,740);
glVertex2i(800,700);  ///////// upper 6
glVertex2i(860,710);
glVertex2i(870,670);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1000,720);
glVertex2i(1050,725);
glVertex2i(1025,700);     ///////////////upper 7
glVertex2i(1000,700);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(1200,790);
glVertex2i(1100,740);     ///////// upper 8
glVertex2i(1235,750);
glVertex2i(1200,730);
glVertex2i(1150,720);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1460,780);
glVertex2i(1370,730);
glVertex2i(1350,710);             //////////  upper   10
glVertex2i(1450,760);
glEnd();



glColor3ub(20,153,122);
glBegin(GL_QUADS);
glVertex2i(450,780);
glVertex2i(530,730);
glVertex2i(550,690);
glVertex2i(460,750);
glEnd();
glBegin(GL_TRIANGLES);        //upper front 2
glVertex2i(400,630);
glVertex2i(450,670);
glVertex2i(510,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(400,660);
glVertex2i(450,700);
glVertex2i(550,650);
glEnd();




glBegin(GL_QUAD_STRIP);
glVertex2i(140,630);
glVertex2i(120,680);
glVertex2i(170,690);
glVertex2i(170,630);
glEnd();                         //// front up 1
glBegin(GL_QUAD_STRIP);
glVertex2i(170,630);
glVertex2i(170,690);
glVertex2i(220,670);
glVertex2i(230,630);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(745,690);
glVertex2i(700,630);
glVertex2i(800,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(750,630);
glVertex2i(680,690);              /////    front up 3
glVertex2i(680,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(590,630);
glVertex2i(680,660);
glVertex2i(680,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(1000,630);
glVertex2i(950,660);
glVertex2i(1050,690);
glVertex2i(1050,630);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1050,630);
glVertex2i(1050,690);
glVertex2i(1070,660);
glVertex2i(1070,630);         ///////      front up 4
glEnd();
glBegin(GL_QUADS);
glVertex2i(1070,630);
glVertex2i(1070,660);
glVertex2i(1150,700);
glVertex2i(1150,630);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1150,630);
glVertex2i(1100,660);
glVertex2i(1225,690);
glVertex2i(1225,630);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(1500,750);
glVertex2i(1350,670);
glVertex2i(1500,670);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1350,630);
glVertex2i(1450,670);
glVertex2i(1500,670);
glVertex2i(1500,630);
glEnd();









}
void back_hill_night()
{
glColor3ub(0,102,0);
glBegin(GL_QUADS);
glVertex2i(0,630);          //   back 1
glVertex2i(0,740);
glVertex2i(50,760);
glVertex2i(50,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(50,630);          //   back 2
glVertex2i(50,760);
glVertex2i(120,750);
glVertex2i(120,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(100,630);          //   back 3
glVertex2i(120,750);
glVertex2i(180,800);
glVertex2i(180,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(180,630);       //  back 4
glVertex2i(180,800);
glVertex2i(240,810);
glVertex2i(240,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(240,630);
glVertex2i(240,810);
glVertex2i(290,770);  ////   back 5
glVertex2i(290,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(290,630);
glVertex2i(290,770);
glVertex2i(390,790);       /////  back   6
glVertex2i(390,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(400,630);
glVertex2i(470,790);         ///////// back 5
glVertex2i(500,790);
glVertex2i(500,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,630);
glVertex2i(500,790);         //////////// back 6
glVertex2i(570,700);
glVertex2i(570,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(570,630);
glVertex2i(570,700);
glVertex2i(620,790);         ////////// back 7
glVertex2i(620,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(620,630);
glVertex2i(620,790);             ///////// back  8
glVertex2i(700,750);
glVertex2i(700,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(700,630);
glVertex2i(700,750);                  ////////  back 9
glVertex2i(800,790);
glVertex2i(800,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(800,630);
glVertex2i(800,790);          //////////back 10
glVertex2i(890,680);
glVertex2i(890,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(890,630);
glVertex2i(890,680);       //// back 11
glVertex2i(950,770);
glVertex2i(950,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(950,630);
glVertex2i(950,770);       //////////// back 12
glVertex2i(1100,790);
glVertex2i(1100,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1100,790);            //////// back     13
glVertex2i(1200,700);
glVertex2i(1200,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1200,700);            //////// back     14
glVertex2i(1300,790);
glVertex2i(1300,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1300,630);
glVertex2i(1300,790);             //////// back     15
glVertex2i(1400,740);
glVertex2i(1400,630);
glEnd();



glColor3ub(52,203,147);
glBegin(GL_QUADS);
glVertex2i(0,630);          //   1
glVertex2i(20,670);
glVertex2i(80,700);
glVertex2i(80,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(80,630);
glVertex2i(80,700);       //   2
glVertex2i(120,700);
glVertex2i(120,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(120,630);
glVertex2i(120,700);      //     3
glVertex2i(200,750);
glVertex2i(200,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(200,630);
glVertex2i(200,750);     //     4
glVertex2i(270,690);
glVertex2i(270,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(270,630);
glVertex2i(270,690);           //   5
glVertex2i(400,820);
glVertex2i(400,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(400,630);            //      6
glVertex2i(400,820);
glVertex2i(520,740);
glVertex2i(520,630);
glEnd();



glBegin(GL_QUADS);
glVertex2i(520,630);
glVertex2i(520,740);            //          7
glVertex2i(570,790);
glVertex2i(570,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(570,630);
glVertex2i(570,790);           //        8
glVertex2i(620,740);
glVertex2i(620,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(620,630);
glVertex2i(620,740);           //        9
glVertex2i(650,760);
glVertex2i(650,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(650,630);
glVertex2i(650,760);           //        10
glVertex2i(750,690);
glVertex2i(750,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(750,630);
glVertex2i(750,690);           //        11
glVertex2i(900,740);
glVertex2i(900,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(900,630);
glVertex2i(900,740);           //        12
glVertex2i(1020,720);
glVertex2i(1020,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(900,630);
glVertex2i(900,740);           //        13
glVertex2i(1020,720);
glVertex2i(1020,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1020,630);
glVertex2i(1020,720);                //        14
glVertex2i(1100,740);
glVertex2i(1100,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1100,630);
glVertex2i(1100,740);              //     15
glVertex2i(1200,790);
glVertex2i(1200,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1200,630);
glVertex2i(1200,790);
glVertex2i(1300,700);           //   16
glVertex2i(1300,630);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1300,630);
glVertex2i(1300,700);              //  17
glVertex2i(1500,800);
glVertex2i(1500,630);
glEnd();


glColor3ub(134,240,197);
glBegin(GL_QUADS);
glVertex2i(20,745);
glVertex2i(50,755);///// left 1
glVertex2i(30,735);
glVertex2i(10,725);
glEnd();


glBegin(GL_QUADS);
glVertex2i(70,750);
glVertex2i(100,740);
glVertex2i(110,730);////// left 2
glVertex2i(60,720);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(180,800);
glVertex2i(240,810); ////////// left 3
glVertex2i(280,770);
glVertex2i(140,760);
glEnd();

glBegin(GL_QUADS);
glVertex2i(240,750);
glVertex2i(230,740);
glVertex2i(290,730);
glVertex2i(270,720);
glEnd();



glBegin(GL_POLYGON);
glVertex2i(470,790);
glVertex2i(480,790); ////////// left 3-4
glVertex2i(480,770);
glVertex2i(467,775);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(300,770);       //////left 4
glVertex2i(365,785);
glVertex2i(320,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(500,785);
glVertex2i(520,755);
glVertex2i(510,745);////// left 5
glVertex2i(490,760);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(620,790);
glVertex2i(640,780); ////////// left 5-6
glVertex2i(615,775);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(680,740);
glVertex2i(670,760); ////// left 6
glVertex2i(700,745);
glVertex2i(690,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(712,755);
glVertex2i(800,790); ////// left 7
glVertex2i(780,760);
glVertex2i(770,750);
glVertex2i(770,740);
glVertex2i(750,720);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(950,770);
glVertex2i(1100,790); ////// left 8
glVertex2i(1050,740);
glVertex2i(1000,750);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(1300,790);
glVertex2i(1355,750); ////// left 9
glVertex2i(1270,760);
glEnd();




glBegin(GL_POLYGON);
glVertex2i(40,680);
glVertex2i(80,700);
glVertex2i(120,700); ////// upper 1
glVertex2i(110,680);
glVertex2i(70,660);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(157,720);
glVertex2i(200,750);
glVertex2i(220,730); ////// upper 2
glEnd();

glBegin(GL_QUADS);
glVertex2i(400,820);
glVertex2i(400,810);
glVertex2i(390,790); ////// upper 3
glVertex2i(370,790);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(370,790);
glVertex2i(390,790);
glVertex2i(400,780);
glVertex2i(420,760);
glVertex2i(350,760);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(350,760);
glVertex2i(420,760);
glVertex2i(400,740);
glVertex2i(400,730);
glVertex2i(430,710);
glVertex2i(290,700);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(570,790);
glVertex2i(590,760);
glVertex2i(520,740);/////upper  4
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(610,730);
glVertex2i(650,760);         //////////upper 5
glVertex2i(675,740);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(900,740);
glVertex2i(800,700);  ///////// upper 6
glVertex2i(860,710);
glVertex2i(870,670);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1000,720);
glVertex2i(1050,725);
glVertex2i(1025,700);     ///////////////upper 7
glVertex2i(1000,700);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(1200,790);
glVertex2i(1100,740);     ///////// upper 8
glVertex2i(1235,750);
glVertex2i(1200,730);
glVertex2i(1150,720);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1460,780);
glVertex2i(1370,730);
glVertex2i(1350,710);             //////////  upper   10
glVertex2i(1450,760);
glEnd();



glColor3ub(20,153,122);
glBegin(GL_QUADS);
glVertex2i(450,780);
glVertex2i(530,730);
glVertex2i(550,690);
glVertex2i(460,750);
glEnd();
glBegin(GL_TRIANGLES);        //upper front 2
glVertex2i(400,630);
glVertex2i(450,670);
glVertex2i(510,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(400,660);
glVertex2i(450,700);
glVertex2i(550,650);
glEnd();




glBegin(GL_QUAD_STRIP);
glVertex2i(140,630);
glVertex2i(120,680);
glVertex2i(170,690);
glVertex2i(170,630);
glEnd();                         //// front up 1
glBegin(GL_QUAD_STRIP);
glVertex2i(170,630);
glVertex2i(170,690);
glVertex2i(220,670);
glVertex2i(230,630);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(745,690);
glVertex2i(700,630);
glVertex2i(800,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(750,630);
glVertex2i(680,690);              /////    front up 3
glVertex2i(680,630);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(590,630);
glVertex2i(680,660);
glVertex2i(680,630);
glEnd();


glBegin(GL_QUADS);
glVertex2i(1000,630);
glVertex2i(950,660);
glVertex2i(1050,690);
glVertex2i(1050,630);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1050,630);
glVertex2i(1050,690);
glVertex2i(1070,660);
glVertex2i(1070,630);         ///////      front up 4
glEnd();
glBegin(GL_QUADS);
glVertex2i(1070,630);
glVertex2i(1070,660);
glVertex2i(1150,700);
glVertex2i(1150,630);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1150,630);
glVertex2i(1100,660);
glVertex2i(1225,690);
glVertex2i(1225,630);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(1500,750);
glVertex2i(1350,670);
glVertex2i(1500,670);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1350,630);
glVertex2i(1450,670);
glVertex2i(1500,670);
glVertex2i(1500,630);
glEnd();









}



void sun()
{
     glPushMatrix();
	glTranslatef(position_sun,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 153);
                               x=400;y=850;r=40;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 0);
                               x=400;y=850;r=30;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glPopMatrix();

     glEnd();


}


void cloud_1()
{
glColor3ub(255,255, 255);
   glPushMatrix();
	glTranslatef(position_cloud_1,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
     glColor3ub(255,255, 255);
    glBegin(GL_TRIANGLE_FAN);

                               x=100;y=870;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=130;y=870;r=30;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=160;y=870;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }


     glPopMatrix();
     glEnd();

}


void cloud_2()
{
    glColor3ub(255,255, 255);
   glPushMatrix();
	glTranslatef(position_cloud_2,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);

                               x=1400;y=820;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=1430;y=820;r=30;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=1460;y=820;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }


     glPopMatrix();
     glEnd();

}

void cloud_3()
{
    glColor3ub(255,255, 255);
   glPushMatrix();
	glTranslatef(position_cloud_3,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);

                               x=500;y=820;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=530;y=820;r=30;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=560;y=820;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }


     glPopMatrix();
     glEnd();

}

void cloud_4()
{
    glColor3ub(255,255, 255);
   glPushMatrix();
	glTranslatef(position_cloud_4,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);

                               x=700;y=850;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=730;y=850;r=30;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);

                               x=760;y=850;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }


     glPopMatrix();
     glEnd();

}

void tree(){



glColor3ub(153,255,153);
glBegin(GL_TRIANGLES);
glVertex2i(40,640);
glVertex2i(90,640);
glVertex2i(65,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(40,650);
glVertex2i(90,650);             ////tree 1  back
glVertex2i(65,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(45,665);
glVertex2i(85,665);
glVertex2i(65,690);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(140,640);
glVertex2i(190,640);
glVertex2i(165,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(140,650);
glVertex2i(190,650);             ////tree 2  back right
glVertex2i(165,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(145,665);
glVertex2i(185,665);
glVertex2i(165,690);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(480,660);
glVertex2i(530,660);
glVertex2i(505,690);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(480,670);
glVertex2i(530,670);             ////tree 3  back left
glVertex2i(505,700);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(485,685);
glVertex2i(525,685);
glVertex2i(505,710);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(560,660);
glVertex2i(610,660);
glVertex2i(585,690);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(560,670);
glVertex2i(610,670);             ////tree 3 back right up
glVertex2i(585,700);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(565,685);
glVertex2i(605,685);
glVertex2i(585,710);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(800,640);
glVertex2i(850,640);
glVertex2i(825,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(800,650);
glVertex2i(850,650);             ////tree 4 left back up
glVertex2i(825,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(805,665);
glVertex2i(845,665);
glVertex2i(825,690);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(840,640);
glVertex2i(890,640);
glVertex2i(865,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(840,650);
glVertex2i(890,650);             ////tree 4 right back  up
glVertex2i(865,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(845,665);
glVertex2i(885,665);
glVertex2i(865,690);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(1020,640);
glVertex2i(1070,640);
glVertex2i(1045,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1020,650);
glVertex2i(1070,650);             ////tree 5 left back up
glVertex2i(1045,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1025,665);
glVertex2i(1065,665);
glVertex2i(1045,690);
glEnd();




glBegin(GL_TRIANGLES);
glVertex2i(1120,670);
glVertex2i(1170,670);
glVertex2i(1145,700);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1120,680);
glVertex2i(1170,680);             ////tree 5  left back up
glVertex2i(1145,710);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1125,695);
glVertex2i(1165,695);
glVertex2i(1145,720);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(1240,640);
glVertex2i(1290,640);
glVertex2i(1265,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1270,650);
glVertex2i(1290,650);             ////tree 5 right back up
glVertex2i(1265,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1245,665);
glVertex2i(1285,665);
glVertex2i(1265,690);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(1450,640);
glVertex2i(1510,640);
glVertex2i(1525,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1450,650);
glVertex2i(1550,650);             ////tree 6 left back up
glVertex2i(1505,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1460,665);
glVertex2i(1545,665);
glVertex2i(1495,690);
glEnd();



glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(20,640);
glVertex2i(70,640);
glVertex2i(45,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(20,650);
glVertex2i(70,650);             ////tree 1  up
glVertex2i(45,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(25,665);
glVertex2i(65,665);
glVertex2i(45,690);
glEnd();






glBegin(GL_TRIANGLES);
glVertex2i(120,640);
glVertex2i(170,640);
glVertex2i(145,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(120,650);
glVertex2i(170,650);             ////tree 2  up
glVertex2i(145,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(125,665);
glVertex2i(165,665);
glVertex2i(145,690);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(520,640);
glVertex2i(570,640);
glVertex2i(545,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(520,650);
glVertex2i(570,650);             ////tree 3  up
glVertex2i(545,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(525,665);
glVertex2i(565,665);
glVertex2i(545,690);
glEnd();


glBegin(GL_TRIANGLES);
glVertex2i(820,640);
glVertex2i(870,640);
glVertex2i(845,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(820,650);
glVertex2i(870,650);             ////tree 4  up
glVertex2i(845,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(825,665);
glVertex2i(865,665);
glVertex2i(845,690);
glEnd();





glBegin(GL_TRIANGLES);
glVertex2i(1220,640);
glVertex2i(1270,640);
glVertex2i(1245,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1220,650);
glVertex2i(1270,650);             ////tree 5  up
glVertex2i(1245,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1225,665);
glVertex2i(1265,665);
glVertex2i(1245,690);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(1040,640);
glVertex2i(1090,640);
glVertex2i(1065,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1040,650);
glVertex2i(1090,650);             ////tree 5 left up
glVertex2i(1065,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1045,665);
glVertex2i(1085,665);
glVertex2i(1065,690);
glEnd();




glBegin(GL_TRIANGLES);
glVertex2i(1470,640);
glVertex2i(1530,640);
glVertex2i(1545,670);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1470,650);
glVertex2i(1570,650);             ////tree 6  up
glVertex2i(1525,680);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1480,665);
glVertex2i(1565,665);
glVertex2i(1515,690);
glEnd();


                   ///////////////////////        land tree    ///////////////////


glBegin(GL_TRIANGLES);
glVertex2i(140,290);
glVertex2i(190,290);
glVertex2i(165,320);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(140,300);
glVertex2i(190,300);             ////tree 7   down
glVertex2i(165,330);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(145,315);
glVertex2i(185,315);
glVertex2i(165,340);
glEnd();

glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(20,140);
glVertex2i(70,140);
glVertex2i(45,170);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(20,150);
glVertex2i(70,150);             ////tree 8  down
glVertex2i(45,180);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(25,165);
glVertex2i(65,165);
glVertex2i(45,190);
glEnd();

glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(140,140);
glVertex2i(190,140);
glVertex2i(165,170);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(140,150);
glVertex2i(190,150);             ////tree 9  down
glVertex2i(165,180);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(145,165);
glVertex2i(185,165);
glVertex2i(165,190);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(1440,290);
glVertex2i(1490,290);
glVertex2i(1465,320);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1440,300);
glVertex2i(1490,300);             ////tree 10   down
glVertex2i(1465,330);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1445,315);
glVertex2i(1485,315);
glVertex2i(1465,340);
glEnd();

glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(20,540);
glVertex2i(70,540);
glVertex2i(45,570);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(20,550);
glVertex2i(70,550);             ////tree 11  down
glVertex2i(45,580);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(25,565);
glVertex2i(65,565);
glVertex2i(45,590);
glEnd();

glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(320,540);
glVertex2i(370,540);
glVertex2i(345,570);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(320,550);
glVertex2i(370,550);             ////tree 12  down
glVertex2i(345,580);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(325,565);
glVertex2i(365,565);
glVertex2i(345,590);
glEnd();


glColor3ub(12,158,17);
glBegin(GL_TRIANGLES);
glVertex2i(1270,540);
glVertex2i(1320,540);
glVertex2i(1295,570);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1270,550);
glVertex2i(1320,550);             ////tree 13  down
glVertex2i(1295,580);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(1275,565);
glVertex2i(1315,565);
glVertex2i(1295,590);
glEnd();






glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(60,630);
glVertex2i(70,630);  ///// tree 1 back lower part
glVertex2i(70,640);
glVertex2i(60,640);
glEnd();

glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(40,630);
glVertex2i(50,630);  ///// tree 1 lower part
glVertex2i(50,640);
glVertex2i(40,640);
glEnd();


glBegin(GL_QUADS);
glVertex2i(160,630);
glVertex2i(170,630);  ///// tree 2 back right lower part
glVertex2i(170,640);
glVertex2i(160,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(140,630);
glVertex2i(150,630);  ///// tree 2 lower part
glVertex2i(150,640);
glVertex2i(140,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,630);
glVertex2i(510,630);  ///// tree 3 back left lower part
glVertex2i(510,660);
glVertex2i(500,660);
glEnd();


glBegin(GL_QUADS);
glVertex2i(540,630);
glVertex2i(550,630);  ///// tree 3 lower part
glVertex2i(550,640);
glVertex2i(540,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(580,630);
glVertex2i(590,630);  ///// tree 3 lower right  part
glVertex2i(590,660);
glVertex2i(580,660);
glEnd();

glBegin(GL_QUADS);
glVertex2i(820,630);
glVertex2i(830,630);  ///// tree 4 left lower part
glVertex2i(830,640);
glVertex2i(820,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(840,630);
glVertex2i(850,630);  ///// tree 4 lower part
glVertex2i(850,640);
glVertex2i(840,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(860,630);
glVertex2i(870,630);  ///// tree 4 right lower part
glVertex2i(870,640);
glVertex2i(860,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1140,630);
glVertex2i(1150,630);  ///// tree 5 left lower part
glVertex2i(1150,670);
glVertex2i(1140,670);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1040,630);
glVertex2i(1050,630);  ///// (tree 5  left lower) left  part
glVertex2i(1050,640);
glVertex2i(1040,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1060,630);
glVertex2i(1070,630);  ///// tree 5 lower part
glVertex2i(1070,640);
glVertex2i(1060,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1240,630);
glVertex2i(1250,630);  ///// tree 5 lower part
glVertex2i(1250,640);
glVertex2i(1240,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1260,630);
glVertex2i(1270,630);  ///// tree 5 lower part
glVertex2i(1270,640);
glVertex2i(1260,640);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1495,630);
glVertex2i(1500,630);  ///// tree 6 lower part
glVertex2i(1500,640);
glVertex2i(1495,640);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1475,630);
glVertex2i(1490,630);  ///// tree 6 lower part
glVertex2i(1490,640);
glVertex2i(1475,640);
glEnd();
glBegin(GL_QUADS);
glVertex2i(160,290);
glVertex2i(170,290);  ///// tree 7 lower part
glVertex2i(170,260);
glVertex2i(160,260);
glEnd();

glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(40,100);
glVertex2i(50,100);  ///// tree 8 lower part
glVertex2i(50,140);
glVertex2i(40,140);
glEnd();

glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(160,100);
glVertex2i(170,100);  ///// tree 9 lower part
glVertex2i(170,140);
glVertex2i(160,140);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1460,290);
glVertex2i(1470,290);  ///// tree 10 lower part
glVertex2i(1470,260);
glVertex2i(1460,260);
glEnd();


glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(40,500);
glVertex2i(50,500);  ///// tree 11 lower part
glVertex2i(50,540);
glVertex2i(40,540);
glEnd();

glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(340,500);
glVertex2i(350,500);  ///// tree 11 lower part
glVertex2i(350,540);
glVertex2i(340,540);
glEnd();


glColor3ub(153,76,0);
glBegin(GL_QUADS);
glVertex2i(1290,500);
glVertex2i(1300,500);  ///// tree 12 lower part
glVertex2i(1300,540);
glVertex2i(1290,540);
glEnd();





}

void river(){
glBegin(GL_QUADS);
glColor3ub(153,255,255);
glVertex2i(0,0);
glVertex2i(1500,0);
glVertex2i(1500,630);
glVertex2i(0,630);
glEnd();
}


void left_land()
{
 glColor3ub(204,102,02);


 glBegin(GL_QUADS);
glPointSize(3.0);
glVertex2i(0,630);
glVertex2i(403,630);
glVertex2i(553,400);
glVertex2i(0,400);


glBegin(GL_QUADS);
glVertex2i(553,400);
glVertex2i(393,150);
glVertex2i(0,0);
glVertex2i(0,493);
glEnd();



glBegin(GL_QUADS);
glColor3ub(68,196,102);
glPointSize(3.0);
glVertex2i(0,630);
glVertex2i(400,630);
glVertex2i(550,400);
glVertex2i(0,400);


glBegin(GL_QUADS);
glColor3ub(68,196,102);
glVertex2i(550,400);
glVertex2i(390,150);
glVertex2i(0,0);
glVertex2i(0,400);
glEnd();


}
void left_land_night()
{
 glColor3ub(192,192,192);


 glBegin(GL_QUADS);
glPointSize(3.0);
glVertex2i(0,630);
glVertex2i(403,630);
glVertex2i(553,400);
glVertex2i(0,400);


glBegin(GL_QUADS);
glVertex2i(553,400);
glVertex2i(393,150);
glVertex2i(0,0);
glVertex2i(0,493);
glEnd();



glBegin(GL_QUADS);
glColor3ub(9,51,25);
glPointSize(3.0);
glVertex2i(0,630);
glVertex2i(400,630);
glVertex2i(550,400);
glVertex2i(0,400);


glBegin(GL_QUADS);
glColor3ub(9,51,25);
glVertex2i(550,400);
glVertex2i(390,150);
glVertex2i(0,0);
glVertex2i(0,400);
glEnd();


}

void right_land()
{


    glColor3ub(204,102,02);
    glBegin(GL_POLYGON);
glVertex2i(1500,630);
glVertex2i(893,630);
glVertex2i(1443,400);
glVertex2i(993,400);
glVertex2i(1500,400);
glEnd();




glBegin(GL_POLYGON);
glVertex2i(1493,400);
glVertex2i(993,400);
glVertex2i(1243,250);
glVertex2i(1093,200);
glVertex2i(1500,93);
glEnd();






glColor3ub(68,196,102);
glPointSize(3.0);
glBegin(GL_POLYGON);
glVertex2i(1500,630);
glVertex2i(900,630);
glVertex2i(1450,400);
glVertex2i(1000,400);
glVertex2i(1500,400);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(1500,400);
glVertex2i(1000,400);
glVertex2i(1250,250);
glVertex2i(1100,200);
glVertex2i(1500,100);
glEnd();


}
void right_land_night()
{


    glColor3ub(192,192,192);
    glBegin(GL_POLYGON);
glVertex2i(1500,630);
glVertex2i(893,630);
glVertex2i(1443,400);
glVertex2i(993,400);
glVertex2i(1500,400);
glEnd();




glBegin(GL_POLYGON);
glVertex2i(1493,400);
glVertex2i(993,400);
glVertex2i(1243,250);
glVertex2i(1093,200);
glVertex2i(1500,93);
glEnd();






glColor3ub(9,51,25);
glPointSize(3.0);
glBegin(GL_POLYGON);
glVertex2i(1500,630);
glVertex2i(900,630);
glVertex2i(1450,400);
glVertex2i(1000,400);
glVertex2i(1500,400);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(1500,400);
glVertex2i(1000,400);
glVertex2i(1250,250);
glVertex2i(1100,200);
glVertex2i(1500,100);
glEnd();


}

void left_homes(){
//////left house/////////

glBegin(GL_QUADS);
glColor3ub(205,102,0);
glVertex2i(0,300);
glVertex2i(100,300);
glVertex2i(100,350);
glVertex2i(0,350);
glBegin(GL_QUADS);
glColor3ub(153,76,0);
glVertex2i(100,350);
glVertex2i(130,360);
glVertex2i(130,290);
glVertex2i(100,290);
glBegin(GL_QUADS);
glColor3ub(96,96,96);
glVertex2i(0,300);
glVertex2i(100,300);
glVertex2i(100,290);
glVertex2i(0,290);
glBegin(GL_QUADS);
glColor3ub(205,102,0);
glVertex2i(0,290);
glVertex2i(100,290);
glVertex2i(100,250);
glVertex2i(0,250);
glEnd();
glBegin(GL_QUADS);
glColor3ub(96,96,96);
glVertex2i(0,350);
glVertex2i(100,350);
glVertex2i(130,360);
glVertex2i(0,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96,96,96);
glVertex2i(30,430);
glVertex2i(60,430);
glVertex2i(45,460);
glEnd();


glColor3ub(205,102,0);
 float pi=2*3.1416l;
     int tri=40;

    glBegin(GL_TRIANGLE_FAN);

                               x=45;y=400;r=40;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(5,350);
glVertex2i(85,350);
glVertex2i(85,400);
glVertex2i(5,400);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(99,96,96);
glVertex2i(100,250);
glVertex2i(100,290);
glVertex2i(130,290);
glEnd();

/////////////     end      //////////

/////////////   house 1  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(250,350);
glVertex2i(270,300);
glVertex2i(400,300);
glVertex2i(370,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(250,350);
glVertex2i(270,300);
glVertex2i(230,310);
glEnd();
glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(270,300);
glVertex2i(270,250);
glVertex2i(390,250);
glVertex2i(390,300);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(270,250);
glVertex2i(270,300);
glVertex2i(240,310);
glVertex2i(240,270);
glEnd();

///////////      end     /////////


/////////////   house 2  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(150,630);
glVertex2i(160,600);
glVertex2i(250,600);
glVertex2i(230,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(150,630);
glVertex2i(160,600);
glVertex2i(120,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(160,600);
glVertex2i(160,560);
glVertex2i(240,560);
glVertex2i(240,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(160,560);
glVertex2i(160,600);
glVertex2i(130,610);
glVertex2i(130,580);
glEnd();

///////////      end     /////////

/////////////   house 3 //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1150,630);
glVertex2i(1160,600);
glVertex2i(1250,600);
glVertex2i(1230,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1150,630);
glVertex2i(1160,600);
glVertex2i(1120,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1160,600);
glVertex2i(1160,560);
glVertex2i(1240,560);
glVertex2i(1240,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1160,560);
glVertex2i(1160,600);
glVertex2i(1130,610);
glVertex2i(1130,580);
glEnd();

///////////      end     /////////

/////////////   house 4 //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1350,630);
glVertex2i(1360,600);
glVertex2i(1450,600);
glVertex2i(1430,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1350,630);
glVertex2i(1360,600);
glVertex2i(1320,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1360,600);
glVertex2i(1360,560);
glVertex2i(1440,560);
glVertex2i(1440,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1360,560);
glVertex2i(1360,600);
glVertex2i(1330,610);
glVertex2i(1330,580);
glEnd();

///////////      end     /////////

/////////////   house 5  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1250,350);
glVertex2i(1270,300);
glVertex2i(1400,300);
glVertex2i(1370,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1250,350);
glVertex2i(1270,300);
glVertex2i(1230,310);
glEnd();
glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1270,300);
glVertex2i(1270,250);
glVertex2i(1390,250);
glVertex2i(1390,300);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1270,250);
glVertex2i(1270,300);
glVertex2i(1240,310);
glVertex2i(1240,270);
glEnd();

///////////      end     /////////







                                    //// window big house  //

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(10,330);
glVertex2i(30,330);
glVertex2i(30,310);
glVertex2i(10,310);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(50,330);
glVertex2i(70,330);
glVertex2i(70,310);
glVertex2i(50,310);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(110,330);
glVertex2i(120,335);
glVertex2i(120,310);
glVertex2i(110,310);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(30,270);
glVertex2i(50,270);
glVertex2i(50,250);
glVertex2i(30,250);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(30,360);
glVertex2i(60,360);
glVertex2i(60,380);
glVertex2i(30,380);
glEnd();
      ///////////    end  ////////////





               /////////// window  house  1 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(320,250);
glVertex2i(350,250);
glVertex2i(350,280);
glVertex2i(320,280);

glVertex2i(280,270);
glVertex2i(300,270);
glVertex2i(300,290);
glVertex2i(280,290);

glVertex2i(360,270);
glVertex2i(380,270);
glVertex2i(380,290);
glVertex2i(360,290);

glVertex2i(260,270);
glVertex2i(250,275);
glVertex2i(250,295);
glVertex2i(260,290);
glEnd();
            ///////////    end  ////////////




                    /////////// window  house  2 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(190,560);
glVertex2i(210,560);
glVertex2i(210,580);
glVertex2i(190,580);

glVertex2i(165,575);
glVertex2i(185,575);
glVertex2i(185,595);
glVertex2i(165,595);

glVertex2i(220,575);
glVertex2i(235,575);
glVertex2i(235,595);
glVertex2i(220,595);

glVertex2i(150,580);
glVertex2i(140,585);
glVertex2i(140,600);
glVertex2i(150,598);
glEnd();

    ///////////    end  ////////////

                        /////////// window  house  3 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(1190,560);
glVertex2i(1210,560);
glVertex2i(1210,580);
glVertex2i(1190,580);

glVertex2i(1165,575);
glVertex2i(1185,575);
glVertex2i(1185,595);
glVertex2i(1165,595);

glVertex2i(1220,575);
glVertex2i(1235,575);
glVertex2i(1235,595);
glVertex2i(1220,595);

glVertex2i(1150,580);
glVertex2i(1140,585);
glVertex2i(1140,600);
glVertex2i(1150,598);
glEnd();

    ///////////    end  ////////////

  glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(1390,560);
glVertex2i(1410,560);
glVertex2i(1410,580);
glVertex2i(1390,580);

glVertex2i(1365,575);
glVertex2i(1385,575);
glVertex2i(1385,595);
glVertex2i(1365,595);

glVertex2i(1420,575);
glVertex2i(1435,575);
glVertex2i(1435,595);
glVertex2i(1420,595);

glVertex2i(1350,580);
glVertex2i(1340,585);
glVertex2i(1340,600);
glVertex2i(1350,598);
glEnd();

    ///////////    end  ////////////





////////////  window  house 5   /////////////
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(1320,250);
glVertex2i(1350,250);
glVertex2i(1350,280);
glVertex2i(1320,280);

glVertex2i(1280,270);
glVertex2i(1300,270);
glVertex2i(1300,290);
glVertex2i(1280,290);

glVertex2i(1360,270);
glVertex2i(1380,270);
glVertex2i(1380,290);
glVertex2i(1360,290);

glVertex2i(1260,270);
glVertex2i(1250,275);
glVertex2i(1250,295);
glVertex2i(1260,290);





glEnd();
}
void left_homes_night(){
//////left house/////////

glBegin(GL_QUADS);
glColor3ub(205,102,0);
glVertex2i(0,300);
glVertex2i(100,300);
glVertex2i(100,350);
glVertex2i(0,350);
glBegin(GL_QUADS);
glColor3ub(153,76,0);
glVertex2i(100,350);
glVertex2i(130,360);
glVertex2i(130,290);
glVertex2i(100,290);
glBegin(GL_QUADS);
glColor3ub(96,96,96);
glVertex2i(0,300);
glVertex2i(100,300);
glVertex2i(100,290);
glVertex2i(0,290);
glBegin(GL_QUADS);
glColor3ub(205,102,0);
glVertex2i(0,290);
glVertex2i(100,290);
glVertex2i(100,250);
glVertex2i(0,250);
glEnd();
glBegin(GL_QUADS);
glColor3ub(96,96,96);
glVertex2i(0,350);
glVertex2i(100,350);
glVertex2i(130,360);
glVertex2i(0,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96,96,96);
glVertex2i(30,430);
glVertex2i(60,430);
glVertex2i(45,460);
glEnd();


glColor3ub(205,102,0);
 float pi=2*3.1416l;
     int tri=40;

    glBegin(GL_TRIANGLE_FAN);

                               x=45;y=400;r=40;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(5,350);
glVertex2i(85,350);
glVertex2i(85,400);
glVertex2i(5,400);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(99,96,96);
glVertex2i(100,250);
glVertex2i(100,290);
glVertex2i(130,290);
glEnd();

/////////////     end      //////////

/////////////   house 1  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(250,350);
glVertex2i(270,300);
glVertex2i(400,300);
glVertex2i(370,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(250,350);
glVertex2i(270,300);
glVertex2i(230,310);
glEnd();
glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(270,300);
glVertex2i(270,250);
glVertex2i(390,250);
glVertex2i(390,300);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(270,250);
glVertex2i(270,300);
glVertex2i(240,310);
glVertex2i(240,270);
glEnd();

///////////      end     /////////


/////////////   house 2  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(150,630);
glVertex2i(160,600);
glVertex2i(250,600);
glVertex2i(230,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(150,630);
glVertex2i(160,600);
glVertex2i(120,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(160,600);
glVertex2i(160,560);
glVertex2i(240,560);
glVertex2i(240,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(160,560);
glVertex2i(160,600);
glVertex2i(130,610);
glVertex2i(130,580);
glEnd();

///////////      end     /////////

/////////////   house 3 //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1150,630);
glVertex2i(1160,600);
glVertex2i(1250,600);
glVertex2i(1230,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1150,630);
glVertex2i(1160,600);
glVertex2i(1120,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1160,600);
glVertex2i(1160,560);
glVertex2i(1240,560);
glVertex2i(1240,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1160,560);
glVertex2i(1160,600);
glVertex2i(1130,610);
glVertex2i(1130,580);
glEnd();

///////////      end     /////////

/////////////   house 4 //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1350,630);
glVertex2i(1360,600);
glVertex2i(1450,600);
glVertex2i(1430,630);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1350,630);
glVertex2i(1360,600);
glVertex2i(1320,610);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1360,600);
glVertex2i(1360,560);
glVertex2i(1440,560);
glVertex2i(1440,600);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1360,560);
glVertex2i(1360,600);
glVertex2i(1330,610);
glVertex2i(1330,580);
glEnd();

///////////      end     /////////

/////////////   house 5  //////////
glBegin(GL_QUADS);
glColor3ub(255,178,102);
glVertex2i(1250,350);
glVertex2i(1270,300);
glVertex2i(1400,300);
glVertex2i(1370,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(205,102,0);
glVertex2i(1250,350);
glVertex2i(1270,300);
glVertex2i(1230,310);
glEnd();
glBegin(GL_QUADS);
glColor3ub(178,122,49);
glVertex2i(1270,300);
glVertex2i(1270,250);
glVertex2i(1390,250);
glVertex2i(1390,300);
glEnd();

glBegin(GL_QUADS);
glColor3ub(104,74,35);
glVertex2i(1270,250);
glVertex2i(1270,300);
glVertex2i(1240,310);
glVertex2i(1240,270);
glEnd();

///////////      end     /////////







                                    //// window big house  //

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(10,330);
glVertex2i(30,330);
glVertex2i(30,310);
glVertex2i(10,310);

glVertex2i(50,330);
glVertex2i(70,330);
glVertex2i(70,310);
glVertex2i(50,310);

glVertex2i(110,330);
glVertex2i(120,335);
glVertex2i(120,310);
glVertex2i(110,310);

glVertex2i(30,270);
glVertex2i(50,270);
glVertex2i(50,250);
glVertex2i(30,250);

glVertex2i(30,360);
glVertex2i(60,360);
glVertex2i(60,380);
glVertex2i(30,380);
glEnd();
      ///////////    end  ////////////





               /////////// window  house  1 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(320,250);
glVertex2i(350,250);
glVertex2i(350,280);
glVertex2i(320,280);

glVertex2i(280,270);
glVertex2i(300,270);
glVertex2i(300,290);
glVertex2i(280,290);

glVertex2i(360,270);
glVertex2i(380,270);
glVertex2i(380,290);
glVertex2i(360,290);

glVertex2i(260,270);
glVertex2i(250,275);
glVertex2i(250,295);
glVertex2i(260,290);
glEnd();
            ///////////    end  ////////////




                    /////////// window  house  2 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(190,560);
glVertex2i(210,560);
glVertex2i(210,580);
glVertex2i(190,580);

glVertex2i(165,575);
glVertex2i(185,575);
glVertex2i(185,595);
glVertex2i(165,595);

glVertex2i(220,575);
glVertex2i(235,575);
glVertex2i(235,595);
glVertex2i(220,595);

glVertex2i(150,580);
glVertex2i(140,585);
glVertex2i(140,600);
glVertex2i(150,598);
glEnd();

    ///////////    end  ////////////

                        /////////// window  house  3 ///////

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(1190,560);
glVertex2i(1210,560);
glVertex2i(1210,580);
glVertex2i(1190,580);

glVertex2i(1165,575);
glVertex2i(1185,575);
glVertex2i(1185,595);
glVertex2i(1165,595);

glVertex2i(1220,575);
glVertex2i(1235,575);
glVertex2i(1235,595);
glVertex2i(1220,595);

glVertex2i(1150,580);
glVertex2i(1140,585);
glVertex2i(1140,600);
glVertex2i(1150,598);
glEnd();

    ///////////    end  ////////////

  glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(1390,560);
glVertex2i(1410,560);
glVertex2i(1410,580);
glVertex2i(1390,580);

glVertex2i(1365,575);
glVertex2i(1385,575);
glVertex2i(1385,595);
glVertex2i(1365,595);

glVertex2i(1420,575);
glVertex2i(1435,575);
glVertex2i(1435,595);
glVertex2i(1420,595);

glVertex2i(1350,580);
glVertex2i(1340,585);
glVertex2i(1340,600);
glVertex2i(1350,598);
glEnd();

    ///////////    end  ////////////





////////////  window  house 5   /////////////
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2i(1320,250);
glVertex2i(1350,250);
glVertex2i(1350,280);
glVertex2i(1320,280);

glVertex2i(1280,270);
glVertex2i(1300,270);
glVertex2i(1300,290);
glVertex2i(1280,290);

glVertex2i(1360,270);
glVertex2i(1380,270);
glVertex2i(1380,290);
glVertex2i(1360,290);

glVertex2i(1260,270);
glVertex2i(1250,275);
glVertex2i(1250,295);
glVertex2i(1260,290);





glEnd();
}

void rail_line()
{
    glColor3ub(0,0,0);
    glPointSize(10.0);
    glBegin(GL_LINES);
    glVertex2i(0,450);
    glVertex2i(1500,450);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0,480);
    glVertex2i(1500,480);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2i(0,450);
    glVertex2i(1500,450);
    glVertex2i(1500,480);
    glVertex2i(0,480);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2i(40,450);
    glVertex2i(40,480);

    glVertex2i(80,450);
    glVertex2i(80,480);

    glVertex2i(120,450);
    glVertex2i(120,480);

    glVertex2i(160,450);
    glVertex2i(160,480);

    glVertex2i(200,450);
    glVertex2i(200,480);

    glVertex2i(240,450);
    glVertex2i(240,480);

    glVertex2i(280,450);
    glVertex2i(280,480);


    glVertex2i(300,450);
    glVertex2i(300,480);

    glVertex2i(340,450);
    glVertex2i(340,480);

    glVertex2i(380,450);
    glVertex2i(380,480);

    glVertex2i(420,450);
    glVertex2i(420,480);

    glVertex2i(460,450);
    glVertex2i(460,480);

    glVertex2i(500,450);
    glVertex2i(500,480);

    glVertex2i(540,450);
    glVertex2i(540,480);

    glVertex2i(580,450);
    glVertex2i(580,480);

    glVertex2i(620,450);
    glVertex2i(620,480);

    glVertex2i(660,450);
    glVertex2i(660,480);

    glVertex2i(700,450);
    glVertex2i(700,480);

    glVertex2i(740,450);
    glVertex2i(740,480);

    glVertex2i(780,450);
    glVertex2i(780,480);

    glVertex2i(820,450);
    glVertex2i(820,480);

    glVertex2i(860,450);
    glVertex2i(860,480);

    glVertex2i(900,450);
    glVertex2i(900,480);

    glVertex2i(940,450);
    glVertex2i(940,480);

    glVertex2i(980,450);
    glVertex2i(980,480);

    glVertex2i(1020,450);
    glVertex2i(1020,480);

    glVertex2i(1060,450);
    glVertex2i(1060,480);

    glVertex2i(1100,450);
    glVertex2i(1100,480);

    glVertex2i(1140,450);
    glVertex2i(1140,480);

    glVertex2i(1180,450);
    glVertex2i(1180,480);

    glVertex2i(1220,450);
    glVertex2i(1220,480);

    glVertex2i(1260,450);
    glVertex2i(1260,480);

    glVertex2i(1300,450);
    glVertex2i(1300,480);

    glVertex2i(1340,450);
    glVertex2i(1340,480);

    glVertex2i(1380,450);
    glVertex2i(1380,480);

    glVertex2i(1420,450);
    glVertex2i(1420,480);

    glVertex2i(1460,450);
    glVertex2i(1460,480);


    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2i(540,450);
    glVertex2i(580,450);
    glVertex2i(580,420);
    glVertex2i(540,420);

    glVertex2i(550,420);
    glVertex2i(570,420);
    glVertex2i(570,390);
    glVertex2i(550,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(540,420);
    glVertex2i(500,450);
    glVertex2i(540,450);

    glVertex2i(580,420);
    glVertex2i(620,450);
    glVertex2i(580,450);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(740,450);
    glVertex2i(780,450);
    glVertex2i(780,420);
    glVertex2i(740,420);

    glVertex2i(750,420);
    glVertex2i(770,420);
    glVertex2i(770,390);
    glVertex2i(750,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(740,420);
    glVertex2i(700,450);
    glVertex2i(740,450);

    glVertex2i(780,420);
    glVertex2i(820,450);
    glVertex2i(780,450);
    glEnd();

       glBegin(GL_QUADS);
    glVertex2i(940,450);
    glVertex2i(980,450);
    glVertex2i(980,420);
    glVertex2i(940,420);

    glVertex2i(950,420);
    glVertex2i(970,420);
    glVertex2i(970,390);
    glVertex2i(950,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(940,420);
    glVertex2i(900,450);
    glVertex2i(940,450);

    glVertex2i(980,420);
    glVertex2i(1020,450);
    glVertex2i(940,450);
    glEnd();


    //////////////    rail body       ///////////////
glPushMatrix();
glTranslatef(position_rail,0,0);

 glBegin(GL_POLYGON);
  glColor3ub(255,255,255);
  glVertex2i(300,460);
  glVertex2i(310,470);
  glVertex2i(310,520);
  glVertex2i(200,520);
  glVertex2i(200,460);
glEnd();


  glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(200,460);
  glVertex2i(300,460);
  glVertex2i(300,510);
  glVertex2i(200,510);

glEnd();

       glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
     glVertex2i(410,460);
     glVertex2i(420,470);
     glVertex2i(420,520);
     glVertex2i(320,520);
     glVertex2i(310,510);
glEnd();


 glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(310,460);
  glVertex2i(410,460);
  glVertex2i(410,510);
  glVertex2i(310,510);
  glEnd();

       glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
     glVertex2i(520,460);
     glVertex2i(530,470);
     glVertex2i(530,520);
     glVertex2i(430,520);
    glVertex2i(420,510);
glEnd();


 glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(420,460);
  glVertex2i(520,460);
  glVertex2i(520,510);
  glVertex2i(420,510);
  glEnd();

        glBegin(GL_POLYGON);
       glColor3ub(255,255,255);
       glVertex2i(640,460);
       glVertex2i(650,470);
       glVertex2i(650,520);
       glVertex2i(540,520);
       glVertex2i(530,510);
glEnd();


 glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(530,460);
  glVertex2i(640,460);
  glVertex2i(640,510);
  glVertex2i(530,510);



glEnd();

glBegin(GL_QUADS);
  glColor3ub(0,0,0);
  glVertex2i(635,512);
  glVertex2i(610,512);
  glVertex2i(610,518);
  glVertex2i(635,518);

  glVertex2i(600,512);
  glVertex2i(580,512);
  glVertex2i(580,518);
  glVertex2i(600,518);

glEnd();

glBegin(GL_QUADS);
  glColor3ub(255,0,0);
  glVertex2i(642,480);
  glVertex2i(642,500);
  glVertex2i(648,500);
  glVertex2i(646,480);

glEnd();





///////////// rail circle   ///////////////
    glColor3ub(0,0,0);
    float pi=2*3.1416l;
     int tri=40;

    glBegin(GL_TRIANGLE_FAN);

                               x=620;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=550;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=500;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

   glBegin(GL_TRIANGLE_FAN);

                               x=440;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=390;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();
   glBegin(GL_TRIANGLE_FAN);

                               x=330;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


   glBegin(GL_TRIANGLE_FAN);

                               x=280;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

   glBegin(GL_TRIANGLE_FAN);

                               x=220;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

////////////  end   rail circle //////////


//////////////   window start  //////////////

glColor3ub(255,255,255);
glBegin(GL_QUADS);

glVertex2i(205,480);
glVertex2i(205,500);
glVertex2i(225,500);
glVertex2i(225,480);

glVertex2i(235,480);
glVertex2i(235,500);
glVertex2i(260,500);
glVertex2i(260,480);

glVertex2i(270,480);
glVertex2i(270,500);
glVertex2i(295,500);
glVertex2i(295,480);



glVertex2i(315,480);
glVertex2i(315,500);
glVertex2i(335,500);
glVertex2i(335,480);

glVertex2i(345,480);
glVertex2i(345,500);
glVertex2i(370,500);
glVertex2i(370,480);

glVertex2i(380,480);
glVertex2i(380,500);
glVertex2i(405,500);
glVertex2i(405,480);



glVertex2i(425,480);
glVertex2i(425,500);
glVertex2i(450,500);
glVertex2i(450,480);

glVertex2i(460,480);
glVertex2i(460,500);
glVertex2i(485,500);
glVertex2i(485,480);

glVertex2i(490,480);
glVertex2i(490,500);
glVertex2i(515,500);
glVertex2i(515,480);

glVertex2i(535,480);
glVertex2i(535,500);
glVertex2i(555,500);
glVertex2i(555,480);

glVertex2i(560,480);
glVertex2i(560,500);
glVertex2i(585,500);
glVertex2i(585,480);

glVertex2i(590,480);
glVertex2i(590,500);
glVertex2i(620,500);
glVertex2i(620,480);
glEnd();

///////////      window end      ///////
glPopMatrix();
glEnd();

      //////////////////////     rail light      //////////////
     glBegin(GL_QUADS);
     glColor3ub(255,255,255);
     glVertex2i(430,550);
     glVertex2i(460,560);
     glVertex2i(460,540);
     glVertex2i(430,530);

     glVertex2i(530,550);
     glVertex2i(560,560);
     glVertex2i(560,540);
     glVertex2i(530,530);

     glVertex2i(630,550);
     glVertex2i(660,560);
     glVertex2i(660,540);
     glVertex2i(630,530);


     glVertex2i(730,550);
     glVertex2i(760,560);
     glVertex2i(760,540);
     glVertex2i(730,530);


     glVertex2i(830,550);
     glVertex2i(860,560);
     glVertex2i(860,540);
     glVertex2i(830,530);

     glVertex2i(930,550);
     glVertex2i(960,560);
     glVertex2i(960,540);
     glVertex2i(930,530);

     glVertex2i(1030,550);
     glVertex2i(1060,560);
     glVertex2i(1060,540);
     glVertex2i(1030,530);

     glVertex2i(1130,550);
     glVertex2i(1160,560);
     glVertex2i(1160,540);
     glVertex2i(1130,530);
glEnd();


/////////////////  end of light ///////////


////////////// light stand ////////////

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(430,450);
    glVertex2i(440,450);
    glVertex2i(440,550);
    glVertex2i(430,550);

    glVertex2i(530,450);
    glVertex2i(540,450);
    glVertex2i(540,550);
    glVertex2i(530,550);

    glVertex2i(630,450);
    glVertex2i(640,450);
    glVertex2i(640,550);
    glVertex2i(630,550);

    glVertex2i(730,450);
    glVertex2i(740,450);
    glVertex2i(740,550);
    glVertex2i(730,550);

    glVertex2i(830,450);
    glVertex2i(840,450);
    glVertex2i(840,550);
    glVertex2i(830,550);

    glVertex2i(930,450);
    glVertex2i(940,450);
    glVertex2i(940,550);
    glVertex2i(930,550);

    glVertex2i(1030,450);
    glVertex2i(1040,450);
    glVertex2i(1040,550);
    glVertex2i(1030,550);

    glVertex2i(1130,450);
    glVertex2i(1140,450);
    glVertex2i(1140,550);
    glVertex2i(1130,550);
glEnd();



   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2i(420,450);
    glVertex2i(1180,450);
    glVertex2i(1180,460);
    glVertex2i(420,460);
glEnd();



}

void rail_line_night()
{
    glColor3ub(0,0,0);
    glPointSize(10.0);
    glBegin(GL_LINES);
    glVertex2i(0,450);
    glVertex2i(1500,450);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0,480);
    glVertex2i(1500,480);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2i(0,450);
    glVertex2i(1500,450);
    glVertex2i(1500,480);
    glVertex2i(0,480);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2i(40,450);
    glVertex2i(40,480);

    glVertex2i(80,450);
    glVertex2i(80,480);

    glVertex2i(120,450);
    glVertex2i(120,480);

    glVertex2i(160,450);
    glVertex2i(160,480);

    glVertex2i(200,450);
    glVertex2i(200,480);

    glVertex2i(240,450);
    glVertex2i(240,480);

    glVertex2i(280,450);
    glVertex2i(280,480);


    glVertex2i(300,450);
    glVertex2i(300,480);

    glVertex2i(340,450);
    glVertex2i(340,480);

    glVertex2i(380,450);
    glVertex2i(380,480);

    glVertex2i(420,450);
    glVertex2i(420,480);

    glVertex2i(460,450);
    glVertex2i(460,480);

    glVertex2i(500,450);
    glVertex2i(500,480);

    glVertex2i(540,450);
    glVertex2i(540,480);

    glVertex2i(580,450);
    glVertex2i(580,480);

    glVertex2i(620,450);
    glVertex2i(620,480);

    glVertex2i(660,450);
    glVertex2i(660,480);

    glVertex2i(700,450);
    glVertex2i(700,480);

    glVertex2i(740,450);
    glVertex2i(740,480);

    glVertex2i(780,450);
    glVertex2i(780,480);

    glVertex2i(820,450);
    glVertex2i(820,480);

    glVertex2i(860,450);
    glVertex2i(860,480);

    glVertex2i(900,450);
    glVertex2i(900,480);

    glVertex2i(940,450);
    glVertex2i(940,480);

    glVertex2i(980,450);
    glVertex2i(980,480);

    glVertex2i(1020,450);
    glVertex2i(1020,480);

    glVertex2i(1060,450);
    glVertex2i(1060,480);

    glVertex2i(1100,450);
    glVertex2i(1100,480);

    glVertex2i(1140,450);
    glVertex2i(1140,480);

    glVertex2i(1180,450);
    glVertex2i(1180,480);

    glVertex2i(1220,450);
    glVertex2i(1220,480);

    glVertex2i(1260,450);
    glVertex2i(1260,480);

    glVertex2i(1300,450);
    glVertex2i(1300,480);

    glVertex2i(1340,450);
    glVertex2i(1340,480);

    glVertex2i(1380,450);
    glVertex2i(1380,480);

    glVertex2i(1420,450);
    glVertex2i(1420,480);

    glVertex2i(1460,450);
    glVertex2i(1460,480);


    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(540,450);
    glVertex2i(580,450);
    glVertex2i(580,420);
    glVertex2i(540,420);

    glVertex2i(550,420);
    glVertex2i(570,420);
    glVertex2i(570,390);
    glVertex2i(550,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(540,420);
    glVertex2i(500,450);
    glVertex2i(540,450);

    glVertex2i(580,420);
    glVertex2i(620,450);
    glVertex2i(580,450);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(740,450);
    glVertex2i(780,450);
    glVertex2i(780,420);
    glVertex2i(740,420);

    glVertex2i(750,420);
    glVertex2i(770,420);
    glVertex2i(770,390);
    glVertex2i(750,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(740,420);
    glVertex2i(700,450);
    glVertex2i(740,450);

    glVertex2i(780,420);
    glVertex2i(820,450);
    glVertex2i(780,450);
    glEnd();

       glBegin(GL_QUADS);
    glVertex2i(940,450);
    glVertex2i(980,450);
    glVertex2i(980,420);
    glVertex2i(940,420);

    glVertex2i(950,420);
    glVertex2i(970,420);
    glVertex2i(970,390);
    glVertex2i(950,390);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(940,420);
    glVertex2i(900,450);
    glVertex2i(940,450);

    glVertex2i(980,420);
    glVertex2i(1020,450);
    glVertex2i(940,450);
    glEnd();


    //////////////    rail body       ///////////////
glPushMatrix();
glTranslatef(position_rail,0,0);

 glBegin(GL_POLYGON);
  glColor3ub(0,0,0);
  glVertex2i(300,460);
  glVertex2i(310,470);
  glVertex2i(310,520);
  glVertex2i(200,520);
  glVertex2i(200,460);
glEnd();


  glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(200,460);
  glVertex2i(300,460);
  glVertex2i(300,510);
  glVertex2i(200,510);

glEnd();

       glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
     glVertex2i(410,460);
     glVertex2i(420,470);
     glVertex2i(420,520);
     glVertex2i(320,520);
     glVertex2i(310,510);
glEnd();


 glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(310,460);
  glVertex2i(410,460);
  glVertex2i(410,510);
  glVertex2i(310,510);
  glEnd();

       glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2i(520,460);
     glVertex2i(530,470);
     glVertex2i(530,520);
     glVertex2i(430,520);
    glVertex2i(420,510);
glEnd();


 glBegin(GL_QUADS);
  glColor3ub(0,153,153);
  glVertex2i(420,460);
  glVertex2i(520,460);
  glVertex2i(520,510);
  glVertex2i(420,510);
  glEnd();

        glBegin(GL_POLYGON);
       glColor3ub(0,0,0);
       glVertex2i(640,460);
       glVertex2i(650,470);
       glVertex2i(650,520);
       glVertex2i(540,520);
       glVertex2i(530,510);
glEnd();


 glBegin(GL_QUADS);
   glColor3ub(0,153,153);
  glVertex2i(530,460);
  glVertex2i(640,460);
  glVertex2i(640,510);
  glVertex2i(530,510);



glEnd();

glBegin(GL_QUADS);
  glColor3ub(255,255,255);
  glVertex2i(635,512);
  glVertex2i(610,512);
  glVertex2i(610,518);
  glVertex2i(635,518);

  glVertex2i(600,512);
  glVertex2i(580,512);
  glVertex2i(580,518);
  glVertex2i(600,518);

glEnd();

glBegin(GL_QUADS);
  glColor3ub(255,255,255);
  glVertex2i(642,480);
  glVertex2i(642,500);
  glVertex2i(648,500);
  glVertex2i(646,480);

glEnd();





///////////// rail circle   ///////////////
    glColor3ub(0,0,0);
    float pi=2*3.1416l;
     int tri=40;

    glBegin(GL_TRIANGLE_FAN);

                               x=620;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=550;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=500;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

   glBegin(GL_TRIANGLE_FAN);

                               x=440;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



   glBegin(GL_TRIANGLE_FAN);

                               x=390;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();
   glBegin(GL_TRIANGLE_FAN);

                               x=330;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


   glBegin(GL_TRIANGLE_FAN);

                               x=280;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

   glBegin(GL_TRIANGLE_FAN);

                               x=220;y=460;r=10;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();

////////////  end   rail circle //////////


//////////////   window start  //////////////

glColor3ub(255,255,102);
glBegin(GL_QUADS);

glVertex2i(205,480);
glVertex2i(205,500);
glVertex2i(225,500);
glVertex2i(225,480);

glVertex2i(235,480);
glVertex2i(235,500);
glVertex2i(260,500);
glVertex2i(260,480);

glVertex2i(270,480);
glVertex2i(270,500);
glVertex2i(295,500);
glVertex2i(295,480);



glVertex2i(315,480);
glVertex2i(315,500);
glVertex2i(335,500);
glVertex2i(335,480);

glVertex2i(345,480);
glVertex2i(345,500);
glVertex2i(370,500);
glVertex2i(370,480);

glVertex2i(380,480);
glVertex2i(380,500);
glVertex2i(405,500);
glVertex2i(405,480);



glVertex2i(425,480);
glVertex2i(425,500);
glVertex2i(450,500);
glVertex2i(450,480);

glVertex2i(460,480);
glVertex2i(460,500);
glVertex2i(485,500);
glVertex2i(485,480);

glVertex2i(490,480);
glVertex2i(490,500);
glVertex2i(515,500);
glVertex2i(515,480);

glVertex2i(535,480);
glVertex2i(535,500);
glVertex2i(555,500);
glVertex2i(555,480);

glVertex2i(560,480);
glVertex2i(560,500);
glVertex2i(585,500);
glVertex2i(585,480);

glVertex2i(590,480);
glVertex2i(590,500);
glVertex2i(620,500);
glVertex2i(620,480);
glEnd();

///////////      window end      ///////
glPopMatrix();
glEnd();

      //////////////////////     rail light      //////////////
     glBegin(GL_QUADS);
     glColor3ub(255,255,0);
     glVertex2i(430,550);
     glVertex2i(460,560);
     glVertex2i(460,540);
     glVertex2i(430,530);

     glVertex2i(530,550);
     glVertex2i(560,560);
     glVertex2i(560,540);
     glVertex2i(530,530);

     glVertex2i(630,550);
     glVertex2i(660,560);
     glVertex2i(660,540);
     glVertex2i(630,530);


     glVertex2i(730,550);
     glVertex2i(760,560);
     glVertex2i(760,540);
     glVertex2i(730,530);


     glVertex2i(830,550);
     glVertex2i(860,560);
     glVertex2i(860,540);
     glVertex2i(830,530);

     glVertex2i(930,550);
     glVertex2i(960,560);
     glVertex2i(960,540);
     glVertex2i(930,530);

     glVertex2i(1030,550);
     glVertex2i(1060,560);
     glVertex2i(1060,540);
     glVertex2i(1030,530);

     glVertex2i(1130,550);
     glVertex2i(1160,560);
     glVertex2i(1160,540);
     glVertex2i(1130,530);
glEnd();


/////////////////  end of light ///////////


////////////// light stand ////////////

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(430,450);
    glVertex2i(440,450);
    glVertex2i(440,550);
    glVertex2i(430,550);

    glVertex2i(530,450);
    glVertex2i(540,450);
    glVertex2i(540,550);
    glVertex2i(530,550);

    glVertex2i(630,450);
    glVertex2i(640,450);
    glVertex2i(640,550);
    glVertex2i(630,550);

    glVertex2i(730,450);
    glVertex2i(740,450);
    glVertex2i(740,550);
    glVertex2i(730,550);

    glVertex2i(830,450);
    glVertex2i(840,450);
    glVertex2i(840,550);
    glVertex2i(830,550);

    glVertex2i(930,450);
    glVertex2i(940,450);
    glVertex2i(940,550);
    glVertex2i(930,550);

    glVertex2i(1030,450);
    glVertex2i(1040,450);
    glVertex2i(1040,550);
    glVertex2i(1030,550);

    glVertex2i(1130,450);
    glVertex2i(1140,450);
    glVertex2i(1140,550);
    glVertex2i(1130,550);
glEnd();



   glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(420,450);
    glVertex2i(1180,450);
    glVertex2i(1180,460);
    glVertex2i(420,460);
glEnd();



}

void star()
{

 glBegin(GL_TRIANGLES);
glColor3ub(255,255,255);
glVertex2i(10,860);
glVertex2i(20,860);
glVertex2i(15,875);

glVertex2i(10,870);
glVertex2i(20,870);
glVertex2i(15,855);



glVertex2i(110,860);
glVertex2i(120,860);
glVertex2i(115,875);

glVertex2i(110,870);
glVertex2i(120,870);
glVertex2i(115,855);

glVertex2i(410,860);
glVertex2i(420,860);
glVertex2i(415,875);

glVertex2i(410,870);
glVertex2i(420,870);
glVertex2i(415,855);



glVertex2i(710,860);
glVertex2i(720,860);
glVertex2i(715,875);

glVertex2i(710,870);
glVertex2i(720,870);
glVertex2i(715,855);

glVertex2i(1010,860);
glVertex2i(1020,860);
glVertex2i(1015,875);

glVertex2i(1010,870);
glVertex2i(1020,870);
glVertex2i(1015,855);

glVertex2i(1410,760);
glVertex2i(1420,760);
glVertex2i(1415,775);

glVertex2i(1410,770);
glVertex2i(1420,770);
glVertex2i(1415,755);


glVertex2i(310,800);
glVertex2i(320,800);
glVertex2i(315,815);

glVertex2i(310,810);
glVertex2i(320,810);
glVertex2i(315,795);

glVertex2i(510,800);
glVertex2i(520,800);
glVertex2i(515,815);

glVertex2i(510,810);
glVertex2i(520,810);
glVertex2i(515,795);

glVertex2i(610,840);
glVertex2i(620,840);
glVertex2i(615,855);

glVertex2i(610,850);
glVertex2i(620,850);
glVertex2i(615,835);


glVertex2i(910,800);
glVertex2i(920,800);
glVertex2i(915,815);

glVertex2i(910,810);
glVertex2i(920,810);
glVertex2i(915,795);

glVertex2i(1110,840);
glVertex2i(1120,840);
glVertex2i(1115,855);

glVertex2i(1110,850);
glVertex2i(1120,850);
glVertex2i(1115,835);

glVertex2i(1310,800);
glVertex2i(1320,800);
glVertex2i(1315,815);

glVertex2i(1310,810);
glVertex2i(1320,810);
glVertex2i(1315,795);

glEnd();




    glEnd();

}





void boat()
{


       float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 89, 0);
                               x=530;y=210;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(179, 89, 0);
glVertex2i(470,200);
glVertex2i(530,200);
glVertex2i(530,230);
glVertex2i(470,230);
glEnd();

glColor3ub(255,140,26);


    glBegin(GL_TRIANGLE_FAN);

                               x=465;y=210;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(400, 200);
glVertex2i(600, 200);
glVertex2i(540, 170);
glVertex2i(460, 170);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2i(410, 180);
glVertex2i(400, 230);

glVertex2i(400, 180);
glVertex2i(410, 230);

glEnd();


/////////////////  start   boat  2


glPushMatrix();
glTranslated(position_boat_2,0,0);


    glBegin(GL_TRIANGLE_FAN);
glColor3ub(153, 76, 0);
                               x=530;y=105;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(153, 76, 0);
glVertex2i(470,100);
glVertex2i(530,100);
glVertex2i(530,125);
glVertex2i(470,125);
glEnd();

glColor3ub(255,178,102);


    glBegin(GL_TRIANGLE_FAN);

                               x=465;y=105;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(400, 100);
glVertex2i(600, 100);
glVertex2i(540, 70);
glVertex2i(460, 70);
glEnd();

glPopMatrix();



        /////////////////  start   boat  3


glPushMatrix();
glTranslated(position_boat_3,0,0);



    glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 153, 51);
                               x=1330;y=45;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2i(1270,40);
glVertex2i(1330,40);
glVertex2i(1330,65);
glVertex2i(1270,65);
glEnd();

glColor3ub(255,204,153);


    glBegin(GL_TRIANGLE_FAN);

                               x=1265;y=45;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(1200, 40);
glVertex2i(1400, 40);
glVertex2i(1340, 10);
glVertex2i(1260, 10);
glEnd();

glPopMatrix();

glEnd();


/////////////////////////       boat    4


    glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 89, 0);
                               x=930;y=605;r=15;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(179, 89, 0);
glVertex2i(870,600);
glVertex2i(930,600);
glVertex2i(930,620);
glVertex2i(870,620);
glEnd();

glColor3ub(255,140,26);


    glBegin(GL_TRIANGLE_FAN);

                               x=865;y=605;r=15;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(830, 600);
glVertex2i(970, 600);
glVertex2i(930, 580);
glVertex2i(880, 580);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2i(980, 600);
glVertex2i(990, 650);
glVertex2i(990, 600);
glVertex2i(980, 650);

glEnd();

glEnd();
}
void boat_night()
{


       float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 89, 0);
                               x=530;y=210;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(179, 89, 0);
glVertex2i(470,200);
glVertex2i(530,200);
glVertex2i(530,230);
glVertex2i(470,230);
glEnd();

glColor3ub(255,255, 0);


    glBegin(GL_TRIANGLE_FAN);

                               x=465;y=210;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(400, 200);
glVertex2i(600, 200);
glVertex2i(540, 170);
glVertex2i(460, 170);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2i(410, 180);
glVertex2i(400, 230);

glVertex2i(400, 180);
glVertex2i(410, 230);

glEnd();


/////////////////  start   boat  2


glPushMatrix();
glTranslated(position_boat_2,0,0);


    glBegin(GL_TRIANGLE_FAN);
glColor3ub(153, 76, 0);
                               x=530;y=105;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(153, 76, 0);
glVertex2i(470,100);
glVertex2i(530,100);
glVertex2i(530,125);
glVertex2i(470,125);
glEnd();

glColor3ub(255,255, 0);


    glBegin(GL_TRIANGLE_FAN);

                               x=465;y=105;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(400, 100);
glVertex2i(600, 100);
glVertex2i(540, 70);
glVertex2i(460, 70);
glEnd();

glPopMatrix();



        /////////////////  start   boat  3


glPushMatrix();
glTranslated(position_boat_3,0,0);



    glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 89, 0);
                               x=1330;y=45;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(179, 89, 0);
glVertex2i(1270,40);
glVertex2i(1330,40);
glVertex2i(1330,65);
glVertex2i(1270,65);
glEnd();

glColor3ub(255,255, 0);


    glBegin(GL_TRIANGLE_FAN);

                               x=1265;y=45;r=20;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(1200, 40);
glVertex2i(1400, 40);
glVertex2i(1340, 10);
glVertex2i(1260, 10);
glEnd();

glPopMatrix();

glEnd();


/////////////////////////       boat    4


    glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 89, 0);
                               x=930;y=605;r=15;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();


glBegin(GL_QUADS);
glColor3ub(179, 89, 0);
glVertex2i(870,600);
glVertex2i(930,600);
glVertex2i(930,620);
glVertex2i(870,620);
glEnd();

glColor3ub(255,255, 0);


    glBegin(GL_TRIANGLE_FAN);

                               x=865;y=605;r=15;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();




glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2i(830, 600);
glVertex2i(970, 600);
glVertex2i(930, 580);
glVertex2i(880, 580);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2i(980, 600);
glVertex2i(990, 650);
glVertex2i(990, 600);
glVertex2i(980, 650);

glEnd();

glEnd();
}

void moon()
{

  glPushMatrix();
	glTranslatef(position_sun,0.0, 0.0);
    float pi=2*3.1416l;
     int tri=40;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
                               x=400;y=850;r=40;
     glVertex2f(x,y);
     for (i=0;i<=tri;i++)
        {
            glVertex2f(
                       x+(r*cos(i*pi/tri)),
                       y+(r*sin(i*pi/tri))
                       );
     }
     glEnd();



glPopMatrix();

}






    void update_sun(int value) {

for (i=0;i<5;i++)
    {
     position_sun += speed_sun;

     }


glutPostRedisplay();
	glutTimerFunc(100, update_sun, 0);



}

void update_cloud_1(int value)
{
    for (i=0;i<5;i++)
    {
     position_cloud_1 += speed_cloud_1;

     }
if(position_cloud_1>1450){
        position_cloud_1 -=1800;
    }

glutPostRedisplay();
	glutTimerFunc(100, update_cloud_1, 0);


}

void update_cloud_2(int value)
{
    for (i=0;i<5;i++)
    {
     position_cloud_2 -= speed_cloud_2;

     }
if(position_cloud_2>1200){
        position_cloud_2 +=1800;
    }

glutPostRedisplay();
	glutTimerFunc(100, update_cloud_2, 0);


}

void update_cloud_3(int value)
{
    for (i=0;i<5;i++)
    {
     position_cloud_3 -= speed_cloud_3;

     }

glutPostRedisplay();
	glutTimerFunc(100, update_cloud_3, 0);


}

void update_cloud_4(int value)
{
    for (i=0;i<5;i++)
    {
     position_cloud_4 += speed_cloud_4;

     }
if(position_cloud_4>1200){
        position_cloud_4 -=2000;
    }

glutPostRedisplay();
	glutTimerFunc(100, update_cloud_4, 0);


}
void update_rail(int value)
{
if(run){
    for (i=0;i<5;i++)
    {

     position_rail += speed_rail;

     }
  if(position_rail>1500){
        position_rail -=2100;
    }

}
glutPostRedisplay();
	glutTimerFunc(100, update_rail, 0);


}
void update_boat_2(int value)
{
    for (i=0;i<5;i++)
    {
     position_boat_2 += speed_boat_2;

     }


glutPostRedisplay();
	glutTimerFunc(100, update_boat_2, 0);


}
void update_boat_3(int value)
{
    for (i=0;i<5;i++)
    {
     position_boat_3 -= speed_boat_3;

     }


glutPostRedisplay();
	glutTimerFunc(100, update_boat_3, 0);


}
    void update_moon(int value) {

for (i=0;i<5;i++)
    {
     position_moon += speed_moon;

     }


glutPostRedisplay();
	glutTimerFunc(100, update_moon, 0);



}

void Rain(int value){

if(rainday){

    rain1 += 0.01;
glColor3ub(255,255,255);
    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1500; y%=900;
        glBegin(GL_LINES);
        glVertex2i(x,y);
        glVertex2i(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}



void myDisplay(void)
{
//glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);

sky();
back_hill();//hill

river();//river
glPushMatrix();
cloud_2();  //cloud 2
glPopMatrix();

glPushMatrix();
sun(); // sun
glPopMatrix();

glPushMatrix();
cloud_1();   // cloud 1
glPopMatrix();

glPushMatrix();
cloud_3(); // cloud 3
glPopMatrix();

glPushMatrix();
cloud_4(); // cloud 4
glPopMatrix();

left_land(); //left land
right_land();//right land
tree();

rail_line(); // rail line

left_homes();
 boat();

glFlush ();
}



void night()
{
sky_night();
back_hill_night();//hill


river();//river
glPushMatrix();
cloud_2();  //cloud 2
glPopMatrix();

glPushMatrix();
moon(); // moon
glPopMatrix();

glPushMatrix();
cloud_1();   // cloud 1
glPopMatrix();

glPushMatrix();
cloud_3(); // cloud 3
glPopMatrix();

glPushMatrix();
cloud_4(); // cloud 4
glPopMatrix();

left_land_night(); //left land
right_land_night();//right land
tree();

rail_line_night(); // rail line

left_homes_night();
 boat_night();
star();


glFlush ();

}



void key(unsigned char key ,int x, int y ){
switch(key)
{
case's':
    run=false;
    update_rail;

    glutPostRedisplay();
    break;

case 'w':
    run=true;
    update_rail;
    glutPostRedisplay();
    break;

case 'd':
    run=true;
 position_rail += 10;

    glutPostRedisplay();
    break;

case 'a':
     position_rail -= 10;
    glutPostRedisplay();
    break;


case 'n':

    glutDisplayFunc(night);
    glutPostRedisplay();
    break;

case 'm':

    glutDisplayFunc(myDisplay);
    glutPostRedisplay();
    break;

    case 'r':
        rainday = true;
        Rain(rain1);
        break;

    case 't':
        rainday = false;

        break;

    case 'x':
        exit(0);
        break;
}


};






void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1500, 0.0, 900.0);
}





int main(int argc, char** argv)
{
    cout << " press s for stop train "<<endl;
    cout << " press w for start train  "<<endl;
    cout << " press d for  speed up train  "<<endl;
    cout << " press a for backward train  "<<endl;
    cout << " press n for night mood  "<<endl;
    cout << " press b for day mood  "<<endl;
    cout << " press r for raining mood  "<<endl;
    cout << " press t for stop raining mood  "<<endl;
    cout << " press x for exit  "<<endl;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1500, 900);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Project x ");
glutDisplayFunc(myDisplay);
myInit ();
    glutTimerFunc(100, update_sun,0);
     glutTimerFunc(100, update_moon,0);
     glutTimerFunc(100, update_cloud_1,0);
 glutTimerFunc(100, update_cloud_2,0);
 glutTimerFunc(100, update_cloud_3,0);
 glutTimerFunc(100, update_cloud_4,0);
  glutTimerFunc(100, update_rail,0);
  glutTimerFunc(100, update_boat_2,0);
    glutTimerFunc(100, update_boat_3,0);
glutKeyboardFunc(key);
glutMainLoop();
return 0;
}




