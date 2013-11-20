GLfloat homepts[44][3]={
-50,  50,  0,
-50, -50,  0,
50, -50,  0,
50,  50,  0,
0,  100,  0,
-50,  50,  100,
-50, -50,  100,
50, -50,  100,
50,  50,  100,
0,  100,  100,
-20, -50, -1,
20, -50, -1,
-20,  30, -1,
20,  30, -1,
50,  20, 30,
50,  20, 70,
50, -20, 30,
50, -20, 70,
0, 110, 0,
0, 110, 100,
-60, 40, 0,
-60, 40, 100,
60, 40, 0,
60, 40, 100,
-60, 50, 0,
-60, 50, 100,
60, 50, 0,
60, 50, 100,
-15, 25, -1.1,
15, 25, -1.1,
-15, 5, -1.1,
15, 5, -1.1,
50, 20, 50,
50, -20, 50,
50, 0, 30,
50, 0, 70,

20, 90, 40,
20, 90, 60,
30, 80, 40,
30, 80, 60,

20, 130, 40,
20, 130, 60,
30, 130, 40,
30, 130, 60 };

void DrawHome(void)
{
oglColour(0,0,1);
oglBegin(1);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglVertex(homepts[2][0],homepts[2][1],homepts[2][2]);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglVertex(homepts[6][0],homepts[6][1],homepts[6][2]);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglEnd();

oglColour(1,0,0);
oglBegin(1);
oglVertex(homepts[5][0],homepts[5][1],homepts[5][2]);
oglVertex(homepts[6][0],homepts[6][1],homepts[6][2]);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglVertex(homepts[8][0],homepts[8][1],homepts[8][2]);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[5][0],homepts[5][1],homepts[5][2]);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglEnd();

oglColour(0,1,0);
oglBegin(1);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglVertex(homepts[19][0],homepts[19][1],homepts[19][2]);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglVertex(homepts[24][0],homepts[24][1],homepts[24][2]);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglEnd();

oglColour(0,1,1);
oglBegin(1);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglVertex(homepts[19][0],homepts[19][1],homepts[19][2]);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglVertex(homepts[26][0],homepts[26][1],homepts[26][2]);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglEnd();

oglColour(1,0,1);
oglBegin(1);
oglVertex(homepts[0][0],homepts[0][1],homepts[0][2]);
oglVertex(homepts[5][0],homepts[5][1],homepts[5][2]);
oglVertex(homepts[21][0],homepts[21][1],homepts[21][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[21][0],homepts[21][1],homepts[21][2]);
oglVertex(homepts[20][0],homepts[20][1],homepts[20][2]);
oglVertex(homepts[0][0],homepts[0][1],homepts[0][2]);
oglEnd();

oglColour(1,1,1);
oglBegin(1);
oglVertex(homepts[3][0],homepts[3][1],homepts[3][2]);
oglVertex(homepts[8][0],homepts[8][1],homepts[8][2]);
oglVertex(homepts[23][0],homepts[23][1],homepts[23][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[23][0],homepts[23][1],homepts[23][2]);
oglVertex(homepts[22][0],homepts[22][1],homepts[22][2]);
oglVertex(homepts[3][0],homepts[3][1],homepts[3][2]);
oglEnd();

oglColour(1,1,0);
oglBegin(1);
oglVertex(homepts[28][0],homepts[28][1],homepts[28][2]);
oglVertex(homepts[29][0],homepts[29][1],homepts[29][2]);
oglVertex(homepts[31][0],homepts[31][1],homepts[31][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[31][0],homepts[31][1],homepts[31][2]);
oglVertex(homepts[30][0],homepts[30][1],homepts[30][2]);
oglVertex(homepts[28][0],homepts[28][1],homepts[28][2]);
oglEnd();

oglColour(0,0.1,.71);
oglBegin(1);
oglVertex(homepts[0][0],homepts[0][1],homepts[0][2]);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglVertex(homepts[2][0],homepts[2][1],homepts[2][2]);
oglVertex(homepts[3][0],homepts[3][1],homepts[3][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglVertex(homepts[2][0],homepts[2][1],homepts[2][2]);
oglEnd();

oglColour(0.6,0.7,1);
oglBegin(1);
oglVertex(homepts[10][0],homepts[10][1],homepts[10][2]);
oglVertex(homepts[12][0],homepts[12][1],homepts[12][2]);
oglVertex(homepts[13][0],homepts[13][1],homepts[13][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[13][0],homepts[13][1],homepts[13][2]);
oglVertex(homepts[11][0],homepts[11][1],homepts[11][2]);
oglVertex(homepts[10][0],homepts[10][1],homepts[10][2]);
oglEnd();

oglColour(0.2,0.9,0);
oglBegin(1);
oglVertex(homepts[14][0],homepts[14][1],homepts[14][2]);
oglVertex(homepts[15][0],homepts[15][1],homepts[15][2]);
oglVertex(homepts[17][0],homepts[17][1],homepts[17][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[17][0],homepts[17][1],homepts[17][2]);
oglVertex(homepts[16][0],homepts[16][1],homepts[16][2]);
oglVertex(homepts[14][0],homepts[14][1],homepts[14][2]);
oglEnd();

oglColour(0.4,0.6,0.8);
oglBegin(1);
oglVertex(homepts[20][0],homepts[20][1],homepts[20][2]);
oglVertex(homepts[21][0],homepts[21][1],homepts[21][2]);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglVertex(homepts[24][0],homepts[24][1],homepts[24][2]);
oglVertex(homepts[20][0],homepts[20][1],homepts[20][2]);
oglEnd();

oglColour(0.1,0.8,1);
oglBegin(1);
oglVertex(homepts[22][0],homepts[22][1],homepts[22][2]);
oglVertex(homepts[23][0],homepts[23][1],homepts[23][2]);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglVertex(homepts[26][0],homepts[26][1],homepts[26][2]);
oglVertex(homepts[22][0],homepts[22][1],homepts[22][2]);
oglEnd();

oglColour(0.5,1,0);
oglBegin(1);
oglVertex(homepts[36][0],homepts[36][1],homepts[36][2]);
oglVertex(homepts[37][0],homepts[37][1],homepts[37][2]);
oglVertex(homepts[39][0],homepts[39][1],homepts[39][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[39][0],homepts[39][1],homepts[39][2]);
oglVertex(homepts[38][0],homepts[38][1],homepts[38][2]);
oglVertex(homepts[36][0],homepts[36][1],homepts[36][2]);
oglEnd();

oglColour(0.6,0.7,0.7);
oglBegin(1);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglVertex(homepts[41][0],homepts[41][1],homepts[41][2]);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglEnd();

oglColour(0.7,0.7,0.7);
oglBegin(1);
oglVertex(homepts[0][0],homepts[0][1],homepts[0][2]);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglVertex(homepts[5][0],homepts[5][1],homepts[5][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[5][0],homepts[5][1],homepts[5][2]);
oglVertex(homepts[6][0],homepts[6][1],homepts[6][2]);
oglVertex(homepts[1][0],homepts[1][1],homepts[1][2]);
oglEnd();

oglColour(0.7,0.7,0.7);
oglBegin(1);
oglVertex(homepts[2][0],homepts[2][1],homepts[2][2]);
oglVertex(homepts[3][0],homepts[3][1],homepts[3][2]);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[7][0],homepts[7][1],homepts[7][2]);
oglVertex(homepts[8][0],homepts[8][1],homepts[8][2]);
oglVertex(homepts[3][0],homepts[3][1],homepts[3][2]);
oglEnd();

oglColour(1,1,1);
oglBegin(1);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglVertex(homepts[24][0],homepts[24][1],homepts[24][2]);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglVertex(homepts[24][0],homepts[24][1],homepts[24][2]);
oglVertex(homepts[20][0],homepts[20][1],homepts[20][2]);
oglEnd();
oglColour(1,1,1);
oglBegin(1);
oglVertex(homepts[18][0],homepts[18][1],homepts[18][2]);
oglVertex(homepts[26][0],homepts[26][1],homepts[26][2]);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[4][0],homepts[4][1],homepts[4][2]);
oglVertex(homepts[26][0],homepts[26][1],homepts[26][2]);
oglVertex(homepts[22][0],homepts[22][1],homepts[22][2]);
oglEnd();

oglColour(1,1,1);
oglBegin(1);
oglVertex(homepts[19][0],homepts[19][1],homepts[19][2]);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglVertex(homepts[25][0],homepts[25][1],homepts[25][2]);
oglVertex(homepts[21][0],homepts[21][1],homepts[21][2]);
oglEnd();

oglColour(1,1,1);
oglBegin(1);
oglVertex(homepts[19][0],homepts[19][1],homepts[19][2]);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[9][0],homepts[9][1],homepts[9][2]);
oglVertex(homepts[27][0],homepts[27][1],homepts[27][2]);
oglVertex(homepts[23][0],homepts[23][1],homepts[23][2]);
oglEnd();


oglColour(1,0.1,0.1);
oglBegin(1);
oglVertex(homepts[36][0],homepts[36][1],homepts[36][2]);
oglVertex(homepts[37][0],homepts[37][1],homepts[37][2]);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglVertex(homepts[41][0],homepts[41][1],homepts[41][2]);
oglVertex(homepts[37][0],homepts[37][1],homepts[37][2]);
oglEnd();

oglBegin(1);
oglVertex(homepts[38][0],homepts[38][1],homepts[38][2]);
oglVertex(homepts[39][0],homepts[39][1],homepts[39][2]);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglVertex(homepts[39][0],homepts[39][1],homepts[39][2]);
oglEnd();

oglBegin(1);
oglVertex(homepts[36][0],homepts[36][1],homepts[36][2]);
oglVertex(homepts[38][0],homepts[38][1],homepts[38][2]);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglVertex(homepts[36][0],homepts[36][1],homepts[36][2]);
oglEnd();

oglBegin(1);
oglVertex(homepts[37][0],homepts[37][1],homepts[37][2]);
oglVertex(homepts[39][0],homepts[39][1],homepts[39][2]);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglVertex(homepts[41][0],homepts[41][1],homepts[41][2]);
oglVertex(homepts[37][0],homepts[37][1],homepts[37][2]);
oglEnd();

oglColour(1,1,0);
oglBegin(1);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglVertex(homepts[41][0],homepts[41][1],homepts[41][2]);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglEnd();
oglBegin(1);
oglVertex(homepts[42][0],homepts[42][1],homepts[42][2]);
oglVertex(homepts[43][0],homepts[43][1],homepts[43][2]);
oglVertex(homepts[40][0],homepts[40][1],homepts[40][2]);
oglEnd();
}
