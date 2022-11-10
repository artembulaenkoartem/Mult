#include "TXLib.h"

void drawFon()
{
 //  ���
    txSetColor (TX_WHITE);
    txSetFillColor (TX_LIGHTBLUE);
    txRectangle (0, 0, 800, 450);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 450, 800, 600);
}

void drawSun(int x)
{
    // ������
    txSetFillColor (TX_YELLOW);
    txCircle (x, 100, 75);
}

void drawhouse(int x_door, int y_door)
 {
    //���
    txSetFillColor (TX_LIGHTGRAY);
    txRectangle (460,310,730,600);

    //�����
    txSetFillColor (TX_ORANGE);
    POINT star[3] = {{460,310}, {600, 140}, {730,310}};
    txPolygon (star, 3);

    //�����
    txSetFillColor (TX_GRAY);
    txRectangle(500,465,560,600);

    txSetFillColor (TX_ORANGE);
    POINT door[4] = {{500,465}, {x_door,y_door}, {x_door,y_door+600-465}, {500,600}};
    txPolygon (door, 4);

    //����� �����
    txSetFillColor (TX_BLACK);
    txCircle(x_door+550-560,y_door+540-480,5);

     //����
     txSetFillColor (TX_TRANSPARENT);
   txRectangle(650,390,650,460);

  txSetFillColor (TX_WHITE);
   txRectangle(610,430,680,430);

  txSetFillColor (TX_TRANSPARENT);
   txRectangle(610,400,690,460);
 }

 void drawclouv(int x)

 {
    //������
  txSetColor (TX_WHITE);
  txSetFillColor (TX_WHITE);
  txEllipse(x+450-450,50,x+620-450,160);
  txEllipse(x+580-450,70,x+700-450,150);
  txEllipse(x+650-450,40,x+770-450,130);
 }


 void drawtree(int x)

 {
   //������   x=25

 txSetColor (TX_BROWN);
 txSetFillColor (TX_BROWN);
 txRectangle(x+180-225,420,x+225-225,575);


 txSetColor(TX_GREEN);
 txSetFillColor(TX_GREEN);
 txEllipse(x+125-225,380,x+210-225,470);
 txEllipse(x+160-225,330,x+225-225,410);
 txEllipse(x+280-225,385,x+190-225,470);
 txEllipse(x+255-225,330,x+200-225,410);


 }


 void drawman(int x, int y, double rasm)

 {

 //���������
  txSetColor(TX_BLACK);
  txSetFillColor(TX_BLACK);
  txCircle(x,y,15*rasm);
  txLine(  x,y,        x,        y+80*rasm);
  txLine(  x,y+30*rasm,x-15*rasm,y+55*rasm);
  txLine(  x,y+30*rasm,x+25*rasm,y+55*rasm);
  txLine(  x,y+80*rasm,x-20*rasm,y+110*rasm);
  txLine(  x,y+80*rasm,x+20*rasm,y+110*rasm);

 }

 void drawHouse1()
 {
   //�����
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0 ,0, 800, 600);
    //���
    txSetColor(TX_BLACK);
    txSetFillColor(TX_GRAY);
    txRectangle(0, 450, 800, 600);
    //������
    txSetFillColor(TX_BLACK);
    txRectangle(505,445,525,365);
    txRectangle(505,445,560,475);
    txRectangle(506,475,518,506);
    txRectangle(550,475,560,506);
    txRectangle(580,376,695,452);
    txRectangle(580,450,590,505);
    txRectangle(685,452,695,505);
    txSetFillColor (TX_WHITE);
    txCircle(630,410,25);
    //�������
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(TX_BROWN);
    txRectangle(40,395,230,470);
    txRectangle(40,470,45,510);
    txRectangle(225,470,230,510);
    txSetFillColor(TX_RED);
    txRectangle(45,405,170,460);
    txSetFillColor(TX_WHITE);
    txRectangle(180,405,225,460);
    txSetFillColor(TX_BROWN);
    txRectangle(255,375,340,480);
    txSetFillColor(TX_LIGHTGRAY);
    txCircle(285,410,5);
    txCircle(305,410,5);
    //�������
    txSetFillColor(TX_BLACK);
    txRectangle(40,50,210,165);
    txSetFillColor(TX_BROWN);
    txRectangle(45,55,205,160);
    //�������
    txSetColor(TX_TRANSPARENT);
    txSetFillColor (TX_LIGHTGREEN);
    POINT el1[3] = {{360,435}, {420, 360}, {485,435}};
    txPolygon (el1, 3);
    POINT el2[3] = {{375,360}, {420, 305}, {468,360}};
    txPolygon (el2, 3);
    POINT el3[3] = {{385,305}, {420, 255}, {455,305}};
    txPolygon (el3, 3);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(TX_BROWN);
    txRectangle(410,435,430,480);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_TRANSPARENT);
    txArc (0, -100, 800, 100, 180, 180);
    txSetFillColor (TX_RED);
    txCircle (35,50,10);
    txCircle (412,110,10);
    txCircle (570,100,10);
    txCircle (693, 75,10);
    txCircle (222,100,10);
    txSetFillColor (TX_YELLOW);
    txCircle (93,  71,10);
    txCircle (280,105,10);
    txCircle (470,105,10);
    txCircle (625, 90,10);
    txCircle (750, 54,10);
    txSetFillColor (TX_BLUE);
    txCircle (164, 85,10);
    txCircle (354,105,10);
    txCircle (522,102,10);
    txCircle (661, 80,10);

 }

int main()
    {
    txCreateWindow (800, 600);

    int xSun = -100;
    int xCloud = 450;
    int xman = 170;
    int yman = 480;
    double rasmman = 1;
    int xdoor = 560;
    int ydoor = 465;
    int xTree = 225;


    while(xSun < 900)
    {
        drawFon();
        drawSun(xSun);
        drawclouv(xCloud);
        for(int x=100; x<=700; x+=200)
        {
            drawtree(x);
        }
        xCloud = xCloud - 7;
        xSun = xSun + 7;

        txSleep(10);
    }

    xSun = 100;
    xCloud = 450;
    while(xman < 530)

    {
        drawFon();
        drawSun(xSun);
        drawclouv(xCloud);
        drawhouse(xdoor, ydoor);
        drawman(xman,yman, rasmman);
        drawtree(xTree);



        xCloud = xCloud - 7;
        xSun = xSun + 7;
        xman = xman + 7;

        txSleep(10);
    }


    while(xdoor > 500)

    {
        drawFon();
        drawSun(xSun);
        drawclouv(xCloud);
        drawhouse(xdoor, ydoor);
        drawman(xman,yman, rasmman);
        drawtree(xTree);

        xdoor = xdoor - 1;
        ydoor = ydoor + 1;

        txSleep(10);
    }

    while(rasmman > 0.8)

    {
        drawFon();
        drawSun(xSun);
        drawclouv(xCloud);
        drawhouse(xdoor, ydoor);
        drawman(xman,yman, rasmman);
        drawtree(xTree);

        rasmman -=0.01;


        txSleep(10);
    }

    while(xdoor < 560)

    {
        drawFon();
        drawSun(xSun);
        drawclouv(xCloud);
        drawman(xman,yman, rasmman);
        drawhouse(xdoor, ydoor);
        drawtree(xTree);

        xdoor = xdoor + 1;
        ydoor = ydoor - 1;

        txSleep(10);
    }

    drawHouse1();






  txTextCursor (false);

    return 0;
    }




