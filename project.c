//2023-10-15  최종 코드x, 개발 툴, 윈도우환경 변경으로 인해 문자밀림 현상 발생 => 해결x
// => 게임중에도 각종 오류발생
// 구조체안에 초기값 선언 오류 발생 => 해결

// 윈도우 11 기준 세팅 방법
//1.터미널 창 열:80, 행:36
//2. utf8 => EUC-KR 변경 후  ctrl + z => 컴파일

#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <process.h>
#include<math.h>
#define HERO_MISSILE  10
#define MAX_ENEMY 15

typedef struct _PLAYER
{
	int nHP ;//체력 
	int GG ;
	int x1, x2;
	int nX, nY; 

					clock_t MoveTime;     // 이동 시간 간격
clock_t OldTime;
clock_t OldTime1;
clock_t OldTime2;
clock_t OldTime3;
clock_t OldTime4;
clock_t OldTime5;
clock_t OldTime6;
clock_t OldTime7;
clock_t OldTime8;
clock_t OldTime9;
clock_t OldTime10;
clock_t OldTime11;
clock_t OldTime12;
clock_t OldTime13;
clock_t OldTime14;
clock_t OldTime15;
clock_t OldTime16;
clock_t OldTime17;
clock_t OldTime18;
clock_t OldTime19;
clock_t OldTime20;
clock_t OldTime21;
clock_t OldTime22;
clock_t OldTime23;
clock_t OldTime24;
clock_t OldTime25;
clock_t OldTime26;
clock_t OldTime27;
clock_t OldTime28;
clock_t OldTime29;
clock_t OldTime30;
clock_t OldTime31;
clock_t OldTime32;
clock_t OldTime33;
clock_t OldTime34;
clock_t OldTime35;
clock_t OldTime36;
clock_t OldTime37;
clock_t OldTime38;
clock_t OldTime39;
clock_t OldTime40;
clock_t OldTime41;
clock_t OldTime42;
clock_t OldTime43;
clock_t OldTime44;
clock_t OldTime45;
clock_t OldTime46;
clock_t OldTime47;
clock_t OldTime48;
clock_t OldTime49;
clock_t OldTime50;
clock_t OldTime51;
clock_t OldTime52;
clock_t OldTime53;
clock_t OldTime54;
clock_t OldTime55;
clock_t OldTime56;
clock_t OldTime57;
clock_t OldTime58;
clock_t OldTime59;
clock_t OldTime60;
clock_t OldTime61;
clock_t OldTime62;
clock_t OldTime63;
clock_t OldTime64;
clock_t OldTime65;
clock_t OldTime66;
clock_t OldTime67;
clock_t OldTime68;
clock_t OldTime69;
clock_t OldTime70;
clock_t OldTime71;
clock_t OldTime72;
clock_t OldTime73;
clock_t OldTime74;
clock_t OldTime75;
clock_t OldTime76;
clock_t OldTime77;
clock_t OldTime78;
clock_t OldTime79;
clock_t OldTime80;
clock_t OldTime81;
clock_t OldTime82;
clock_t OldTime83;
clock_t OldTime84;
clock_t OldTime85;
clock_t OldTime86;
clock_t OldTime87;
clock_t OldTime88;
clock_t OldTime89;
clock_t OldTime90;
clock_t OldTime91;
clock_t OldTime92;
clock_t OldTime93;
clock_t OldTime94;
clock_t OldTime95;
clock_t OldTime96;
clock_t OldTime97;
clock_t OldTime98;
clock_t OldTime99;
clock_t OldTime100;
clock_t OldTime101;
clock_t OldTime102;
clock_t OldTime103;
clock_t OldTime104;
clock_t OldTime105;
clock_t OldTime106;
clock_t OldTime107;
clock_t OldTime108;
clock_t OldTime109;
clock_t OldTime110;
clock_t OldTime111;
clock_t OldTime112;
clock_t OldTime113;
clock_t OldTime114;
clock_t OldTime115;
clock_t OldTime116;
clock_t OldTime117;
clock_t OldTime118;
clock_t OldTime119;
clock_t OldTime120;
clock_t OldTime121;
clock_t OldTime122;
clock_t OldTime123;
clock_t OldTime124;
clock_t OldTime125;
clock_t OldTime126;
clock_t OldTime127;
clock_t OldTime128;
clock_t OldTime129;





clock_t Boom;
clock_t Boom1;
clock_t Boom2;
clock_t Boom3;
clock_t Boom4;
clock_t Boom5;
clock_t Boom6;
clock_t Boom7;
clock_t Boom8;
clock_t Boom9;
clock_t Boom10;
clock_t Boom11;
clock_t Boom12;
clock_t Boom13;
clock_t Boom14;
clock_t Boom15;
clock_t Boom16;
clock_t Boom17;
clock_t Boom18;
clock_t Boom19;
clock_t Boom20;
clock_t Boom21;
clock_t Boom22;
clock_t Boom23;
clock_t Boom24;
clock_t Boom25;
clock_t Boom26;
clock_t Boom27;
clock_t Boom28;
clock_t Boom29;
clock_t Boom30;
clock_t Boom31;
clock_t Boom32;
clock_t Boom33;
clock_t Boom34;
clock_t Boom35;
clock_t Boom36;
clock_t Boom37;
clock_t Boom38;
clock_t Boom39;
clock_t Boom40;
clock_t Boom41;
clock_t Boom42;
clock_t Boom43;
clock_t Boom44;
clock_t Boom45;
clock_t Boom46;
clock_t Boom47;
clock_t Boom48;
clock_t Boom49;
clock_t Boom50;
clock_t Boom51;
clock_t Boom52;
clock_t Boom53;
clock_t Boom54;
clock_t Boom55;
clock_t Boom56;
clock_t Boom57;
clock_t Boom58;
clock_t Boom59;
clock_t Boom60;
clock_t Boom61;
clock_t Boom62;

clock_t Crash;

				clock_t FireTime;      // 미사일 발사 시간 간격
				clock_t OldFireTime;   // 이전 미사일 발사 시각
				
} PLAYER;
typedef struct _ENEMY
{
	int  nLife;
	int  nX, nY;
	int HP;
	int x1, x2;
	clock_t AppearTime;
	clock_t MoveTime1;
	clock_t MoveTime2;
	clock_t MoveTime3;
	clock_t MoveTime4;
	clock_t MoveTime5;
	clock_t MoveTime6;
	clock_t MoveTime7;
	clock_t MoveTime8;
	clock_t MoveTime9;

	clock_t Boom;
	clock_t MissileOldTime;
} ENEMY;

typedef struct _BOSS
{
	int  nLife;
	int  nX, nY;
	int HP;
	int x1, x2;
	clock_t AppearTime;
	clock_t MoveTime1;
	clock_t MoveTime2;
	clock_t MoveTime3;
	clock_t MoveTime4;
	clock_t MoveTime5;
	clock_t MoveTime6;
	clock_t MoveTime7;
	clock_t MoveTime8;
	clock_t MoveTime9;

	clock_t Boom;
	clock_t MissileOldTime;
}BOSS;

typedef struct _ENEMY_MISSILE
{
	int  nLife[15];
	int  nX[15], nY[15];
	int x1, y1;
	int x2, y2;
	clock_t AppearTime[15];

	clock_t FireTime;
	clock_t MoveTime1;
	clock_t MoveTime2;
	clock_t MoveTime3;
	clock_t MoveTime4;
	clock_t MoveTime5;
	clock_t MoveTime6;

	
} ENEMY_MISSILE;


clock_t first;
clock_t last;
double extra;
//const char *arEnemy[] = { "▩○┃┃○▩","◁□▷",,"◁▣▷","◀⊙▶","wwWww"};

char arr[] = { "▩○┃┃○▩" };

BOSS g_BOSS[1]={0,0,50,200};

ENEMY g_Enemy[MAX_ENEMY] ={0,0,0,8};
ENEMY g_Enemy1[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy2[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy3[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy4[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy5[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy6[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy7[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy8[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy9[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy10[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy11[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy12[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy13[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy14[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy15[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy16[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy17[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy18[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy19[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy20[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy21[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy22[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy23[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy24[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy25[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy26[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy27[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy28[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy29[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy30[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy31[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy32[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy33[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy34[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy35[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy36[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy37[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy38[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy39[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy40[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy41[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy42[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy43[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy44[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy45[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy46[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy47[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy48[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy49[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy50[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy51[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy52[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy53[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy54[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy55[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy56[MAX_ENEMY]={0,0,0,8};
ENEMY g_Enemy57[MAX_ENEMY]={0,0,0,8};



ENEMY_MISSILE   g_EnemyMissile;  
ENEMY_MISSILE   g_EnemyMissile1;   // 미사일 버퍼
ENEMY_MISSILE   g_EnemyMissile2;
ENEMY_MISSILE   g_EnemyMissile3;
ENEMY_MISSILE   g_EnemyMissile4;
ENEMY_MISSILE   g_EnemyMissile5;
ENEMY_MISSILE   g_EnemyMissile6;
ENEMY_MISSILE   g_EnemyMissile7;
ENEMY_MISSILE   g_EnemyMissile8;
ENEMY_MISSILE   g_EnemyMissile9;
ENEMY_MISSILE   g_EnemyMissile10;
ENEMY_MISSILE   g_EnemyMissile11;
ENEMY_MISSILE   g_EnemyMissile12;
ENEMY_MISSILE   g_EnemyMissile13;
ENEMY_MISSILE   g_EnemyMissile14;
ENEMY_MISSILE   g_EnemyMissile15;
ENEMY_MISSILE   g_EnemyMissile16;
ENEMY_MISSILE   g_EnemyMissile17;
ENEMY_MISSILE   g_EnemyMissile18;
ENEMY_MISSILE   g_EnemyMissile19;
ENEMY_MISSILE   g_EnemyMissile20;
ENEMY_MISSILE   g_EnemyMissile21;
ENEMY_MISSILE   g_EnemyMissile22;
ENEMY_MISSILE   g_EnemyMissile23;
ENEMY_MISSILE   g_EnemyMissile24;
ENEMY_MISSILE   g_EnemyMissile25;
ENEMY_MISSILE   g_EnemyMissile26;
ENEMY_MISSILE   g_EnemyMissile27;
ENEMY_MISSILE   g_EnemyMissile28;
ENEMY_MISSILE   g_EnemyMissile29;
ENEMY_MISSILE   g_EnemyMissile30;
ENEMY_MISSILE   g_EnemyMissile31;
ENEMY_MISSILE   g_EnemyMissile32;
ENEMY_MISSILE   g_EnemyMissile33;
ENEMY_MISSILE   g_EnemyMissile34;
ENEMY_MISSILE   g_EnemyMissile35;
ENEMY_MISSILE   g_EnemyMissile36;
ENEMY_MISSILE   g_EnemyMissile37;
ENEMY_MISSILE   g_EnemyMissile38_1;
ENEMY_MISSILE   g_EnemyMissile38_2;
ENEMY_MISSILE   g_EnemyMissile39_1;
ENEMY_MISSILE   g_EnemyMissile39_2;
ENEMY_MISSILE   g_EnemyMissile40;
ENEMY_MISSILE   g_EnemyMissile41;
ENEMY_MISSILE   g_EnemyMissile42;
ENEMY_MISSILE   g_EnemyMissile43;
ENEMY_MISSILE   g_EnemyMissile44;
ENEMY_MISSILE   g_EnemyMissile45;
ENEMY_MISSILE   g_EnemyMissile46;
ENEMY_MISSILE   g_EnemyMissile47;
ENEMY_MISSILE   g_EnemyMissile48;
ENEMY_MISSILE   g_EnemyMissile49;
ENEMY_MISSILE   g_EnemyMissile50;
ENEMY_MISSILE   g_EnemyMissile51_1;
ENEMY_MISSILE   g_EnemyMissile51_2;
ENEMY_MISSILE   g_EnemyMissile52_1;
ENEMY_MISSILE   g_EnemyMissile52_2;
ENEMY_MISSILE   g_EnemyMissile53_1;
ENEMY_MISSILE   g_EnemyMissile53_2;
ENEMY_MISSILE   g_EnemyMissile53_3;
ENEMY_MISSILE   g_EnemyMissile53_4;
ENEMY_MISSILE   g_EnemyMissile53_5;



typedef struct _PLAYER_MISSILE
{
	int nLife;// 미사일 생명
	int nX, nY;//위치
	//clock_t OldTime;// clock_t==long
	clock_t MoveTime;


}PLYER_MISSILE;


PLAYER g_sPlayer = {3, 2};
PLYER_MISSILE g_sPlayerMissile[HERO_MISSILE];

void gotoxy(int x, int y)
{
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}
void removeCursor(void)
{
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}
void UserMove()
{
	if (clock() - g_sPlayer.MoveTime > 40)
	{

		g_sPlayer.MoveTime = clock();
		if (g_sPlayer.nHP > 0)
		{
			if (GetAsyncKeyState(VK_LEFT) & 0x8000) //left //GetAsyncKeyState
			{

				if ((g_sPlayer.nX) > 2)
				{
					gotoxy(g_sPlayer.nX + 5, g_sPlayer.nY);
					printf(" ");
					g_sPlayer.nX--;
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("┞─┃┃─┦");
					removeCursor();
				}
			}


			if (GetAsyncKeyState(VK_UP) & 0x8000) //up
			{

				if ((g_sPlayer.nY > 1))
				{
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("      ");
					g_sPlayer.nY--;
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("┞─┃┃─┦");
					removeCursor();
				}

			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000) //down
			{

				if ((g_sPlayer.nY < 34))
				{
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("      ");
					g_sPlayer.nY++;
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("┞─┃┃─┦");
					removeCursor();
				}

			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) //right
			{

				if ((g_sPlayer.nX + 6) < 79)
				{
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf(" ");
					g_sPlayer.nX++;
					gotoxy(g_sPlayer.nX, g_sPlayer.nY);
					printf("┞─┃┃─┦");
					removeCursor();
				}

			}
		}
	}
}
void UserMissile()
{
	if (clock() - g_sPlayerMissile[0].MoveTime > 40)
	{
		g_sPlayerMissile[0].MoveTime = clock();
		if (GetAsyncKeyState(VK_CONTROL) & 0x8000)//공격
		{

			for (int i = 0; i < HERO_MISSILE; i++)
			{
				if (g_sPlayerMissile[i].nLife == 0)
				{
					g_sPlayerMissile[i].nLife = 1;
					g_sPlayerMissile[i].nX = g_sPlayer.nX + 3;
					g_sPlayerMissile[i].nY = g_sPlayer.nY - 1;

					break;
				}
			}


		}

		for (int i = 0; i < HERO_MISSILE; i++)
		{
			if (g_sPlayerMissile[i].nLife == 1)
			{

				if (g_sPlayerMissile[i].nY - 1 > 0)
				{
					gotoxy(g_sPlayerMissile[i].nX, g_sPlayerMissile[i].nY);
					printf("  ");
					g_sPlayerMissile[i].nY--;
					gotoxy(g_sPlayerMissile[i].nX, g_sPlayerMissile[i].nY);
					printf("^");
				}
				else
				{
					g_sPlayerMissile[i].nLife = 0;

					gotoxy(g_sPlayerMissile[i].nX, g_sPlayerMissile[i].nY);
					printf("  ");
					g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				}
			}

		}
	}
}


// 오른쪽으로 향하는 5개 순서형 
void Enemy1()//처음 왼쪽 등장 적 비행기
{
	if (clock() - extra>3000)
	if (clock() - g_Enemy->AppearTime > 3000)
	{
		g_Enemy->AppearTime = clock();// ???
		for (int i = 0; i < 5; i++)
		{

			if (g_Enemy[i].nLife == 0)
			{
				//g_Enemy[i].MoveTime1 = clock();
				g_Enemy[i].nLife = 1;
				g_Enemy[i].nX = 0;
				g_Enemy[i].nY = 0;

				break;
			}
		}
	}

	
	for (int i = 0; i < 5; i++)
	{
		if (g_Enemy[i].nLife == 1)
		{

			if ((g_Enemy[i].nY  < 15) && (clock()-g_Enemy[i].MoveTime1>400))
			{
				g_Enemy[i].MoveTime1 = clock();
				gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
				printf("          ");
				g_Enemy[i].nY++;
				gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
				printf("▩○┃┃○▩");



			}
			if ((g_Enemy[i].nY < 15) && (clock() - g_Enemy[i].MoveTime2 > 100))
			{
				g_Enemy[i].MoveTime2 = clock();

				gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
				printf("             ");
				g_Enemy[i].nX++;
				gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
				printf("▩○┃┃○▩");
			
			}
			else if ((g_Enemy[i].nY  >= 15)&&(g_Enemy[i].nY<34))
			{
				if ((clock() - g_Enemy[i].MoveTime1>40))
				{
					g_Enemy[i].MoveTime1 = clock();
					gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
					printf("          ");
					g_Enemy[i].nY++;
					gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
					printf("▩○┃┃○▩");


				}
				if (g_Enemy[i].nY == 34)
				{
					g_Enemy[i].nLife = 2;
					gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
					printf("          ");
					g_Enemy[i].nY = -100;
				}
			}
			
		}

	}
}
void Enemy_Missile1()
{
	//x%3==0일때

	
	for (int j = 0; j < 5; j++)
	{
		if (  clock()-g_EnemyMissile.FireTime>100&&g_Enemy[j].nLife == 1)
		{
			
				if (g_EnemyMissile.nLife[j] == 0)
				{
				
					g_EnemyMissile.FireTime = clock();
					g_EnemyMissile.nLife[j] = 1;
					g_EnemyMissile.nX[j] = g_Enemy[j].nX + 5;
					g_EnemyMissile.nY[j] = g_Enemy[j].nY + 1;
					break;
				}
			

		}
	}

	
	for(int j=0; j<5; j++)
			if ((clock() - g_EnemyMissile.AppearTime[j] >=40))
			{
				g_EnemyMissile.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile.nLife[j] == 1)
				{

					if (g_EnemyMissile.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile.nX[j], g_EnemyMissile.nY[j]);
						printf("  ");
						g_EnemyMissile.nY[j]++;
						gotoxy(g_EnemyMissile.nX[j], g_EnemyMissile.nY[j]);
						printf("∨"); 
					}
					else
					{
						if (g_Enemy[j].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy[j].nX = 0;
							g_Enemy[j].nY = 0;

						}
						g_EnemyMissile.nLife[j] = 0;
						gotoxy(g_EnemyMissile.nX[j], g_EnemyMissile.nY[j]);
						printf("  ");
						g_EnemyMissile.nX[j] = 0; g_EnemyMissile.nY[j] = 0;
					}
				}
			}
		}
void UserCrash1()
{
	
	for (int j = 0; j < 5; j++)
	{
		
		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom1 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime1 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime1 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime1 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime1 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime1 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

			if((clock()-g_sPlayer.Boom1>1600) && (clock()-g_sPlayer.OldTime1>2000))
			if (g_sPlayer.nY == g_EnemyMissile.nY[j] && (g_EnemyMissile.nX[j]-g_sPlayer.nX)<=5  && (g_EnemyMissile.nX[j] - g_sPlayer.nX)>=-1)
			{

				
				g_sPlayer.x1 = g_EnemyMissile.nX[j];
				g_sPlayer.x2 = g_sPlayer.nX;
				g_sPlayer.Boom1 = clock();
				g_sPlayer.nHP--;
				g_EnemyMissile.nX[j] = 0;
				g_EnemyMissile.nY[j] = 0;
				g_EnemyMissile.nLife[j] = 0;
				if (g_sPlayer.nHP == 0)
				{
//수정
					

					g_sPlayer.OldTime1 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;
					

				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;
				
			}

		
	}

}	
 void EnemyCrash1()
{
	 for (int j = 0; j<5; j++)
	for (int i = 0; i < 10; i++)
	{
		if (g_Enemy[j].HP != 0)// 수정1 복사
		{
			if (clock()>300)
				if (clock() - g_Enemy[j].Boom < 300)
				{
					gotoxy(g_Enemy[j].x1 - g_Enemy[j].x2 + g_Enemy[j].nX, g_Enemy[j].nY);
					printf("※");

				}
		}
		if (g_sPlayerMissile[i].nY == g_Enemy[j].nY && (g_sPlayerMissile[i].nX - g_Enemy[j].nX) < 10 && (g_sPlayerMissile[i].nX - g_Enemy[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
		{

			g_Enemy[j].x1 = g_sPlayerMissile[i].nX;
			g_Enemy[j].x2 = g_Enemy[j].nX;
			g_Enemy[j].Boom = clock();
			g_Enemy[j].HP--;         
			g_sPlayerMissile[i].nLife = 0;
			g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
			if (g_Enemy[j].HP == 0)
			{
				gotoxy(g_Enemy[j].nX, g_Enemy[j].nY);
				printf("          ");//스페이스바 10번..
									 //g_Enemy[i].nX = 0; g_Enemy[i].nY = 0;
				g_Enemy[j].nLife = 2;
				g_Enemy[j].nX = -1; g_Enemy[j].nY = -1;
			}

		}
	}


	
}

 //6고정, -(적비행기문자열크기-1)
 void User_Enemy1()
 {
	

		 if (clock() > 1000)
			 if (clock() - g_sPlayer.OldTime2 < 1000)
			 {
				 gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				 printf("    ☆");



			 }
		 if (clock() > 800)
			 if (clock() - g_sPlayer.OldTime2 < 800)
			 {
				 gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				 printf("   ★ ");



			 }
		 if (clock() > 600)
			 if (clock() - g_sPlayer.OldTime2 < 600)
			 {
				 gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				 printf("  ☆  ");



			 }
		 if (clock() > 400)
			 if (clock() - g_sPlayer.OldTime2 < 400)
			 {
				 gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				 printf(" ★   ");



			 }
		 if (clock() > 200)
			 if (clock() - g_sPlayer.OldTime2 < 200)
			 {
				 gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				 printf("☆    ");



			 }
	 

	if(clock()-g_sPlayer.Crash>2000)
	 for (int j = 0; j < 5; j++)
	 {

		 
		 if (g_sPlayer.nY == g_Enemy[j].nY && (g_Enemy[j].nX - g_sPlayer.nX) < 6 && (g_Enemy[j].nX - g_sPlayer.nX) > -9)
		 {
			 

			// g_sPlayer.x1 = g_EnemyMissile.nX[j];
			// g_sPlayer.x2 = g_sPlayer.nX;
			 g_sPlayer.Crash = clock();
			 g_sPlayer.OldTime2 = clock();
			 g_sPlayer.nHP--;

			 if (g_sPlayer.nHP == 0)
			 {
				 //수정


				 g_sPlayer.OldTime2 = clock();

				 g_sPlayer.nHP = 3;
				 g_sPlayer.GG--;


			 }



			 if (g_sPlayer.GG == 0)
			 {
				 system("cls");
				 gotoxy(40, 17);
				 printf("Game Over\n");
				 exit(0);
			 }
			 break;

		 }


	 }

 }
 //왼쪽으로 향하는 5개 순서형
void Enemy_Missile2()
{
	//x%3==0일때

	
	for (int j = 0; j < 5; j++)
	{
		if ( g_Enemy1[j].nLife == 1&& clock()-g_EnemyMissile1.FireTime>100)
		{
			
		

			

				if (g_EnemyMissile1.nLife[j] == 0)//이쪽부터 수정 필요 i가돌긴하지만 i중에 안돌아가는것이  있어서 0이나오는것이있음 왜?? 미사일개수랑 i랑 같지도 않았고, 
				{
					g_EnemyMissile1.FireTime = clock();
					g_EnemyMissile1.nLife[j] = 1;
					g_EnemyMissile1.nX[j] = g_Enemy1[j].nX + 5;
					g_EnemyMissile1.nY[j] = g_Enemy1[j].nY + 1;
					
					break;
				}
		}

	}



	for (int j = 0; j<5; j++)
	
			if ((clock() - g_EnemyMissile1.AppearTime[j] >=40))
			{
				g_EnemyMissile1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile1.nLife[j] == 1 )
				{

					if (g_EnemyMissile1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile1.nX[j], g_EnemyMissile1.nY[j]);//여기수정ㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ 미사일위치바꿔주기
						printf("  ");
						g_EnemyMissile1.nY[j]++;
						gotoxy(g_EnemyMissile1.nX[j], g_EnemyMissile1.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy1[j].nLife == 2)//비행기 터질시 미사일 중단하기
						{
	
							g_Enemy1[j].nX = 0;
							g_Enemy1[j].nY = 0;

						}
							/*for (int i = 0; i < 15; i++)
							{
								g_EnemyMissile1.nLife[j] == 2;
							}*/
						g_EnemyMissile1.nLife[j] = 0;
						gotoxy(g_EnemyMissile1.nX[j], g_EnemyMissile1.nY[j]);
						printf("  ");
						g_EnemyMissile1.nX[j] = 0; g_EnemyMissile1.nY[j] = 0;

					}
				}
			}
		}
void Enemy2()//오른쪽 비행기 첫등장
{
	if(clock()-extra>4000)
	if (clock() - g_Enemy1->AppearTime > 3000)
	{
		g_Enemy1->AppearTime = clock();// ???
		for (int i = 0; i < 5; i++)
		{

			if (g_Enemy1[i].nLife == 0)
			{
				//g_Enemy1[i].MoveTime1 = clock();
				g_Enemy1[i].nLife = 1;
				g_Enemy1[i].nX = 70;
				g_Enemy1[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 5; i++)
	{
		if (g_Enemy1[i].nLife == 1)
		{

			if ((g_Enemy1[i].nY  < 15) && (clock() - g_Enemy1[i].MoveTime1>400))
			{
				g_Enemy1[i].MoveTime1 = clock();
				gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
				printf("          ");//스페이스바 10번..
				g_Enemy1[i].nY++;
				gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
				printf("▩○┃┃○▩");


			}
			if ((g_Enemy1[i].nY  < 15) && (clock() - g_Enemy1[i].MoveTime2 > 100))
			{
				g_Enemy1[i].MoveTime2 = clock();

				gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
				printf("             ");
				g_Enemy1[i].nX--;
				gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
				printf("▩○┃┃○▩");

			}

			else if ((g_Enemy1[i].nY >= 15) && (g_Enemy1[i].nY<34))
			{
				if ((clock() - g_Enemy1[i].MoveTime1>40))
				{
					g_Enemy1[i].MoveTime1 = clock();
					gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
					printf("          ");
					g_Enemy1[i].nY++;
					gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
					printf("▩○┃┃○▩");


				}
				if (g_Enemy1[i].nY == 34)
				{
					g_Enemy1[i].nLife = 2;
					gotoxy(g_Enemy1[i].nX, g_Enemy1[i].nY);
					printf("          ");
					g_Enemy1[i].nX = 0; g_Enemy1[i].nY = 0;
					g_Enemy1[i].nY = -100;

				}
			}

		}

	}
}
void UserCrash2()
{
	if (g_sPlayer.nHP != 0)// 수정1 복사
	{
		if (clock()>1500)
			if (clock() - g_sPlayer.Boom2 < 1500)
			{
				gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
				printf("※");

			}
	}
	for (int j = 0; j < 5; j++)
	{

		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime3 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime3 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime3 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime3 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime3 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}
		if ((clock() - g_sPlayer.Boom2>1600) && (clock() - g_sPlayer.OldTime3>2000))
		if (g_sPlayer.nY == g_EnemyMissile1.nY[j] && (g_EnemyMissile1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile1.nX[j] - g_sPlayer.nX) >= -1)
		{

			g_sPlayer.x1 = g_EnemyMissile1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom2 = clock(); //수정
			g_sPlayer.nHP--;
			g_EnemyMissile1.nX[j] = 0;
			g_EnemyMissile1.nY[j] = 0;
			g_EnemyMissile1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				//수정


				g_sPlayer.OldTime3 = clock();

				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;


			}




			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}




	}
}
void EnemyCrash2()
{
	
	for(int j=0; j<5; j++)
		for (int i = 0; i < 10; i++)
		{
			
			if (g_Enemy1[j].HP != 0)// 수정1 복사
			{
				if(clock()>300)
				if (clock() - g_Enemy1[j].Boom < 300)
				{
					gotoxy(g_Enemy1[j].x1 - g_Enemy1[j].x2 + g_Enemy1[j].nX, g_Enemy1[j].nY);
					printf("※");

				}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy1[j].nY && (g_sPlayerMissile[i].nX - g_Enemy1[j].nX) < 10 && (g_sPlayerMissile[i].nX - g_Enemy1[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy1[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy1[j].x2 = g_Enemy1[j].nX;
				g_Enemy1[j].Boom = clock();
				g_Enemy1[j].HP--;
				g_sPlayerMissile[i].nLife = 0;

				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy1[j].HP == 0)
				{
					gotoxy(g_Enemy1[j].nX, g_Enemy1[j].nY);  
					printf("          ");//스페이스바 10번..             수정수정2
					//g_Enemy1[i].nX = 0; g_Enemy1[i].nY = 0;
					g_Enemy1[j].nLife = 2;
					g_Enemy1[j].nX = -1; g_Enemy1[j].nY = -1;


				}
			}
		}
	


}
void User_Enemy2()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime4 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime4 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime4 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime4 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime4 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 5; j++)
		{
			if (g_sPlayer.nY == g_Enemy1[j].nY && (g_Enemy1[j].nX - g_sPlayer.nX) < 6 && (g_Enemy1[j].nX - g_sPlayer.nX) > -9)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime4 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime4 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//왼쪽에서 내려오는 3개의 혼합형
void Enemy3()
{
	if(clock() - extra>19500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy3[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy3[i].nLife = 1;
				g_Enemy3[i].nX = 3;
				g_Enemy3[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy3[i].nLife == 1)
		{

			if ((g_Enemy3[i].nY  < 10) && (clock() - g_Enemy3[i].MoveTime1>100))
			{
				g_Enemy3[i].MoveTime1 = clock();
				gotoxy(g_Enemy3[i].nX, g_Enemy3[i].nY);
				printf("      ");
				g_Enemy3[i].nY++;
				gotoxy(g_Enemy3[i].nX, g_Enemy3[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy3[i].nY >= 10) && (g_Enemy3[i].nY<34))
			{
				if ((clock() - g_Enemy3[i].MoveTime1>500))
				{
					g_Enemy3[i].MoveTime1 = clock();
					gotoxy(g_Enemy3[i].nX, g_Enemy3[i].nY);
					printf("      ");
					g_Enemy3[i].nY++;
					gotoxy(g_Enemy3[i].nX, g_Enemy3[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy3[i].nY == 34)
				{
					g_Enemy3[i].nLife = 2;
					gotoxy(g_Enemy3[i].nX, g_Enemy3[i].nY);
					printf("      ");
					g_Enemy3[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile3()
{
	//x%3==0일때

	for (int i=0; i<1; i++)
	for (int j = 0; j < 10; j++)
	{
		if(clock()-g_EnemyMissile3.FireTime>2000 && g_Enemy3[i].nLife==1)
		{
			
			if (g_EnemyMissile3.nLife[j] == 0)
			{
				g_EnemyMissile3.FireTime = clock();
				g_EnemyMissile3.nLife[j] = 1;
				g_EnemyMissile3.nX[j] = g_Enemy3[i].nX + 2;
				g_EnemyMissile3.nY[j] = g_Enemy3[i].nY + 1;
				break;
			}


		}
	}

	for (int i=0; i<1; i++)
	for (int j = 0; j<10; j++)
		if ((clock() - g_EnemyMissile3.AppearTime[j] >= 40))
		{
			g_EnemyMissile3.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile3->AppearTime 때문에 오류가났다.
			if (g_EnemyMissile3.nLife[j] == 1)
			{

				if (g_EnemyMissile3.nY[j] < 34)
				{
					gotoxy(g_EnemyMissile3.nX[j], g_EnemyMissile3.nY[j]);
					printf("  ");
					g_EnemyMissile3.nY[j]++;
					gotoxy(g_EnemyMissile3.nX[j], g_EnemyMissile3.nY[j]);
					printf("○");
				}
				else
				{
					if (g_Enemy3[i].nLife == 2)//비행기 터질시 미사일 중단하기
					{

						g_Enemy3[i].nX = 0;
						g_Enemy3[i].nY = 0;

					}
					g_EnemyMissile3.nLife[j] = 0;
					gotoxy(g_EnemyMissile3.nX[j], g_EnemyMissile3.nY[j]);
					printf("  ");
					g_EnemyMissile3.nX[j] = 0; g_EnemyMissile3.nY[j] = 0;
				}
			}
		}
}
void UserCrash3()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom3 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime5 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime5 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime5 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime5 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime5 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom3>1600) && (clock() - g_sPlayer.OldTime5>2000))
		if (g_sPlayer.nY == g_EnemyMissile3.nY[j] && (g_EnemyMissile3.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile3.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile3.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom3 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile3.nX[j] = 0;
			g_EnemyMissile3.nY[j] = 0;
			g_EnemyMissile3.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime5 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash3()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy3[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy3[j].Boom < 300)
					{
						gotoxy(g_Enemy3[j].x1 - g_Enemy3[j].x2 + g_Enemy3[j].nX, g_Enemy3[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy3[j].nY && (g_sPlayerMissile[i].nX - g_Enemy3[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy3[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy3[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy3[j].x2 = g_Enemy3[j].nX;
				g_Enemy3[j].Boom = clock();
				g_Enemy3[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy3[j].HP == 0)
				{
					gotoxy(g_Enemy3[j].nX, g_Enemy3[j].nY);
					printf("      ");//스페이스바 7번..
										 //g_Enemy3[i].nX = 0; g_Enemy3[i].nY = 0;
					g_Enemy3[j].nLife = 2;
					g_Enemy3[j].nX = -1; g_Enemy3[j].nY = -1;
				}

			}
		}



}
void User_Enemy3()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime6 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime6 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime6 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime6 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime6 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy3[j].nY && (g_Enemy3[j].nX - g_sPlayer.nX) < 6 && (g_Enemy3[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime6 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime6 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void Enemy4()
{
	if (clock() - extra>19000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy4[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy4[i].nLife = 1;
				g_Enemy4[i].nX = 9;
				g_Enemy4[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy4[i].nLife == 1)
		{

			if ((g_Enemy4[i].nY  < 10) && (clock() - g_Enemy4[i].MoveTime1>100))
			{
				g_Enemy4[i].MoveTime1 = clock();
				gotoxy(g_Enemy4[i].nX, g_Enemy4[i].nY);
				printf("      ");
				g_Enemy4[i].nY++;
				gotoxy(g_Enemy4[i].nX, g_Enemy4[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy4[i].nY >= 10) && (g_Enemy4[i].nY<34))
			{
				if ((clock() - g_Enemy4[i].MoveTime1>500))
				{
					g_Enemy4[i].MoveTime1 = clock();
					gotoxy(g_Enemy4[i].nX, g_Enemy4[i].nY);
					printf("      ");
					g_Enemy4[i].nY++;
					gotoxy(g_Enemy4[i].nX, g_Enemy4[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy4[i].nY == 34)
				{
					g_Enemy4[i].nLife = 2;
					gotoxy(g_Enemy4[i].nX, g_Enemy4[i].nY);
					printf("      ");
					g_Enemy4[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile4()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile4.FireTime>2000 && g_Enemy4[i].nLife == 1)
			{
				
				if (g_EnemyMissile4.nLife[j] == 0)
				{
					g_EnemyMissile4.FireTime = clock();
					g_EnemyMissile4.x1 = g_sPlayer.nX;
					g_EnemyMissile4.y1 = g_sPlayer.nY;
					g_EnemyMissile4.x2 = g_Enemy4[i].nX + 2;
					g_EnemyMissile4.y2 = g_Enemy4[i].nY + 1;
					g_EnemyMissile4.nLife[j] = 1;
					g_EnemyMissile4.nX[j] = g_Enemy4[i].nX + 2;
					g_EnemyMissile4.nY[j] = g_Enemy4[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile4.AppearTime[j] >= 40))
			{
				g_EnemyMissile4.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile4->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile4.nLife[j] == 1)
				{
					
					if (g_EnemyMissile4.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile4.nX[j], g_EnemyMissile4.nY[j]);
						printf("  ");
						g_EnemyMissile4.nY[j]++;
						gotoxy(g_EnemyMissile4.nX[j], g_EnemyMissile4.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_Enemy4[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy4[i].nX = 0;
							g_Enemy4[i].nY = 0;

						}
						g_EnemyMissile4.nLife[j] = 0;
						gotoxy(g_EnemyMissile4.nX[j], g_EnemyMissile4.nY[j]);
						printf("  ");
						g_EnemyMissile4.nX[j] = 0; g_EnemyMissile4.nY[j] = 0;
					}
					}
				}
			}
void UserCrash4()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom4 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime7 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime7 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime7 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime7 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime7 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom4>1600) && (clock() - g_sPlayer.OldTime7>2000))
		if (g_sPlayer.nY == g_EnemyMissile4.nY[j] && (g_EnemyMissile4.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile4.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile4.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom4 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile4.nX[j] = 0;
			g_EnemyMissile4.nY[j] = 0;
			g_EnemyMissile4.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime7 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash4()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy4[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy4[j].Boom < 300)
					{
						gotoxy(g_Enemy4[j].x1 - g_Enemy4[j].x2 + g_Enemy4[j].nX, g_Enemy4[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy4[j].nY && (g_sPlayerMissile[i].nX - g_Enemy4[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy4[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy4[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy4[j].x2 = g_Enemy4[j].nX;
				g_Enemy4[j].Boom = clock();
				g_Enemy4[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy4[j].HP == 0)
				{
					gotoxy(g_Enemy4[j].nX, g_Enemy4[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy4[i].nX = 0; g_Enemy4[i].nY = 0;
					g_Enemy4[j].nLife = 2;
					g_Enemy4[j].nX = -1; g_Enemy4[j].nY = -1;
				}

			}
		}



}
void User_Enemy4()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime8 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime8 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime8 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime8 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime8 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy4[j].nY && (g_Enemy4[j].nX - g_sPlayer.nX) < 6 && (g_Enemy4[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime8 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime8 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void Enemy5()
{
	if (clock() - extra>19500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy5[i].nLife == 0)
			{
				//g_Enemy5[i].MoveTime1 = clock();
				g_Enemy5[i].nLife = 1;
				g_Enemy5[i].nX = 15;
				g_Enemy5[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy5[i].nLife == 1)
		{

			if ((g_Enemy5[i].nY  < 10) && (clock() - g_Enemy5[i].MoveTime1>100))
			{
				g_Enemy5[i].MoveTime1 = clock();
				gotoxy(g_Enemy5[i].nX, g_Enemy5[i].nY);
				printf("      ");
				g_Enemy5[i].nY++;
				gotoxy(g_Enemy5[i].nX, g_Enemy5[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy5[i].nY >= 10) && (g_Enemy5[i].nY<34))
			{
				if ((clock() - g_Enemy5[i].MoveTime1>500))
				{
					g_Enemy5[i].MoveTime1 = clock();
					gotoxy(g_Enemy5[i].nX, g_Enemy5[i].nY);
					printf("      ");
					g_Enemy5[i].nY++;
					gotoxy(g_Enemy5[i].nX, g_Enemy5[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy5[i].nY == 34)
				{
					g_Enemy5[i].nLife = 2;
					gotoxy(g_Enemy5[i].nX, g_Enemy5[i].nY);
					printf("      ");
					g_Enemy5[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile5()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile5.FireTime>2000 && g_Enemy5[i].nLife == 1)
			{
				
				if (g_EnemyMissile5.nLife[j] == 0)
				{
					g_EnemyMissile5.FireTime = clock();
					g_EnemyMissile5.nLife[j] = 1;
					g_EnemyMissile5.nX[j] = g_Enemy5[i].nX + 2;
					g_EnemyMissile5.nY[j] = g_Enemy5[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile5.AppearTime[j] >= 40))
			{
				g_EnemyMissile5.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile34->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile5.nLife[j] == 1)
				{

					if (g_EnemyMissile5.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile5.nX[j], g_EnemyMissile5.nY[j]);
						printf("  ");
						g_EnemyMissile5.nY[j]++;
						gotoxy(g_EnemyMissile5.nX[j], g_EnemyMissile5.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy5[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy5[i].nX = 0;
							g_Enemy5[i].nY = 0;

						}
						g_EnemyMissile5.nLife[j] = 0;
						gotoxy(g_EnemyMissile5.nX[j], g_EnemyMissile5.nY[j]);
						printf("  ");
						g_EnemyMissile5.nX[j] = 0; g_EnemyMissile5.nY[j] = 0;
					}
				}
			}
}
void UserCrash5()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom5 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime9 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime9 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime9 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime9 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime9 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom5>1600) && (clock() - g_sPlayer.OldTime9>2000))
		if (g_sPlayer.nY == g_EnemyMissile5.nY[j] && (g_EnemyMissile5.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile5.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile5.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom5 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile5.nX[j] = 0;
			g_EnemyMissile5.nY[j] = 0;
			g_EnemyMissile5.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime9 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash5()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy5[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy5[j].Boom < 300)
					{
						gotoxy(g_Enemy5[j].x1 - g_Enemy5[j].x2 + g_Enemy5[j].nX, g_Enemy5[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy5[j].nY && (g_sPlayerMissile[i].nX - g_Enemy5[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy5[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy5[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy5[j].x2 = g_Enemy5[j].nX;
				g_Enemy5[j].Boom = clock();
				g_Enemy5[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy5[j].HP == 0)
				{
					gotoxy(g_Enemy5[j].nX, g_Enemy5[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy5[i].nX = 0; g_Enemy5[i].nY = 0;
					g_Enemy5[j].nLife = 2;
					g_Enemy5[j].nX = -1; g_Enemy5[j].nY = -1;
				}

			}
		}



}
void User_Enemy5()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime10 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime10 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime10 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime10 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime10 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy5[j].nY && (g_Enemy5[j].nX - g_sPlayer.nX) < 6 && (g_Enemy5[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime10 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime10 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//오른쪽에서 내려오는 3개의 혼합형
void Enemy6()
{
	if (clock() - extra>20500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy6[i].nLife == 0)
			{
				//g_Enemy6[i].MoveTime1 = clock();
				g_Enemy6[i].nLife = 1;
				g_Enemy6[i].nX = 59;
				g_Enemy6[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy6[i].nLife == 1)
		{

			if ((g_Enemy6[i].nY  < 10) && (clock() - g_Enemy6[i].MoveTime1>100))
			{
				g_Enemy6[i].MoveTime1 = clock();
				gotoxy(g_Enemy6[i].nX, g_Enemy6[i].nY);
				printf("      ");
				g_Enemy6[i].nY++;
				gotoxy(g_Enemy6[i].nX, g_Enemy6[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy6[i].nY >= 10) && (g_Enemy6[i].nY<34))
			{
				if ((clock() - g_Enemy6[i].MoveTime1>500))
				{
					g_Enemy6[i].MoveTime1 = clock();
					gotoxy(g_Enemy6[i].nX, g_Enemy6[i].nY);
					printf("      ");
					g_Enemy6[i].nY++;
					gotoxy(g_Enemy6[i].nX, g_Enemy6[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy6[i].nY == 34)
				{
					g_Enemy6[i].nLife = 2;
					gotoxy(g_Enemy6[i].nX, g_Enemy6[i].nY);
					printf("      ");
					g_Enemy6[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile6()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile6.FireTime>2000 && g_Enemy6[i].nLife == 1)
			{
				
				if (g_EnemyMissile6.nLife[j] == 0)
				{
					g_EnemyMissile6.FireTime = clock();
					g_EnemyMissile6.nLife[j] = 1;
					g_EnemyMissile6.nX[j] = g_Enemy6[i].nX + 2;
					g_EnemyMissile6.nY[j] = g_Enemy6[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile6.AppearTime[j] >= 40))
			{
				g_EnemyMissile6.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile6->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile6.nLife[j] == 1)
				{

					if (g_EnemyMissile6.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile6.nX[j], g_EnemyMissile6.nY[j]);
						printf("  ");
						g_EnemyMissile6.nY[j]++;
						gotoxy(g_EnemyMissile6.nX[j], g_EnemyMissile6.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy6[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy6[i].nX = 0;
							g_Enemy6[i].nY = 0;

						}
						g_EnemyMissile6.nLife[j] = 0;
						gotoxy(g_EnemyMissile6.nX[j], g_EnemyMissile6.nY[j]);
						printf("  ");
						g_EnemyMissile6.nX[j] = 0; g_EnemyMissile6.nY[j] = 0;
					}
				}
			}
}
void UserCrash6()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom6 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime11 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime11 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime11 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime11 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime11 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom6>1600) && (clock() - g_sPlayer.OldTime11>2000))
		if (g_sPlayer.nY == g_EnemyMissile6.nY[j] && (g_EnemyMissile6.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile6.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile6.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom6 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile6.nX[j] = 0;
			g_EnemyMissile6.nY[j] = 0;
			g_EnemyMissile6.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime11 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash6()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy6[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy6[j].Boom < 300)
					{
						gotoxy(g_Enemy6[j].x1 - g_Enemy6[j].x2 + g_Enemy6[j].nX, g_Enemy6[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy6[j].nY && (g_sPlayerMissile[i].nX - g_Enemy6[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy6[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy6[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy6[j].x2 = g_Enemy6[j].nX;
				g_Enemy6[j].Boom = clock();
				g_Enemy6[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy6[j].HP == 0)
				{
					gotoxy(g_Enemy6[j].nX, g_Enemy6[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy6[i].nX = 0; g_Enemy6[i].nY = 0;
					g_Enemy6[j].nLife = 2;
					g_Enemy6[j].nX = -1; g_Enemy6[j].nY = -1;
				}

			}
		}



}
void User_Enemy6()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime12 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime12 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime12 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime12 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime12 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy6[j].nY && (g_Enemy6[j].nX - g_sPlayer.nX) < 6 && (g_Enemy6[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime12 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime12 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void Enemy7()
{
	if (clock() - extra>20000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy7[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy7[i].nLife = 1;
				g_Enemy7[i].nX = 65;
				g_Enemy7[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy7[i].nLife == 1)
		{

			if ((g_Enemy7[i].nY  < 10) && (clock() - g_Enemy7[i].MoveTime1>100))
			{
				g_Enemy7[i].MoveTime1 = clock();
				gotoxy(g_Enemy7[i].nX, g_Enemy7[i].nY);
				printf("      ");
				g_Enemy7[i].nY++;
				gotoxy(g_Enemy7[i].nX, g_Enemy7[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy7[i].nY >= 10) && (g_Enemy7[i].nY<34))
			{
				if ((clock() - g_Enemy7[i].MoveTime1>500))
				{
					g_Enemy7[i].MoveTime1 = clock();
					gotoxy(g_Enemy7[i].nX, g_Enemy7[i].nY);
					printf("      ");
					g_Enemy7[i].nY++;
					gotoxy(g_Enemy7[i].nX, g_Enemy7[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy7[i].nY == 34)
				{
					g_Enemy7[i].nLife = 2;
					gotoxy(g_Enemy7[i].nX, g_Enemy7[i].nY);
					printf("      ");
					g_Enemy7[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile7()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile7.FireTime>2000 && g_Enemy7[i].nLife == 1)
			{
				
				if (g_EnemyMissile7.nLife[j] == 0)
				{
					g_EnemyMissile7.FireTime = clock();
					g_EnemyMissile7.nLife[j] = 1;
					g_EnemyMissile7.nX[j] = g_Enemy7[i].nX + 2;
					g_EnemyMissile7.nY[j] = g_Enemy7[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile7.AppearTime[j] >= 40))
			{
				g_EnemyMissile7.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile7->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile7.nLife[j] == 1)
				{

					if (g_EnemyMissile7.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile7.nX[j], g_EnemyMissile7.nY[j]);
						printf("  ");
						g_EnemyMissile7.nY[j]++;
						gotoxy(g_EnemyMissile7.nX[j], g_EnemyMissile7.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_Enemy7[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy7[i].nX = 0;
							g_Enemy7[i].nY = 0;

						}
						g_EnemyMissile7.nLife[j] = 0;
						gotoxy(g_EnemyMissile7.nX[j], g_EnemyMissile7.nY[j]);
						printf("  ");
						g_EnemyMissile7.nX[j] = 0; g_EnemyMissile7.nY[j] = 0;
					}
				}
			}
}
void UserCrash7()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom7 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime13 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime13 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime13 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime13 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime13 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom7>1600) && (clock() - g_sPlayer.OldTime13>2000))
		if (g_sPlayer.nY == g_EnemyMissile7.nY[j] && (g_EnemyMissile7.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile7.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile7.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom7 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile7.nX[j] = 0;
			g_EnemyMissile7.nY[j] = 0;
			g_EnemyMissile7.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime13 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash7()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy7[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy7[j].Boom < 300)
					{
						gotoxy(g_Enemy7[j].x1 - g_Enemy7[j].x2 + g_Enemy7[j].nX, g_Enemy7[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy7[j].nY && (g_sPlayerMissile[i].nX - g_Enemy7[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy7[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy7[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy7[j].x2 = g_Enemy7[j].nX;
				g_Enemy7[j].Boom = clock();
				g_Enemy7[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy7[j].HP == 0)
				{
					gotoxy(g_Enemy7[j].nX, g_Enemy7[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy7[i].nX = 0; g_Enemy7[i].nY = 0;
					g_Enemy7[j].nLife = 2;
					g_Enemy7[j].nX = -1; g_Enemy7[j].nY = -1;
				}

			}
		}



}
void User_Enemy7()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime14 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime14 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime14 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime14 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime14 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy7[j].nY && (g_Enemy7[j].nX - g_sPlayer.nX) < 6 && (g_Enemy7[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime14 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime14 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void Enemy8()
{
	if (clock() - extra>20500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy8[i].nLife == 0)
			{
				//g_Enemy8[i].MoveTime1 = clock();
				g_Enemy8[i].nLife = 1;
				g_Enemy8[i].nX = 71;
				g_Enemy8[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy8[i].nLife == 1)
		{

			if ((g_Enemy8[i].nY  < 10) && (clock() - g_Enemy8[i].MoveTime1>100))
			{
				g_Enemy8[i].MoveTime1 = clock();
				gotoxy(g_Enemy8[i].nX, g_Enemy8[i].nY);
				printf("      ");
				g_Enemy8[i].nY++;
				gotoxy(g_Enemy8[i].nX, g_Enemy8[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy8[i].nY >= 10) && (g_Enemy8[i].nY<34))
			{
				if ((clock() - g_Enemy8[i].MoveTime1>500))
				{
					g_Enemy8[i].MoveTime1 = clock();
					gotoxy(g_Enemy8[i].nX, g_Enemy8[i].nY);
					printf("      ");
					g_Enemy8[i].nY++;
					gotoxy(g_Enemy8[i].nX, g_Enemy8[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy8[i].nY == 34)
				{
					g_Enemy8[i].nLife = 2;
					gotoxy(g_Enemy8[i].nX, g_Enemy8[i].nY);
					printf("      ");
					g_Enemy8[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile8()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile8.FireTime>2000 && g_Enemy8[i].nLife == 1)
			{
				
				if (g_EnemyMissile8.nLife[j] == 0)
				{
					g_EnemyMissile8.FireTime = clock();
					g_EnemyMissile8.nLife[j] = 1;
					g_EnemyMissile8.nX[j] = g_Enemy8[i].nX + 2;
					g_EnemyMissile8.nY[j] = g_Enemy8[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile8.AppearTime[j] >= 40))
			{
				g_EnemyMissile8.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile8->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile8.nLife[j] == 1)
				{

					if (g_EnemyMissile8.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile8.nX[j], g_EnemyMissile8.nY[j]);
						printf("  ");
						g_EnemyMissile8.nY[j]++;
						gotoxy(g_EnemyMissile8.nX[j], g_EnemyMissile8.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy8[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy8[i].nX = 0;
							g_Enemy8[i].nY = 0;

						}
						g_EnemyMissile8.nLife[j] = 0;
						gotoxy(g_EnemyMissile8.nX[j], g_EnemyMissile8.nY[j]);
						printf("  ");
						g_EnemyMissile8.nX[j] = 0; g_EnemyMissile8.nY[j] = 0;
					}
				}
			}
}
void UserCrash8()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom8 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime15 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime15 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime15 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime15 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime15 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom8>1600) && (clock() - g_sPlayer.OldTime15>2000))
		if (g_sPlayer.nY == g_EnemyMissile8.nY[j] && (g_EnemyMissile8.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile8.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile8.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom8 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile8.nX[j] = 0;
			g_EnemyMissile8.nY[j] = 0;
			g_EnemyMissile8.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime15 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash8()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy8[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy8[j].Boom < 300)
					{
						gotoxy(g_Enemy8[j].x1 - g_Enemy8[j].x2 + g_Enemy8[j].nX, g_Enemy8[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy8[j].nY && (g_sPlayerMissile[i].nX - g_Enemy8[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy8[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy8[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy8[j].x2 = g_Enemy8[j].nX;
				g_Enemy8[j].Boom = clock();
				g_Enemy8[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy8[j].HP == 0)
				{
					gotoxy(g_Enemy8[j].nX, g_Enemy8[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy8[i].nX = 0; g_Enemy8[i].nY = 0;
					g_Enemy8[j].nLife = 2;
					g_Enemy8[j].nX = -1; g_Enemy8[j].nY = -1;
				}

			}
		}



}

//가운데로 내려오는 7개의 혼합형
void Enemy9()
{
	if (clock() - extra>22000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy9[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy9[i].nLife = 1;
				g_Enemy9[i].nX = 31;
				g_Enemy9[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy9[i].nLife == 1)
		{

			if ((g_Enemy9[i].nY  < 10) && (clock() - g_Enemy9[i].MoveTime1>100))
			{
				g_Enemy9[i].MoveTime1 = clock();
				gotoxy(g_Enemy9[i].nX, g_Enemy9[i].nY);
				printf("      ");
				g_Enemy9[i].nY++;
				gotoxy(g_Enemy9[i].nX, g_Enemy9[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy9[i].nY >= 10) && (g_Enemy9[i].nY<34))
			{
				if ((clock() - g_Enemy9[i].MoveTime1>500))
				{
					g_Enemy9[i].MoveTime1 = clock();
					gotoxy(g_Enemy9[i].nX, g_Enemy9[i].nY);
					printf("      ");
					g_Enemy9[i].nY++;
					gotoxy(g_Enemy9[i].nX, g_Enemy9[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy9[i].nY == 34)
				{
					g_Enemy9[i].nLife = 2;
					gotoxy(g_Enemy9[i].nX, g_Enemy9[i].nY);
					printf("      ");
					g_Enemy9[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile9()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile9.FireTime>2000 && g_Enemy9[i].nLife == 1)
			{
				
				if (g_EnemyMissile9.nLife[j] == 0)
				{
					g_EnemyMissile9.FireTime = clock();
					g_EnemyMissile9.nLife[j] = 1;
					g_EnemyMissile9.nX[j] = g_Enemy9[i].nX + 2;
					g_EnemyMissile9.nY[j] = g_Enemy9[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile9.AppearTime[j] >= 40))
			{
				g_EnemyMissile9.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile9->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile9.nLife[j] == 1)
				{

					if (g_EnemyMissile9.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile9.nX[j], g_EnemyMissile9.nY[j]);
						printf("  ");
						g_EnemyMissile9.nY[j]++;
						gotoxy(g_EnemyMissile9.nX[j], g_EnemyMissile9.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy9[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy9[i].nX = 0;
							g_Enemy9[i].nY = 0;

						}
						g_EnemyMissile9.nLife[j] = 0;
						gotoxy(g_EnemyMissile9.nX[j], g_EnemyMissile9.nY[j]);
						printf("  ");
						g_EnemyMissile9.nX[j] = 0; g_EnemyMissile9.nY[j] = 0;
					}
				}
			}
}
void UserCrash9()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom9 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime16 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime16 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime16 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime16 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime16 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom9>1600) && (clock() - g_sPlayer.OldTime16>2000))
		if (g_sPlayer.nY == g_EnemyMissile9.nY[j] && (g_EnemyMissile9.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile9.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile9.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom9 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile9.nX[j] = 0;
			g_EnemyMissile9.nY[j] = 0;
			g_EnemyMissile9.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime16 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash9()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy9[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy9[j].Boom < 300)
					{
						gotoxy(g_Enemy9[j].x1 - g_Enemy9[j].x2 + g_Enemy9[j].nX, g_Enemy9[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy9[j].nY && (g_sPlayerMissile[i].nX - g_Enemy9[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy9[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy9[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy9[j].x2 = g_Enemy9[j].nX;
				g_Enemy9[j].Boom = clock();
				g_Enemy9[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy9[j].HP == 0)
				{
					gotoxy(g_Enemy9[j].nX, g_Enemy9[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy9[i].nX = 0; g_Enemy9[i].nY = 0;
					g_Enemy9[j].nLife = 2;
					g_Enemy9[j].nX = -1; g_Enemy9[j].nY = -1;
				}

			}
		}



}

void Enemy10()
{
	if (clock() - extra>21500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy10[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy10[i].nLife = 1;
				g_Enemy10[i].nX = 37;
				g_Enemy10[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy10[i].nLife == 1)
		{

			if ((g_Enemy10[i].nY  < 10) && (clock() - g_Enemy10[i].MoveTime1>100))
			{
				g_Enemy10[i].MoveTime1 = clock();
				gotoxy(g_Enemy10[i].nX, g_Enemy10[i].nY);
				printf("      ");
				g_Enemy10[i].nY++;
				gotoxy(g_Enemy10[i].nX, g_Enemy10[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy10[i].nY >= 10) && (g_Enemy10[i].nY<34))
			{
				if ((clock() - g_Enemy10[i].MoveTime1>500))
				{
					g_Enemy10[i].MoveTime1 = clock();
					gotoxy(g_Enemy10[i].nX, g_Enemy10[i].nY);
					printf("      ");
					g_Enemy10[i].nY++;
					gotoxy(g_Enemy10[i].nX, g_Enemy10[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy10[i].nY == 34)
				{
					g_Enemy10[i].nLife = 2;
					gotoxy(g_Enemy10[i].nX, g_Enemy10[i].nY);
					printf("      ");
					g_Enemy10[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile10()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile10.FireTime>2000 && g_Enemy10[i].nLife == 1)
			{
				
				if (g_EnemyMissile10.nLife[j] == 0)
				{
					g_EnemyMissile10.FireTime = clock();
					g_EnemyMissile10.nLife[j] = 1;
					g_EnemyMissile10.nX[j] = g_Enemy10[i].nX + 2;
					g_EnemyMissile10.nY[j] = g_Enemy10[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile10.AppearTime[j] >= 40))
			{
				g_EnemyMissile10.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile10->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile10.nLife[j] == 1)
				{

					if (g_EnemyMissile10.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile10.nX[j], g_EnemyMissile10.nY[j]);
						printf("  ");
						g_EnemyMissile10.nY[j]++;
						gotoxy(g_EnemyMissile10.nX[j], g_EnemyMissile10.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy10[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy10[i].nX = 0;
							g_Enemy10[i].nY = 0;

						}
						g_EnemyMissile10.nLife[j] = 0;
						gotoxy(g_EnemyMissile10.nX[j], g_EnemyMissile10.nY[j]);
						printf("  ");
						g_EnemyMissile10.nX[j] = 0; g_EnemyMissile10.nY[j] = 0;
					}
				}
			}
}
void UserCrash10()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom10 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime17 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime17 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime17 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime17 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime17 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom10>1600) && (clock() - g_sPlayer.OldTime17>2000))
		if (g_sPlayer.nY == g_EnemyMissile10.nY[j] && (g_EnemyMissile10.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile10.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile10.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom10 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile10.nX[j] = 0;
			g_EnemyMissile10.nY[j] = 0;
			g_EnemyMissile10.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime17 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash10()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy10[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy10[j].Boom < 300)
					{
						gotoxy(g_Enemy10[j].x1 - g_Enemy10[j].x2 + g_Enemy10[j].nX, g_Enemy10[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy10[j].nY && (g_sPlayerMissile[i].nX - g_Enemy10[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy10[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy10[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy10[j].x2 = g_Enemy10[j].nX;
				g_Enemy10[j].Boom = clock();
				g_Enemy10[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy10[j].HP == 0)
				{
					gotoxy(g_Enemy10[j].nX, g_Enemy10[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy10[i].nX = 0; g_Enemy10[i].nY = 0;
					g_Enemy10[j].nLife = 2;
					g_Enemy10[j].nX = -1; g_Enemy10[j].nY = -1;
				}

			}
		}



}

void Enemy11()
{
	if (clock() - extra>22000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy11[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy11[i].nLife = 1;
				g_Enemy11[i].nX = 43;
				g_Enemy11[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy11[i].nLife == 1)
		{

			if ((g_Enemy11[i].nY  < 10) && (clock() - g_Enemy11[i].MoveTime1>100))
			{
				g_Enemy11[i].MoveTime1 = clock();
				gotoxy(g_Enemy11[i].nX, g_Enemy11[i].nY);
				printf("      ");
				g_Enemy11[i].nY++;
				gotoxy(g_Enemy11[i].nX, g_Enemy11[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy11[i].nY >= 10) && (g_Enemy11[i].nY<34))
			{
				if ((clock() - g_Enemy11[i].MoveTime1>500))
				{
					g_Enemy11[i].MoveTime1 = clock();
					gotoxy(g_Enemy11[i].nX, g_Enemy11[i].nY);
					printf("      ");
					g_Enemy11[i].nY++;
					gotoxy(g_Enemy11[i].nX, g_Enemy11[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy11[i].nY == 34)
				{
					g_Enemy11[i].nLife = 2;
					gotoxy(g_Enemy11[i].nX, g_Enemy11[i].nY);
					printf("      ");
					g_Enemy11[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile11()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile11.FireTime>2000 && g_Enemy11[i].nLife == 1)
			{
				
				if (g_EnemyMissile11.nLife[j] == 0)
				{
					g_EnemyMissile11.FireTime = clock();
					g_EnemyMissile11.nLife[j] = 1;
					g_EnemyMissile11.nX[j] = g_Enemy11[i].nX + 2;
					g_EnemyMissile11.nY[j] = g_Enemy11[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile11.AppearTime[j] >= 40))
			{
				g_EnemyMissile11.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile11->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile11.nLife[j] == 1)
				{

					if (g_EnemyMissile11.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile11.nX[j], g_EnemyMissile11.nY[j]);
						printf("  ");
						g_EnemyMissile11.nY[j]++;
						gotoxy(g_EnemyMissile11.nX[j], g_EnemyMissile11.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy11[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy11[i].nX = 0;
							g_Enemy11[i].nY = 0;

						}
						g_EnemyMissile11.nLife[j] = 0;
						gotoxy(g_EnemyMissile11.nX[j], g_EnemyMissile11.nY[j]);
						printf("  ");
						g_EnemyMissile11.nX[j] = 0; g_EnemyMissile11.nY[j] = 0;
					}
				}
			}
}
void UserCrash11()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom11 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime18 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime18 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime18 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime18 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime18 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom11>1600) && (clock() - g_sPlayer.OldTime18>2000))
		if (g_sPlayer.nY == g_EnemyMissile11.nY[j] && (g_EnemyMissile11.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile11.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile11.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom11 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile11.nX[j] = 0;
			g_EnemyMissile11.nY[j] = 0;
			g_EnemyMissile11.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime18 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash11()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy11[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy11[j].Boom < 300)
					{
						gotoxy(g_Enemy11[j].x1 - g_Enemy11[j].x2 + g_Enemy11[j].nX, g_Enemy11[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy11[j].nY && (g_sPlayerMissile[i].nX - g_Enemy11[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy11[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy11[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy11[j].x2 = g_Enemy11[j].nX;
				g_Enemy11[j].Boom = clock();
				g_Enemy11[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy11[j].HP == 0)
				{
					gotoxy(g_Enemy11[j].nX, g_Enemy11[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy11[i].nX = 0; g_Enemy11[i].nY = 0;
					g_Enemy11[j].nLife = 2;
					g_Enemy11[j].nX = -1; g_Enemy11[j].nY = -1;
				}

			}
		}



}

void Enemy12()
{
	if (clock() - extra>21500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy12[i].nLife == 0)
			{
				//g_Enemy12[i].MoveTime1 = clock();
				g_Enemy12[i].nLife = 1;
				g_Enemy12[i].nX = 25;
				g_Enemy12[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy12[i].nLife == 1)
		{

			if ((g_Enemy12[i].nY  < 10) && (clock() - g_Enemy12[i].MoveTime1>100))
			{
				g_Enemy12[i].MoveTime1 = clock();
				gotoxy(g_Enemy12[i].nX, g_Enemy12[i].nY);
				printf("      ");
				g_Enemy12[i].nY++;
				gotoxy(g_Enemy12[i].nX, g_Enemy12[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy12[i].nY >= 10) && (g_Enemy12[i].nY<34))
			{
				if ((clock() - g_Enemy12[i].MoveTime1>500))
				{
					g_Enemy12[i].MoveTime1 = clock();
					gotoxy(g_Enemy12[i].nX, g_Enemy12[i].nY);
					printf("      ");
					g_Enemy12[i].nY++;
					gotoxy(g_Enemy12[i].nX, g_Enemy12[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy12[i].nY == 34)
				{
					g_Enemy12[i].nLife = 2;
					gotoxy(g_Enemy12[i].nX, g_Enemy12[i].nY);
					printf("      ");
					g_Enemy12[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile12()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile12.FireTime>2000 && g_Enemy12[i].nLife == 1)
			{
				
				if (g_EnemyMissile12.nLife[j] == 0)
				{
					g_EnemyMissile12.FireTime = clock();
					g_EnemyMissile12.nLife[j] = 1;
					g_EnemyMissile12.nX[j] = g_Enemy12[i].nX + 2;
					g_EnemyMissile12.nY[j] = g_Enemy12[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile12.AppearTime[j] >= 40))
			{
				g_EnemyMissile12.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile12->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile12.nLife[j] == 1)
				{

					if (g_EnemyMissile12.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile12.nX[j], g_EnemyMissile12.nY[j]);
						printf("  ");
						g_EnemyMissile12.nY[j]++;
						gotoxy(g_EnemyMissile12.nX[j], g_EnemyMissile12.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy12[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy12[i].nX = 0;
							g_Enemy12[i].nY = 0;

						}
						g_EnemyMissile12.nLife[j] = 0;
						gotoxy(g_EnemyMissile12.nX[j], g_EnemyMissile12.nY[j]);
						printf("  ");
						g_EnemyMissile12.nX[j] = 0; g_EnemyMissile12.nY[j] = 0;
					}
				}
			}
}
void UserCrash12()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom12 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime19 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime19 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime19 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime19 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime19 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom12>1600) && (clock() - g_sPlayer.OldTime19>2000))
		if (g_sPlayer.nY == g_EnemyMissile12.nY[j] && (g_EnemyMissile12.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile12.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile12.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom12 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile12.nX[j] = 0;
			g_EnemyMissile12.nY[j] = 0;
			g_EnemyMissile12.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime19 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash12()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy12[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy12[j].Boom < 300)
					{
						gotoxy(g_Enemy12[j].x1 - g_Enemy12[j].x2 + g_Enemy12[j].nX, g_Enemy12[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy12[j].nY && (g_sPlayerMissile[i].nX - g_Enemy12[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy12[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy12[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy12[j].x2 = g_Enemy12[j].nX;
				g_Enemy12[j].Boom = clock();
				g_Enemy12[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy12[j].HP == 0)
				{
					gotoxy(g_Enemy12[j].nX, g_Enemy12[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy12[i].nX = 0; g_Enemy12[i].nY = 0;
					g_Enemy12[j].nLife = 2;
					g_Enemy12[j].nX = -1; g_Enemy12[j].nY = -1;
				}

			}
		}



}

void Enemy13()
{
	if (clock() - extra>21500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy13[i].nLife == 0)
			{
				//g_Enemy13[i].MoveTime1 = clock();
				g_Enemy13[i].nLife = 1;
				g_Enemy13[i].nX = 49;
				g_Enemy13[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy13[i].nLife == 1)
		{

			if ((g_Enemy13[i].nY  < 10) && (clock() - g_Enemy13[i].MoveTime1>100))
			{
				g_Enemy13[i].MoveTime1 = clock();
				gotoxy(g_Enemy13[i].nX, g_Enemy13[i].nY);
				printf("      ");
				g_Enemy13[i].nY++;
				gotoxy(g_Enemy13[i].nX, g_Enemy13[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy13[i].nY >= 10) && (g_Enemy13[i].nY<34))
			{
				if ((clock() - g_Enemy13[i].MoveTime1>500))
				{
					g_Enemy13[i].MoveTime1 = clock();
					gotoxy(g_Enemy13[i].nX, g_Enemy13[i].nY);
					printf("      ");
					g_Enemy13[i].nY++;
					gotoxy(g_Enemy13[i].nX, g_Enemy13[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy13[i].nY == 34)
				{
					g_Enemy13[i].nLife = 2;
					gotoxy(g_Enemy13[i].nX, g_Enemy13[i].nY);
					printf("      ");
					g_Enemy13[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile13()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile13.FireTime>2000 && g_Enemy13[i].nLife == 1)
			{
				
				if (g_EnemyMissile13.nLife[j] == 0)
				{
					g_EnemyMissile13.FireTime = clock();
					g_EnemyMissile13.nLife[j] = 1;
					g_EnemyMissile13.nX[j] = g_Enemy13[i].nX + 2;
					g_EnemyMissile13.nY[j] = g_Enemy13[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile13.AppearTime[j] >= 40))
			{
				g_EnemyMissile13.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile13->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile13.nLife[j] == 1)
				{

					if (g_EnemyMissile13.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile13.nX[j], g_EnemyMissile13.nY[j]);
						printf("  ");
						g_EnemyMissile13.nY[j]++;
						gotoxy(g_EnemyMissile13.nX[j], g_EnemyMissile13.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy13[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy13[i].nX = 0;
							g_Enemy13[i].nY = 0;

						}
						g_EnemyMissile13.nLife[j] = 0;
						gotoxy(g_EnemyMissile13.nX[j], g_EnemyMissile13.nY[j]);
						printf("  ");
						g_EnemyMissile13.nX[j] = 0; g_EnemyMissile13.nY[j] = 0;
					}
				}
			}
}
void UserCrash13()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom13 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime20 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime20 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime20 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime20 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime20 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom13>1600) && (clock() - g_sPlayer.OldTime20>2000))
		if (g_sPlayer.nY == g_EnemyMissile13.nY[j] && (g_EnemyMissile13.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile13.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile13.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom13 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile13.nX[j] = 0;
			g_EnemyMissile13.nY[j] = 0;
			g_EnemyMissile13.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime20 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash13()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy13[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy13[j].Boom < 300)
					{
						gotoxy(g_Enemy13[j].x1 - g_Enemy13[j].x2 + g_Enemy13[j].nX, g_Enemy13[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy13[j].nY && (g_sPlayerMissile[i].nX - g_Enemy13[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy13[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy13[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy13[j].x2 = g_Enemy13[j].nX;
				g_Enemy13[j].Boom = clock();
				g_Enemy13[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy13[j].HP == 0)
				{
					gotoxy(g_Enemy13[j].nX, g_Enemy13[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy13[i].nX = 0; g_Enemy13[i].nY = 0;
					g_Enemy13[j].nLife = 2;
					g_Enemy13[j].nX = -1; g_Enemy13[j].nY = -1;
				}

			}
		}



}

void Enemy14()
{
	if (clock() - extra>22000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy14[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy14[i].nLife = 1;
				g_Enemy14[i].nX = 19;
				g_Enemy14[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy14[i].nLife == 1)
		{

			if ((g_Enemy14[i].nY  < 10) && (clock() - g_Enemy14[i].MoveTime1>100))
			{
				g_Enemy14[i].MoveTime1 = clock();
				gotoxy(g_Enemy14[i].nX, g_Enemy14[i].nY);
				printf("      ");
				g_Enemy14[i].nY++;
				gotoxy(g_Enemy14[i].nX, g_Enemy14[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy14[i].nY >= 10) && (g_Enemy14[i].nY<34))
			{
				if ((clock() - g_Enemy14[i].MoveTime1>500))
				{
					g_Enemy14[i].MoveTime1 = clock();
					gotoxy(g_Enemy14[i].nX, g_Enemy14[i].nY);
					printf("      ");
					g_Enemy14[i].nY++;
					gotoxy(g_Enemy14[i].nX, g_Enemy14[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy14[i].nY == 34)
				{
					g_Enemy14[i].nLife = 2;
					gotoxy(g_Enemy14[i].nX, g_Enemy14[i].nY);
					printf("      ");
					g_Enemy14[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile14()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile14.FireTime>2000 && g_Enemy14[i].nLife == 1)
			{
				
				if (g_EnemyMissile14.nLife[j] == 0)
				{
					g_EnemyMissile14.FireTime = clock();
					g_EnemyMissile14.nLife[j] = 1;
					g_EnemyMissile14.nX[j] = g_Enemy14[i].nX + 2;
					g_EnemyMissile14.nY[j] = g_Enemy14[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile14.AppearTime[j] >= 40))
			{
				g_EnemyMissile14.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile14->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile14.nLife[j] == 1)
				{

					if (g_EnemyMissile14.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile14.nX[j], g_EnemyMissile14.nY[j]);
						printf("  ");
						g_EnemyMissile14.nY[j]++;
						gotoxy(g_EnemyMissile14.nX[j], g_EnemyMissile14.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy14[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy14[i].nX = 0;
							g_Enemy14[i].nY = 0;

						}
						g_EnemyMissile14.nLife[j] = 0;
						gotoxy(g_EnemyMissile14.nX[j], g_EnemyMissile14.nY[j]);
						printf("  ");
						g_EnemyMissile14.nX[j] = 0; g_EnemyMissile14.nY[j] = 0;
					}
				}
			}
}
void UserCrash14()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom14 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime21 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime21 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime21 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime21 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime21 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom14>1600) && (clock() - g_sPlayer.OldTime21>2000))
		if (g_sPlayer.nY == g_EnemyMissile14.nY[j] && (g_EnemyMissile14.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile14.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile14.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom14 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile14.nX[j] = 0;
			g_EnemyMissile14.nY[j] = 0;
			g_EnemyMissile14.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime21 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash14()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy14[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy14[j].Boom < 300)
					{
						gotoxy(g_Enemy14[j].x1 - g_Enemy14[j].x2 + g_Enemy14[j].nX, g_Enemy14[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy14[j].nY && (g_sPlayerMissile[i].nX - g_Enemy14[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy14[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy14[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy14[j].x2 = g_Enemy14[j].nX;
				g_Enemy14[j].Boom = clock();
				g_Enemy14[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy14[j].HP == 0)
				{
					gotoxy(g_Enemy14[j].nX, g_Enemy14[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy14[i].nX = 0; g_Enemy14[i].nY = 0;
					g_Enemy14[j].nLife = 2;
					g_Enemy14[j].nX = -1; g_Enemy14[j].nY = -1;
				}

			}
		}



}

void Enemy15()
{
	if (clock()-extra>22000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy15[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy15[i].nLife = 1;
				g_Enemy15[i].nX = 55;
				g_Enemy15[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy15[i].nLife == 1)
		{

			if ((g_Enemy15[i].nY  < 10) && (clock() - g_Enemy15[i].MoveTime1>100))
			{
				g_Enemy15[i].MoveTime1 = clock();
				gotoxy(g_Enemy15[i].nX, g_Enemy15[i].nY);
				printf("      ");
				g_Enemy15[i].nY++;
				gotoxy(g_Enemy15[i].nX, g_Enemy15[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy15[i].nY >= 10) && (g_Enemy15[i].nY<34))
			{
				if ((clock() - g_Enemy15[i].MoveTime1>500))
				{
					g_Enemy15[i].MoveTime1 = clock();
					gotoxy(g_Enemy15[i].nX, g_Enemy15[i].nY);
					printf("      ");
					g_Enemy15[i].nY++;
					gotoxy(g_Enemy15[i].nX, g_Enemy15[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy15[i].nY == 34)
				{
					g_Enemy15[i].nLife = 2;
					gotoxy(g_Enemy15[i].nX, g_Enemy15[i].nY);
					printf("      ");
					g_Enemy15[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile15()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile15.FireTime>2000 && g_Enemy15[i].nLife == 1)
			{
				
				if (g_EnemyMissile15.nLife[j] == 0)
				{
					g_EnemyMissile15.FireTime = clock();
					g_EnemyMissile15.nLife[j] = 1;
					g_EnemyMissile15.nX[j] = g_Enemy15[i].nX + 2;
					g_EnemyMissile15.nY[j] = g_Enemy15[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile15.AppearTime[j] >= 40))
			{
				g_EnemyMissile15.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile15->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile15.nLife[j] == 1)
				{

					if (g_EnemyMissile15.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile15.nX[j], g_EnemyMissile15.nY[j]);
						printf("  ");
						g_EnemyMissile15.nY[j]++;
						gotoxy(g_EnemyMissile15.nX[j], g_EnemyMissile15.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy15[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy15[i].nX = 0;
							g_Enemy15[i].nY = 0;

						}
						g_EnemyMissile15.nLife[j] = 0;
						gotoxy(g_EnemyMissile15.nX[j], g_EnemyMissile15.nY[j]);
						printf("  ");
						g_EnemyMissile15.nX[j] = 0; g_EnemyMissile15.nY[j] = 0;
					}
				}
			}
}
void UserCrash15()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom15 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime22 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime22 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime22 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime22 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime22 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom15>1600) && (clock() - g_sPlayer.OldTime22>2000))
		if (g_sPlayer.nY == g_EnemyMissile15.nY[j] && (g_EnemyMissile15.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile15.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile15.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom15 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile15.nX[j] = 0;
			g_EnemyMissile15.nY[j] = 0;
			g_EnemyMissile15.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime22 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash15()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy15[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy15[j].Boom < 300)
					{
						gotoxy(g_Enemy15[j].x1 - g_Enemy15[j].x2 + g_Enemy15[j].nX, g_Enemy15[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy15[j].nY && (g_sPlayerMissile[i].nX - g_Enemy15[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy15[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy15[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy15[j].x2 = g_Enemy15[j].nX;
				g_Enemy15[j].Boom = clock();
				g_Enemy15[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy15[j].HP == 0)
				{
					gotoxy(g_Enemy15[j].nX, g_Enemy15[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy15[i].nX = 0; g_Enemy15[i].nY = 0;
					g_Enemy15[j].nLife = 2;
					g_Enemy15[j].nX = -1; g_Enemy15[j].nY = -1;
				}

			}
		}



}

// 오른쪽으로 향하는 2개 일반형
void Enemy16()
{
	if (clock() - extra>22500)
	{
		for (int i = 0; i < 1; i++)
		{
			
			if (g_Enemy16[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy16[i].nLife = 1;
				g_Enemy16[i].nX = 6;
				g_Enemy16[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy16[i].nLife == 1)
		{

			if ((g_Enemy16[i].nY  < 15) && (clock() - g_Enemy16[i].MoveTime1>600))
			{
				g_Enemy16[i].MoveTime1 = clock();
				gotoxy(g_Enemy16[i].nX, g_Enemy16[i].nY);
				printf("      ");
				g_Enemy16[i].nY++;
				gotoxy(g_Enemy16[i].nX, g_Enemy16[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy16[i].nX-3 < 79) && (clock() - g_Enemy16[i].MoveTime2 > 100))
			{
				g_Enemy16[i].MoveTime2 = clock();

				gotoxy(g_Enemy16[i].nX, g_Enemy16[i].nY);
				printf("      ");
				g_Enemy16[i].nX++;
				gotoxy(g_Enemy16[i].nX, g_Enemy16[i].nY);
				printf("◁▣▷");

			}
				if (g_Enemy16[i].nX+5 == 79)
				{
					g_Enemy16[i].nLife = 2;
					gotoxy(g_Enemy16[i].nX, g_Enemy16[i].nY);
					printf("      ");
					g_Enemy16[i].nY = -100;
				}

		}

	}
}
void Enemy_Missile16()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile16.FireTime>2000 && g_Enemy16[i].nLife == 1)
			{
			
				if (g_EnemyMissile16.nLife[j] == 0)
				{
					g_EnemyMissile16.FireTime = clock();
					g_EnemyMissile16.nLife[j] = 1;
					g_EnemyMissile16.nX[j] = g_Enemy16[i].nX + 2;
					g_EnemyMissile16.nY[j] = g_Enemy16[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile16.AppearTime[j] >= 40))
			{
				g_EnemyMissile16.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile16->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile16.nLife[j] == 1)
				{

					if (g_EnemyMissile16.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile16.nX[j], g_EnemyMissile16.nY[j]);
						printf("  ");
						g_EnemyMissile16.nY[j]++;
						gotoxy(g_EnemyMissile16.nX[j], g_EnemyMissile16.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy16[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy16[i].nX = 0;
							g_Enemy16[i].nY = 0;

						}
						g_EnemyMissile16.nLife[j] = 0;
						gotoxy(g_EnemyMissile16.nX[j], g_EnemyMissile16.nY[j]);
						printf("  ");
						g_EnemyMissile16.nX[j] = 0; g_EnemyMissile16.nY[j] = 0;
					}
				}
			}
}
void UserCrash16()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom16 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime23 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime23 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime23 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime23 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime23 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom16>1600) && (clock() - g_sPlayer.OldTime23>2000))
		if (g_sPlayer.nY == g_EnemyMissile16.nY[j] && (g_EnemyMissile16.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile16.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile16.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom16 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile16.nX[j] = 0;
			g_EnemyMissile16.nY[j] = 0;
			g_EnemyMissile16.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime23 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash16()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy16[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy16[j].Boom < 300)
					{
						gotoxy(g_Enemy16[j].x1 - g_Enemy16[j].x2 + g_Enemy16[j].nX, g_Enemy16[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy16[j].nY && (g_sPlayerMissile[i].nX - g_Enemy16[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy16[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy16[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy16[j].x2 = g_Enemy16[j].nX;
				g_Enemy16[j].Boom = clock();
				g_Enemy16[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy16[j].HP == 0)
				{
					gotoxy(g_Enemy16[j].nX, g_Enemy16[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy16[i].nX = 0; g_Enemy16[i].nY = 0;
					g_Enemy16[j].nLife = 2;
					g_Enemy16[j].nX = -1; g_Enemy16[j].nY = -1;
				}

			}
		}



}

void Enemy17()
{
	if (clock() - extra>22500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy17[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy17[i].nLife = 1;
				g_Enemy17[i].nX = 0;
				g_Enemy17[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy17[i].nLife == 1)
		{

			if ((g_Enemy17[i].nY  < 15) && (clock() - g_Enemy17[i].MoveTime1>600))
			{
				g_Enemy17[i].MoveTime1 = clock();
				gotoxy(g_Enemy17[i].nX, g_Enemy17[i].nY);
				printf("      ");
				g_Enemy17[i].nY++;
				gotoxy(g_Enemy17[i].nX, g_Enemy17[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy17[i].nX - 3 < 79) && (clock() - g_Enemy17[i].MoveTime2 > 100))
			{
				g_Enemy17[i].MoveTime2 = clock();

				gotoxy(g_Enemy17[i].nX, g_Enemy17[i].nY);
				printf("      ");
				g_Enemy17[i].nX++;
				gotoxy(g_Enemy17[i].nX, g_Enemy17[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy17[i].nX + 5 == 79)
			{
				g_Enemy17[i].nLife = 2;
				gotoxy(g_Enemy17[i].nX, g_Enemy17[i].nY);
				printf("      ");
				g_Enemy17[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile17()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile17.FireTime>2000 && g_Enemy17[i].nLife == 1)
			{
				
				if (g_EnemyMissile17.nLife[j] == 0)
				{
					g_EnemyMissile17.FireTime = clock();
					g_EnemyMissile17.nLife[j] = 1;
					g_EnemyMissile17.nX[j] = g_Enemy17[i].nX + 2;
					g_EnemyMissile17.nY[j] = g_Enemy17[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile17.AppearTime[j] >= 40))
			{
				g_EnemyMissile17.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile17->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile17.nLife[j] == 1)
				{

					if (g_EnemyMissile17.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile17.nX[j], g_EnemyMissile17.nY[j]);
						printf("  ");
						g_EnemyMissile17.nY[j]++;
						gotoxy(g_EnemyMissile17.nX[j], g_EnemyMissile17.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy17[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy17[i].nX = 0;
							g_Enemy17[i].nY = 0;

						}
						g_EnemyMissile17.nLife[j] = 0;
						gotoxy(g_EnemyMissile17.nX[j], g_EnemyMissile17.nY[j]);
						printf("  ");
						g_EnemyMissile17.nX[j] = 0; g_EnemyMissile17.nY[j] = 0;
					}
				}
			}
}
void UserCrash17()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom17 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime24 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime24 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime24 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime24 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime24 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom17>1600) && (clock() - g_sPlayer.OldTime24>2000))
		if (g_sPlayer.nY == g_EnemyMissile17.nY[j] && (g_EnemyMissile17.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile17.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile17.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom17 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile17.nX[j] = 0;
			g_EnemyMissile17.nY[j] = 0;
			g_EnemyMissile17.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime24 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash17()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy17[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy17[j].Boom < 300)
					{
						gotoxy(g_Enemy17[j].x1 - g_Enemy17[j].x2 + g_Enemy17[j].nX, g_Enemy17[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy17[j].nY && (g_sPlayerMissile[i].nX - g_Enemy17[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy17[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy17[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy17[j].x2 = g_Enemy17[j].nX;
				g_Enemy17[j].Boom = clock();
				g_Enemy17[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy17[j].HP == 0)
				{
					gotoxy(g_Enemy17[j].nX, g_Enemy17[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy17[i].nX = 0; g_Enemy17[i].nY = 0;
					g_Enemy17[j].nLife = 2;
					g_Enemy17[j].nX = -1; g_Enemy17[j].nY = -1;
				}

			}
		}



}
//왼쪽으로 향하는 2개 일반형
void Enemy18()
{
	if (clock() - extra>22500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy18[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy18[i].nLife = 1;
				g_Enemy18[i].nX = 68;
				g_Enemy18[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy18[i].nLife == 1)
		{

			if ((g_Enemy18[i].nY  < 15) && (clock() - g_Enemy18[i].MoveTime1>600))
			{
				g_Enemy18[i].MoveTime1 = clock();
				gotoxy(g_Enemy18[i].nX, g_Enemy18[i].nY);
				printf("      ");
				g_Enemy18[i].nY++;
				gotoxy(g_Enemy18[i].nX, g_Enemy18[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy18[i].nX - 3 < 79) && (clock() - g_Enemy18[i].MoveTime2 > 100))
			{
				g_Enemy18[i].MoveTime2 = clock();

				gotoxy(g_Enemy18[i].nX, g_Enemy18[i].nY);
				printf("      ");
				g_Enemy18[i].nX--;
				gotoxy(g_Enemy18[i].nX, g_Enemy18[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy18[i].nX == 0)
			{
				g_Enemy18[i].nLife = 2;
				gotoxy(g_Enemy18[i].nX, g_Enemy18[i].nY);
				printf("      ");
				g_Enemy18[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile18()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile18.FireTime>2000 && g_Enemy18[i].nLife == 1)
			{
			
				if (g_EnemyMissile18.nLife[j] == 0)
				{
					g_EnemyMissile18.FireTime = clock();
					g_EnemyMissile18.nLife[j] = 1;
					g_EnemyMissile18.nX[j] = g_Enemy18[i].nX + 2;
					g_EnemyMissile18.nY[j] = g_Enemy18[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile18.AppearTime[j] >= 40))
			{
				g_EnemyMissile18.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile18->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile18.nLife[j] == 1)
				{

					if (g_EnemyMissile18.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile18.nX[j], g_EnemyMissile18.nY[j]);
						printf("  ");
						g_EnemyMissile18.nY[j]++;
						gotoxy(g_EnemyMissile18.nX[j], g_EnemyMissile18.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy18[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy18[i].nX = 0;
							g_Enemy18[i].nY = 0;

						}
						g_EnemyMissile18.nLife[j] = 0;
						gotoxy(g_EnemyMissile18.nX[j], g_EnemyMissile18.nY[j]);
						printf("  ");
						g_EnemyMissile18.nX[j] = 0; g_EnemyMissile18.nY[j] = 0;
					}
				}
			}
}
void UserCrash18()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom18 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime25 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime25 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime25 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime25 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime25 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom18>1600) && (clock() - g_sPlayer.OldTime25>2000))
		if (g_sPlayer.nY == g_EnemyMissile18.nY[j] && (g_EnemyMissile18.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile18.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile18.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom18 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile18.nX[j] = 0;
			g_EnemyMissile18.nY[j] = 0;
			g_EnemyMissile18.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime25 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash18()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy18[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy18[j].Boom < 300)
					{
						gotoxy(g_Enemy18[j].x1 - g_Enemy18[j].x2 + g_Enemy18[j].nX, g_Enemy18[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy18[j].nY && (g_sPlayerMissile[i].nX - g_Enemy18[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy18[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy18[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy18[j].x2 = g_Enemy18[j].nX;
				g_Enemy18[j].Boom = clock();
				g_Enemy18[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy18[j].HP == 0)
				{
					gotoxy(g_Enemy18[j].nX, g_Enemy18[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy18[i].nX = 0; g_Enemy18[i].nY = 0;
					g_Enemy18[j].nLife = 2;
					g_Enemy18[j].nX = -1; g_Enemy18[j].nY = -1;
				}

			}
		}



}

void Enemy19()
{
	if (clock() - extra>22500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy19[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy19[i].nLife = 1;
				g_Enemy19[i].nX = 74;
				g_Enemy19[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy19[i].nLife == 1)
		{

			if ((g_Enemy19[i].nY  < 15) && (clock() - g_Enemy19[i].MoveTime1>600))
			{
				g_Enemy19[i].MoveTime1 = clock();
				gotoxy(g_Enemy19[i].nX, g_Enemy19[i].nY);
				printf("      ");
				g_Enemy19[i].nY++;
				gotoxy(g_Enemy19[i].nX, g_Enemy19[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy19[i].nX - 3 < 79) && (clock() - g_Enemy19[i].MoveTime2 > 100))
			{
				g_Enemy19[i].MoveTime2 = clock();

				gotoxy(g_Enemy19[i].nX, g_Enemy19[i].nY);
				printf("      ");
				g_Enemy19[i].nX--;
				gotoxy(g_Enemy19[i].nX, g_Enemy19[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy19[i].nX == 0)
			{
				g_Enemy19[i].nLife = 2;
				gotoxy(g_Enemy19[i].nX, g_Enemy19[i].nY);
				printf("      ");
				g_Enemy19[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile19()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile19.FireTime>2000 && g_Enemy19[i].nLife == 1)
			{
				
				if (g_EnemyMissile19.nLife[j] == 0)
				{
					g_EnemyMissile19.FireTime = clock();
					g_EnemyMissile19.nLife[j] = 1;
					g_EnemyMissile19.nX[j] = g_Enemy19[i].nX + 2;
					g_EnemyMissile19.nY[j] = g_Enemy19[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile19.AppearTime[j] >= 40))
			{
				g_EnemyMissile19.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile19->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile19.nLife[j] == 1)
				{

					if (g_EnemyMissile19.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile19.nX[j], g_EnemyMissile19.nY[j]);
						printf("  ");
						g_EnemyMissile19.nY[j]++;
						gotoxy(g_EnemyMissile19.nX[j], g_EnemyMissile19.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy19[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy19[i].nX = 0;
							g_Enemy19[i].nY = 0;

						}
						g_EnemyMissile19.nLife[j] = 0;
						gotoxy(g_EnemyMissile19.nX[j], g_EnemyMissile19.nY[j]);
						printf("  ");
						g_EnemyMissile19.nX[j] = 0; g_EnemyMissile19.nY[j] = 0;
					}
				}
			}
}
void UserCrash19()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom19 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime26 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime26 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime26 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime26 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime26 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom19>1600) && (clock() - g_sPlayer.OldTime26>2000))
		if (g_sPlayer.nY == g_EnemyMissile19.nY[j] && (g_EnemyMissile19.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile19.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile19.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom19 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile19.nX[j] = 0;
			g_EnemyMissile19.nY[j] = 0;
			g_EnemyMissile19.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime26 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash19()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy19[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy19[j].Boom < 300)
					{
						gotoxy(g_Enemy19[j].x1 - g_Enemy19[j].x2 + g_Enemy19[j].nX, g_Enemy19[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy19[j].nY && (g_sPlayerMissile[i].nX - g_Enemy19[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy19[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy19[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy19[j].x2 = g_Enemy19[j].nX;
				g_Enemy19[j].Boom = clock();
				g_Enemy19[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy19[j].HP == 0)
				{
					gotoxy(g_Enemy19[j].nX, g_Enemy19[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy19[i].nX = 0; g_Enemy19[i].nY = 0;
					g_Enemy19[j].nLife = 2;
					g_Enemy19[j].nX = -1; g_Enemy19[j].nY = -1;
				}

			}
		}



}


//왼쪽에서 천천히 내려오는 4개 추적형
void Enemy20()
{
	if (clock() - extra>27000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy20[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy20[i].nLife = 1;
				g_Enemy20[i].nX = 6;
				g_Enemy20[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy20[i].nLife == 1)
		{

			if ((g_Enemy20[i].nY  < 3) && (clock() - g_Enemy20[i].MoveTime1>100))
			{
				g_Enemy20[i].MoveTime1 = clock();
				gotoxy(g_Enemy20[i].nX, g_Enemy20[i].nY);
				printf("      ");
				g_Enemy20[i].nY++;
				gotoxy(g_Enemy20[i].nX, g_Enemy20[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy20[i].nY >= 3) && (g_Enemy20[i].nY<34))
			{
				if ((clock() - g_Enemy20[i].MoveTime1>500))
				{
					g_Enemy20[i].MoveTime1 = clock();
					gotoxy(g_Enemy20[i].nX, g_Enemy20[i].nY);
					printf("      ");
					g_Enemy20[i].nY++;
					gotoxy(g_Enemy20[i].nX, g_Enemy20[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy20[i].nY == 34)
				{
					g_Enemy20[i].nLife = 2;
					gotoxy(g_Enemy20[i].nX, g_Enemy20[i].nY);
					printf("      ");
					g_Enemy20[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile20()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile20.FireTime>2000 && g_Enemy20[i].nLife == 1)
			{
			
				if (g_EnemyMissile20.nLife[j] == 0)
				{
					g_EnemyMissile20.FireTime = clock();
					g_EnemyMissile20.nLife[j] = 1;
					g_EnemyMissile20.nX[j] = g_Enemy20[i].nX + 2;
					g_EnemyMissile20.nY[j] = g_Enemy20[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile20.AppearTime[j] >= 40))
			{
				g_EnemyMissile20.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile20->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile20.nLife[j] == 1)
				{

					if (g_EnemyMissile20.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile20.nX[j], g_EnemyMissile20.nY[j]);
						printf("  ");
						g_EnemyMissile20.nY[j]++;
						gotoxy(g_EnemyMissile20.nX[j], g_EnemyMissile20.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy20[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy20[i].nX = 0;
							g_Enemy20[i].nY = 0;

						}
						g_EnemyMissile20.nLife[j] = 0;
						gotoxy(g_EnemyMissile20.nX[j], g_EnemyMissile20.nY[j]);
						printf("  ");
						g_EnemyMissile20.nX[j] = 0; g_EnemyMissile20.nY[j] = 0;
					}
				}
			}
}
void UserCrash20()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom20 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime27 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime27 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime27 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime27 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime27 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom20>1600) && (clock() - g_sPlayer.OldTime27>2000))
		if (g_sPlayer.nY == g_EnemyMissile20.nY[j] && (g_EnemyMissile20.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile20.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile20.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom20 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile20.nX[j] = 0;
			g_EnemyMissile20.nY[j] = 0;
			g_EnemyMissile20.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime27 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash20()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy20[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy20[j].Boom < 300)
					{
						gotoxy(g_Enemy20[j].x1 - g_Enemy20[j].x2 + g_Enemy20[j].nX, g_Enemy20[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy20[j].nY && (g_sPlayerMissile[i].nX - g_Enemy20[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy20[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy20[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy20[j].x2 = g_Enemy20[j].nX;
				g_Enemy20[j].Boom = clock();
				g_Enemy20[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy20[j].HP == 0)
				{
					gotoxy(g_Enemy20[j].nX, g_Enemy20[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy20[i].nX = 0; g_Enemy20[i].nY = 0;
					g_Enemy20[j].nLife = 2;
					g_Enemy20[j].nX = -1; g_Enemy20[j].nY = -1;
				}

			}
		}



}

void Enemy21()
{
	if (clock() - extra>27500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy21[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy21[i].nLife = 1;
				g_Enemy21[i].nX = 12;
				g_Enemy21[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy21[i].nLife == 1)
		{

			if ((g_Enemy21[i].nY  < 3) && (clock() - g_Enemy21[i].MoveTime1>100))
			{
				g_Enemy21[i].MoveTime1 = clock();
				gotoxy(g_Enemy21[i].nX, g_Enemy21[i].nY);
				printf("      ");
				g_Enemy21[i].nY++;
				gotoxy(g_Enemy21[i].nX, g_Enemy21[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy21[i].nY >= 3) && (g_Enemy21[i].nY<34))
			{
				if ((clock() - g_Enemy21[i].MoveTime1>500))
				{
					g_Enemy21[i].MoveTime1 = clock();
					gotoxy(g_Enemy21[i].nX, g_Enemy21[i].nY);
					printf("      ");
					g_Enemy21[i].nY++;
					gotoxy(g_Enemy21[i].nX, g_Enemy21[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy21[i].nY == 34)
				{
					g_Enemy21[i].nLife = 2;
					gotoxy(g_Enemy21[i].nX, g_Enemy21[i].nY);
					printf("      ");
					g_Enemy21[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile21()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile21.FireTime>2000 && g_Enemy21[i].nLife == 1)
			{
				
				if (g_EnemyMissile21.nLife[j] == 0)
				{
					g_EnemyMissile21.FireTime = clock();
					g_EnemyMissile21.nLife[j] = 1;
					g_EnemyMissile21.nX[j] = g_Enemy21[i].nX + 2;
					g_EnemyMissile21.nY[j] = g_Enemy21[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile21.AppearTime[j] >= 40))
			{
				g_EnemyMissile21.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile21->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile21.nLife[j] == 1)
				{

					if (g_EnemyMissile21.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile21.nX[j], g_EnemyMissile21.nY[j]);
						printf("  ");
						g_EnemyMissile21.nY[j]++;
						gotoxy(g_EnemyMissile21.nX[j], g_EnemyMissile21.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy21[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy21[i].nX = 0;
							g_Enemy21[i].nY = 0;

						}
						g_EnemyMissile21.nLife[j] = 0;
						gotoxy(g_EnemyMissile21.nX[j], g_EnemyMissile21.nY[j]);
						printf("  ");
						g_EnemyMissile21.nX[j] = 0; g_EnemyMissile21.nY[j] = 0;
					}
				}
			}
}
void UserCrash21()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom21 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime28 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime28 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime28 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime28 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime28 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom21>1600) && (clock() - g_sPlayer.OldTime28>2000))
		if (g_sPlayer.nY == g_EnemyMissile21.nY[j] && (g_EnemyMissile21.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile21.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile21.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom21 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile21.nX[j] = 0;
			g_EnemyMissile21.nY[j] = 0;
			g_EnemyMissile21.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime28 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash21()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy21[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy21[j].Boom < 300)
					{
						gotoxy(g_Enemy21[j].x1 - g_Enemy21[j].x2 + g_Enemy21[j].nX, g_Enemy21[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy21[j].nY && (g_sPlayerMissile[i].nX - g_Enemy21[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy21[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy21[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy21[j].x2 = g_Enemy21[j].nX;
				g_Enemy21[j].Boom = clock();
				g_Enemy21[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy21[j].HP == 0)
				{
					gotoxy(g_Enemy21[j].nX, g_Enemy21[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy21[i].nX = 0; g_Enemy21[i].nY = 0;
					g_Enemy21[j].nLife = 2;
					g_Enemy21[j].nX = -1; g_Enemy21[j].nY = -1;
				}

			}
		}



}

void Enemy22()
{
	if (clock() - extra>28000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy22[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy22[i].nLife = 1;
				g_Enemy22[i].nX = 18;
				g_Enemy22[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy22[i].nLife == 1)
		{

			if ((g_Enemy22[i].nY  < 3) && (clock() - g_Enemy22[i].MoveTime1>100))
			{
				g_Enemy22[i].MoveTime1 = clock();
				gotoxy(g_Enemy22[i].nX, g_Enemy22[i].nY);
				printf("      ");
				g_Enemy22[i].nY++;
				gotoxy(g_Enemy22[i].nX, g_Enemy22[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy22[i].nY >= 3) && (g_Enemy22[i].nY<34))
			{
				if ((clock() - g_Enemy22[i].MoveTime1>500))
				{
					g_Enemy22[i].MoveTime1 = clock();
					gotoxy(g_Enemy22[i].nX, g_Enemy22[i].nY);
					printf("      ");
					g_Enemy22[i].nY++;
					gotoxy(g_Enemy22[i].nX, g_Enemy22[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy22[i].nY == 34)
				{
					g_Enemy22[i].nLife = 2;
					gotoxy(g_Enemy22[i].nX, g_Enemy22[i].nY);
					printf("      ");
					g_Enemy22[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile22()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile22.FireTime>2000 && g_Enemy22[i].nLife == 1)
			{
				
				if (g_EnemyMissile22.nLife[j] == 0)
				{
					g_EnemyMissile22.FireTime = clock();
					g_EnemyMissile22.nLife[j] = 1;
					g_EnemyMissile22.nX[j] = g_Enemy22[i].nX + 2;
					g_EnemyMissile22.nY[j] = g_Enemy22[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile22.AppearTime[j] >= 40))
			{
				g_EnemyMissile22.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile22->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile22.nLife[j] == 1)
				{

					if (g_EnemyMissile22.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile22.nX[j], g_EnemyMissile22.nY[j]);
						printf("  ");
						g_EnemyMissile22.nY[j]++;
						gotoxy(g_EnemyMissile22.nX[j], g_EnemyMissile22.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy22[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy22[i].nX = 0;
							g_Enemy22[i].nY = 0;

						}
						g_EnemyMissile22.nLife[j] = 0;
						gotoxy(g_EnemyMissile22.nX[j], g_EnemyMissile22.nY[j]);
						printf("  ");
						g_EnemyMissile22.nX[j] = 0; g_EnemyMissile22.nY[j] = 0;
					}
				}
			}
}
void UserCrash22()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom22 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime29 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime29 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime29 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime29 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime29 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom22>1600) && (clock() - g_sPlayer.OldTime29>2000))
		if (g_sPlayer.nY == g_EnemyMissile22.nY[j] && (g_EnemyMissile22.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile22.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile22.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom22 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile22.nX[j] = 0;
			g_EnemyMissile22.nY[j] = 0;
			g_EnemyMissile22.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime29 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash22()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy22[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy22[j].Boom < 300)
					{
						gotoxy(g_Enemy22[j].x1 - g_Enemy22[j].x2 + g_Enemy22[j].nX, g_Enemy22[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy22[j].nY && (g_sPlayerMissile[i].nX - g_Enemy22[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy22[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy22[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy22[j].x2 = g_Enemy22[j].nX;
				g_Enemy22[j].Boom = clock();
				g_Enemy22[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy22[j].HP == 0)
				{
					gotoxy(g_Enemy22[j].nX, g_Enemy22[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy22[i].nX = 0; g_Enemy22[i].nY = 0;
					g_Enemy22[j].nLife = 2;
					g_Enemy22[j].nX = -1; g_Enemy22[j].nY = -1;
				}

			}
		}



}

void Enemy23()
{
	if (clock() - extra>28500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy23[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy23[i].nLife = 1;
				g_Enemy23[i].nX = 24;
				g_Enemy23[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy23[i].nLife == 1)
		{

			if ((g_Enemy23[i].nY  < 3) && (clock() - g_Enemy23[i].MoveTime1>100))
			{
				g_Enemy23[i].MoveTime1 = clock();
				gotoxy(g_Enemy23[i].nX, g_Enemy23[i].nY);
				printf("      ");
				g_Enemy23[i].nY++;
				gotoxy(g_Enemy23[i].nX, g_Enemy23[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy23[i].nY >= 3) && (g_Enemy23[i].nY<34))
			{
				if ((clock() - g_Enemy23[i].MoveTime1>500))
				{
					g_Enemy23[i].MoveTime1 = clock();
					gotoxy(g_Enemy23[i].nX, g_Enemy23[i].nY);
					printf("      ");
					g_Enemy23[i].nY++;
					gotoxy(g_Enemy23[i].nX, g_Enemy23[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy23[i].nY == 34)
				{
					g_Enemy23[i].nLife = 2;
					gotoxy(g_Enemy23[i].nX, g_Enemy23[i].nY);
					printf("      ");
					g_Enemy23[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile23()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile23.FireTime>2000 && g_Enemy23[i].nLife == 1)
			{
				
				if (g_EnemyMissile23.nLife[j] == 0)
				{
					g_EnemyMissile23.FireTime = clock();
					g_EnemyMissile23.nLife[j] = 1;
					g_EnemyMissile23.nX[j] = g_Enemy23[i].nX + 2;
					g_EnemyMissile23.nY[j] = g_Enemy23[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile23.AppearTime[j] >= 40))
			{
				g_EnemyMissile23.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile23->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile23.nLife[j] == 1)
				{

					if (g_EnemyMissile23.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile23.nX[j], g_EnemyMissile23.nY[j]);
						printf("  ");
						g_EnemyMissile23.nY[j]++;
						gotoxy(g_EnemyMissile23.nX[j], g_EnemyMissile23.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy23[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy23[i].nX = 0;
							g_Enemy23[i].nY = 0;

						}
						g_EnemyMissile23.nLife[j] = 0;
						gotoxy(g_EnemyMissile23.nX[j], g_EnemyMissile23.nY[j]);
						printf("  ");
						g_EnemyMissile23.nX[j] = 0; g_EnemyMissile23.nY[j] = 0;
					}
				}
			}
}
void UserCrash23()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom23 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime30 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime30 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime30 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime30 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime30 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom23>1600) && (clock() - g_sPlayer.OldTime30>2000))
		if (g_sPlayer.nY == g_EnemyMissile23.nY[j] && (g_EnemyMissile23.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile23.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile23.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom23 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile23.nX[j] = 0;
			g_EnemyMissile23.nY[j] = 0;
			g_EnemyMissile23.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime30 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash23()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy23[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy23[j].Boom < 300)
					{
						gotoxy(g_Enemy23[j].x1 - g_Enemy23[j].x2 + g_Enemy23[j].nX, g_Enemy23[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy23[j].nY && (g_sPlayerMissile[i].nX - g_Enemy23[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy23[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy23[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy23[j].x2 = g_Enemy23[j].nX;
				g_Enemy23[j].Boom = clock();
				g_Enemy23[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy23[j].HP == 0)
				{
					gotoxy(g_Enemy23[j].nX, g_Enemy23[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy23[i].nX = 0; g_Enemy23[i].nY = 0;
					g_Enemy23[j].nLife = 2;
					g_Enemy23[j].nX = -1; g_Enemy23[j].nY = -1;
				}

			}
		}



}

//오른쪽에서 천천히 내려오는 4개 추적형
void Enemy24()
{
	if (clock() - extra>27000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy24[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy24[i].nLife = 1;
				g_Enemy24[i].nX = 68;
				g_Enemy24[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy24[i].nLife == 1)
		{

			if ((g_Enemy24[i].nY  < 3) && (clock() - g_Enemy24[i].MoveTime1>100))
			{
				g_Enemy24[i].MoveTime1 = clock();
				gotoxy(g_Enemy24[i].nX, g_Enemy24[i].nY);
				printf("      ");
				g_Enemy24[i].nY++;
				gotoxy(g_Enemy24[i].nX, g_Enemy24[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy24[i].nY >= 3) && (g_Enemy24[i].nY<34))
			{
				if ((clock() - g_Enemy24[i].MoveTime1>500))
				{
					g_Enemy24[i].MoveTime1 = clock();
					gotoxy(g_Enemy24[i].nX, g_Enemy24[i].nY);
					printf("      ");
					g_Enemy24[i].nY++;
					gotoxy(g_Enemy24[i].nX, g_Enemy24[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy24[i].nY == 34)
				{
					g_Enemy24[i].nLife = 2;
					gotoxy(g_Enemy24[i].nX, g_Enemy24[i].nY);
					printf("      ");
					g_Enemy24[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile24()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile24.FireTime>2000 && g_Enemy24[i].nLife == 1)
			{
				
				if (g_EnemyMissile24.nLife[j] == 0)
				{
					g_EnemyMissile24.FireTime = clock();

					g_EnemyMissile24.nLife[j] = 1;
					g_EnemyMissile24.nX[j] = g_Enemy24[i].nX + 2;
					g_EnemyMissile24.nY[j] = g_Enemy24[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile24.AppearTime[j] >= 40))
			{
				g_EnemyMissile24.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile24->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile24.nLife[j] == 1)
				{

					if (g_EnemyMissile24.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile24.nX[j], g_EnemyMissile24.nY[j]);
						printf("  ");
						g_EnemyMissile24.nY[j]++;
						gotoxy(g_EnemyMissile24.nX[j], g_EnemyMissile24.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy24[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy24[i].nX = 0;
							g_Enemy24[i].nY = 0;

						}
						g_EnemyMissile24.nLife[j] = 0;
						gotoxy(g_EnemyMissile24.nX[j], g_EnemyMissile24.nY[j]);
						printf("  ");
						g_EnemyMissile24.nX[j] = 0; g_EnemyMissile24.nY[j] = 0;
					}
				}
			}
}
void UserCrash24()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom24 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime31 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime31 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime31 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime31 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime31 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom24>1600) && (clock() - g_sPlayer.OldTime31>2000))
		if (g_sPlayer.nY == g_EnemyMissile24.nY[j] && (g_EnemyMissile24.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile24.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile24.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom24 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile24.nX[j] = 0;
			g_EnemyMissile24.nY[j] = 0;
			g_EnemyMissile24.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime31 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash24()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy24[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy24[j].Boom < 300)
					{
						gotoxy(g_Enemy24[j].x1 - g_Enemy24[j].x2 + g_Enemy24[j].nX, g_Enemy24[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy24[j].nY && (g_sPlayerMissile[i].nX - g_Enemy24[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy24[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy24[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy24[j].x2 = g_Enemy24[j].nX;
				g_Enemy24[j].Boom = clock();
				g_Enemy24[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy24[j].HP == 0)
				{
					gotoxy(g_Enemy24[j].nX, g_Enemy24[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy24[i].nX = 0; g_Enemy24[i].nY = 0;
					g_Enemy24[j].nLife = 2;
					g_Enemy24[j].nX = -1; g_Enemy24[j].nY = -1;
				}

			}
		}



}

void Enemy25()
{
	if (clock() - extra>27500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy25[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy25[i].nLife = 1;
				g_Enemy25[i].nX = 62;
				g_Enemy25[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy25[i].nLife == 1)
		{

			if ((g_Enemy25[i].nY  < 3) && (clock() - g_Enemy25[i].MoveTime1>100))
			{
				g_Enemy25[i].MoveTime1 = clock();
				gotoxy(g_Enemy25[i].nX, g_Enemy25[i].nY);
				printf("      ");
				g_Enemy25[i].nY++;
				gotoxy(g_Enemy25[i].nX, g_Enemy25[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy25[i].nY >= 3) && (g_Enemy25[i].nY<34))
			{
				if ((clock() - g_Enemy25[i].MoveTime1>500))
				{
					g_Enemy25[i].MoveTime1 = clock();
					gotoxy(g_Enemy25[i].nX, g_Enemy25[i].nY);
					printf("      ");
					g_Enemy25[i].nY++;
					gotoxy(g_Enemy25[i].nX, g_Enemy25[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy25[i].nY == 34)
				{
					g_Enemy25[i].nLife = 2;
					gotoxy(g_Enemy25[i].nX, g_Enemy25[i].nY);
					printf("      ");
					g_Enemy25[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile25()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile25.FireTime>2000 && g_Enemy25[i].nLife == 1)
			{
				
				if (g_EnemyMissile25.nLife[j] == 0)
				{
					g_EnemyMissile25.FireTime = clock();
					g_EnemyMissile25.nLife[j] = 1;
					g_EnemyMissile25.nX[j] = g_Enemy25[i].nX + 2;
					g_EnemyMissile25.nY[j] = g_Enemy25[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile25.AppearTime[j] >= 40))
			{
				g_EnemyMissile25.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile25->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile25.nLife[j] == 1)
				{

					if (g_EnemyMissile25.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile25.nX[j], g_EnemyMissile25.nY[j]);
						printf("  ");
						g_EnemyMissile25.nY[j]++;
						gotoxy(g_EnemyMissile25.nX[j], g_EnemyMissile25.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy25[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy25[i].nX = 0;
							g_Enemy25[i].nY = 0;

						}
						g_EnemyMissile25.nLife[j] = 0;
						gotoxy(g_EnemyMissile25.nX[j], g_EnemyMissile25.nY[j]);
						printf("  ");
						g_EnemyMissile25.nX[j] = 0; g_EnemyMissile25.nY[j] = 0;
					}
				}
			}
}
void UserCrash25()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom25 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime32 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime32 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime32 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime32 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime32 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom25>1600) && (clock() - g_sPlayer.OldTime32>2000))
		if (g_sPlayer.nY == g_EnemyMissile25.nY[j] && (g_EnemyMissile25.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile25.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile25.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom25 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile25.nX[j] = 0;
			g_EnemyMissile25.nY[j] = 0;
			g_EnemyMissile25.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime32 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash25()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy25[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy25[j].Boom < 300)
					{
						gotoxy(g_Enemy25[j].x1 - g_Enemy25[j].x2 + g_Enemy25[j].nX, g_Enemy25[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy25[j].nY && (g_sPlayerMissile[i].nX - g_Enemy25[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy25[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy25[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy25[j].x2 = g_Enemy25[j].nX;
				g_Enemy25[j].Boom = clock();
				g_Enemy25[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy25[j].HP == 0)
				{
					gotoxy(g_Enemy25[j].nX, g_Enemy25[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy25[i].nX = 0; g_Enemy25[i].nY = 0;
					g_Enemy25[j].nLife = 2;
					g_Enemy25[j].nX = -1; g_Enemy25[j].nY = -1;
				}

			}
		}



}

void Enemy26()
{
	if (clock() - extra>28000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy26[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy26[i].nLife = 1;
				g_Enemy26[i].nX = 56;
				g_Enemy26[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy26[i].nLife == 1)
		{

			if ((g_Enemy26[i].nY  < 3) && (clock() - g_Enemy26[i].MoveTime1>100))
			{
				g_Enemy26[i].MoveTime1 = clock();
				gotoxy(g_Enemy26[i].nX, g_Enemy26[i].nY);
				printf("      ");
				g_Enemy26[i].nY++;
				gotoxy(g_Enemy26[i].nX, g_Enemy26[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy26[i].nY >= 3) && (g_Enemy26[i].nY<34))
			{
				if ((clock() - g_Enemy26[i].MoveTime1>500))
				{
					g_Enemy26[i].MoveTime1 = clock();
					gotoxy(g_Enemy26[i].nX, g_Enemy26[i].nY);
					printf("      ");
					g_Enemy26[i].nY++;
					gotoxy(g_Enemy26[i].nX, g_Enemy26[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy26[i].nY == 34)
				{
					g_Enemy26[i].nLife = 2;
					gotoxy(g_Enemy26[i].nX, g_Enemy26[i].nY);
					printf("      ");
					g_Enemy26[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile26()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile26.FireTime>2000 && g_Enemy26[i].nLife == 1)
			{
				
				if (g_EnemyMissile26.nLife[j] == 0)
				{
					g_EnemyMissile26.FireTime = clock();
					g_EnemyMissile26.nLife[j] = 1;
					g_EnemyMissile26.nX[j] = g_Enemy26[i].nX + 2;
					g_EnemyMissile26.nY[j] = g_Enemy26[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile26.AppearTime[j] >= 40))
			{
				g_EnemyMissile26.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile26->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile26.nLife[j] == 1)
				{

					if (g_EnemyMissile26.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile26.nX[j], g_EnemyMissile26.nY[j]);
						printf("  ");
						g_EnemyMissile26.nY[j]++;
						gotoxy(g_EnemyMissile26.nX[j], g_EnemyMissile26.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy26[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy26[i].nX = 0;
							g_Enemy26[i].nY = 0;

						}
						g_EnemyMissile26.nLife[j] = 0;
						gotoxy(g_EnemyMissile26.nX[j], g_EnemyMissile26.nY[j]);
						printf("  ");
						g_EnemyMissile26.nX[j] = 0; g_EnemyMissile26.nY[j] = 0;
					}
				}
			}
}
void UserCrash26()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom26 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime33 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime33 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime33 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime33 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime33 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom26>1600) && (clock() - g_sPlayer.OldTime33>2000))
		if (g_sPlayer.nY == g_EnemyMissile26.nY[j] && (g_EnemyMissile26.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile26.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile26.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom26 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile26.nX[j] = 0;
			g_EnemyMissile26.nY[j] = 0;
			g_EnemyMissile26.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime33 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash26()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy26[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy26[j].Boom < 300)
					{
						gotoxy(g_Enemy26[j].x1 - g_Enemy26[j].x2 + g_Enemy26[j].nX, g_Enemy26[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy26[j].nY && (g_sPlayerMissile[i].nX - g_Enemy26[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy26[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy26[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy26[j].x2 = g_Enemy26[j].nX;
				g_Enemy26[j].Boom = clock();
				g_Enemy26[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy26[j].HP == 0)
				{
					gotoxy(g_Enemy26[j].nX, g_Enemy26[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy26[i].nX = 0; g_Enemy26[i].nY = 0;
					g_Enemy26[j].nLife = 2;
					g_Enemy26[j].nX = -1; g_Enemy26[j].nY = -1;
				}

			}
		}



}


void Enemy27()
{
	if (clock() - extra>28500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy27[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy27[i].nLife = 1;
				g_Enemy27[i].nX =50;
				g_Enemy27[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy27[i].nLife == 1)
		{

			if ((g_Enemy27[i].nY  < 3) && (clock() - g_Enemy27[i].MoveTime1>100))
			{
				g_Enemy27[i].MoveTime1 = clock();
				gotoxy(g_Enemy27[i].nX, g_Enemy27[i].nY);
				printf("      ");
				g_Enemy27[i].nY++;
				gotoxy(g_Enemy27[i].nX, g_Enemy27[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy27[i].nY >= 3) && (g_Enemy27[i].nY<34))
			{
				if ((clock() - g_Enemy27[i].MoveTime1>500))
				{
					g_Enemy27[i].MoveTime1 = clock();
					gotoxy(g_Enemy27[i].nX, g_Enemy27[i].nY);
					printf("      ");
					g_Enemy27[i].nY++;
					gotoxy(g_Enemy27[i].nX, g_Enemy27[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy27[i].nY == 34)
				{
					g_Enemy27[i].nLife = 2;
					gotoxy(g_Enemy27[i].nX, g_Enemy27[i].nY);
					printf("      ");
					g_Enemy27[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile27()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile27.FireTime>2000 && g_Enemy27[i].nLife == 1)
			{
				
				if (g_EnemyMissile27.nLife[j] == 0)
				{
					g_EnemyMissile27.FireTime = clock();
					g_EnemyMissile27.nLife[j] = 1;
					g_EnemyMissile27.nX[j] = g_Enemy27[i].nX + 2;
					g_EnemyMissile27.nY[j] = g_Enemy27[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile27.AppearTime[j] >= 40))
			{
				g_EnemyMissile27.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile27->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile27.nLife[j] == 1)
				{

					if (g_EnemyMissile27.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile27.nX[j], g_EnemyMissile27.nY[j]);
						printf("  ");
						g_EnemyMissile27.nY[j]++;
						gotoxy(g_EnemyMissile27.nX[j], g_EnemyMissile27.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy27[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy27[i].nX = 0;
							g_Enemy27[i].nY = 0;

						}
						g_EnemyMissile27.nLife[j] = 0;
						gotoxy(g_EnemyMissile27.nX[j], g_EnemyMissile27.nY[j]);
						printf("  ");
						g_EnemyMissile27.nX[j] = 0; g_EnemyMissile27.nY[j] = 0;
					}
				}
			}
}
void UserCrash27()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom27 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime34 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime34 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime34 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime34 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime34 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom27>1600) && (clock() - g_sPlayer.OldTime34>2000))
		if (g_sPlayer.nY == g_EnemyMissile27.nY[j] && (g_EnemyMissile27.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile27.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile27.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom27 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile27.nX[j] = 0;
			g_EnemyMissile27.nY[j] = 0;
			g_EnemyMissile27.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime34 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash27()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy27[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy27[j].Boom < 300)
					{
						gotoxy(g_Enemy27[j].x1 - g_Enemy27[j].x2 + g_Enemy27[j].nX, g_Enemy27[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy27[j].nY && (g_sPlayerMissile[i].nX - g_Enemy27[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy27[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy27[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy27[j].x2 = g_Enemy27[j].nX;
				g_Enemy27[j].Boom = clock();
				g_Enemy27[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy27[j].HP == 0)
				{
					gotoxy(g_Enemy27[j].nX, g_Enemy27[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy27[i].nX = 0; g_Enemy27[i].nY = 0;
					g_Enemy27[j].nLife = 2;
					g_Enemy27[j].nX = -1; g_Enemy27[j].nY = -1;
				}

			}
		}



}


// 오른쪽으로 향하는 2개 일반형
void Enemy28()
{
	if (clock() - extra>30000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy28[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy28[i].nLife = 1;
				g_Enemy28[i].nX = 6;
				g_Enemy28[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy28[i].nLife == 1)
		{

			if ((g_Enemy28[i].nY  < 15) && (clock() - g_Enemy28[i].MoveTime1>600))
			{
				g_Enemy28[i].MoveTime1 = clock();
				gotoxy(g_Enemy28[i].nX, g_Enemy28[i].nY);
				printf("      ");
				g_Enemy28[i].nY++;
				gotoxy(g_Enemy28[i].nX, g_Enemy28[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy28[i].nX - 3 < 79) && (clock() - g_Enemy28[i].MoveTime2 > 100))
			{
				g_Enemy28[i].MoveTime2 = clock();

				gotoxy(g_Enemy28[i].nX, g_Enemy28[i].nY);
				printf("      ");
				g_Enemy28[i].nX++;
				gotoxy(g_Enemy28[i].nX, g_Enemy28[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy28[i].nX + 5 == 79)
			{
				g_Enemy28[i].nLife = 2;
				gotoxy(g_Enemy28[i].nX, g_Enemy28[i].nY);
				printf("      ");
				g_Enemy28[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile28()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile28.FireTime>2000 && g_Enemy28[i].nLife == 1)
			{
				
				if (g_EnemyMissile28.nLife[j] == 0)
				{
					g_EnemyMissile28.FireTime = clock();
					g_EnemyMissile28.nLife[j] = 1;
					g_EnemyMissile28.nX[j] = g_Enemy28[i].nX + 2;
					g_EnemyMissile28.nY[j] = g_Enemy28[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile28.AppearTime[j] >= 40))
			{
				g_EnemyMissile28.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile28->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile28.nLife[j] == 1)
				{

					if (g_EnemyMissile28.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile28.nX[j], g_EnemyMissile28.nY[j]);
						printf("  ");
						g_EnemyMissile28.nY[j]++;
						gotoxy(g_EnemyMissile28.nX[j], g_EnemyMissile28.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy28[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy28[i].nX = 0;
							g_Enemy28[i].nY = 0;

						}
						g_EnemyMissile28.nLife[j] = 0;
						gotoxy(g_EnemyMissile28.nX[j], g_EnemyMissile28.nY[j]);
						printf("  ");
						g_EnemyMissile28.nX[j] = 0; g_EnemyMissile28.nY[j] = 0;
					}
				}
			}
}
void UserCrash28()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom28 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime35 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime35 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime35 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime35 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime35 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom28>1600) && (clock() - g_sPlayer.OldTime35>2000))
		if (g_sPlayer.nY == g_EnemyMissile28.nY[j] && (g_EnemyMissile28.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile28.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile28.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom28 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile28.nX[j] = 0;
			g_EnemyMissile28.nY[j] = 0;
			g_EnemyMissile28.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime35 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash28()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy28[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy28[j].Boom < 300)
					{
						gotoxy(g_Enemy28[j].x1 - g_Enemy28[j].x2 + g_Enemy28[j].nX, g_Enemy28[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy28[j].nY && (g_sPlayerMissile[i].nX - g_Enemy28[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy28[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy28[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy28[j].x2 = g_Enemy28[j].nX;
				g_Enemy28[j].Boom = clock();
				g_Enemy28[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy28[j].HP == 0)
				{
					gotoxy(g_Enemy28[j].nX, g_Enemy28[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy28[i].nX = 0; g_Enemy28[i].nY = 0;
					g_Enemy28[j].nLife = 2;
					g_Enemy28[j].nX = -1; g_Enemy28[j].nY = -1;
				}

			}
		}



}


void Enemy29()
{
	if (clock() - extra>30000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy29[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy29[i].nLife = 1;
				g_Enemy29[i].nX = 0;
				g_Enemy29[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy29[i].nLife == 1)
		{

			if ((g_Enemy29[i].nY  < 15) && (clock() - g_Enemy29[i].MoveTime1>600))
			{
				g_Enemy29[i].MoveTime1 = clock();
				gotoxy(g_Enemy29[i].nX, g_Enemy29[i].nY);
				printf("      ");
				g_Enemy29[i].nY++;
				gotoxy(g_Enemy29[i].nX, g_Enemy29[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy29[i].nX - 3 < 79) && (clock() - g_Enemy29[i].MoveTime2 > 100))
			{
				g_Enemy29[i].MoveTime2 = clock();

				gotoxy(g_Enemy29[i].nX, g_Enemy29[i].nY);
				printf("      ");
				g_Enemy29[i].nX++;
				gotoxy(g_Enemy29[i].nX, g_Enemy29[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy29[i].nX + 5 == 79)
			{
				g_Enemy29[i].nLife = 2;
				gotoxy(g_Enemy29[i].nX, g_Enemy29[i].nY);
				printf("      ");
				g_Enemy29[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile29()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile29.FireTime>2000 && g_Enemy29[i].nLife == 1)
			{
				
				if (g_EnemyMissile29.nLife[j] == 0)
				{
					g_EnemyMissile29.FireTime = clock();
					g_EnemyMissile29.nLife[j] = 1;
					g_EnemyMissile29.nX[j] = g_Enemy29[i].nX + 2;
					g_EnemyMissile29.nY[j] = g_Enemy29[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile29.AppearTime[j] >= 40))
			{
				g_EnemyMissile29.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile29->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile29.nLife[j] == 1)
				{

					if (g_EnemyMissile29.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile29.nX[j], g_EnemyMissile29.nY[j]);
						printf("  ");
						g_EnemyMissile29.nY[j]++;
						gotoxy(g_EnemyMissile29.nX[j], g_EnemyMissile29.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy29[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy29[i].nX = 0;
							g_Enemy29[i].nY = 0;

						}
						g_EnemyMissile29.nLife[j] = 0;
						gotoxy(g_EnemyMissile29.nX[j], g_EnemyMissile29.nY[j]);
						printf("  ");
						g_EnemyMissile29.nX[j] = 0; g_EnemyMissile29.nY[j] = 0;
					}
				}
			}
}
void UserCrash29()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom29 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime36 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime36 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime36 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime36 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime36 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom29>1600) && (clock() - g_sPlayer.OldTime36>2000))
		if (g_sPlayer.nY == g_EnemyMissile29.nY[j] && (g_EnemyMissile29.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile29.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile29.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom29 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile29.nX[j] = 0;
			g_EnemyMissile29.nY[j] = 0;
			g_EnemyMissile29.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime36 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash29()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy29[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy29[j].Boom < 300)
					{
						gotoxy(g_Enemy29[j].x1 - g_Enemy29[j].x2 + g_Enemy29[j].nX, g_Enemy29[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy29[j].nY && (g_sPlayerMissile[i].nX - g_Enemy29[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy29[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy29[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy29[j].x2 = g_Enemy29[j].nX;
				g_Enemy29[j].Boom = clock();
				g_Enemy29[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy29[j].HP == 0)
				{
					gotoxy(g_Enemy29[j].nX, g_Enemy29[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy29[i].nX = 0; g_Enemy29[i].nY = 0;
					g_Enemy29[j].nLife = 2;
					g_Enemy29[j].nX = -1; g_Enemy29[j].nY = -1;
				}

			}
		}



}

//왼쪽으로 향하는 2개 일반형
void Enemy30()
{
	if (clock() - extra>30000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy30[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy30[i].nLife = 1;
				g_Enemy30[i].nX = 68;
				g_Enemy30[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy30[i].nLife == 1)
		{

			if ((g_Enemy30[i].nY  < 15) && (clock() - g_Enemy30[i].MoveTime1>600))
			{
				g_Enemy30[i].MoveTime1 = clock();
				gotoxy(g_Enemy30[i].nX, g_Enemy30[i].nY);
				printf("      ");
				g_Enemy30[i].nY++;
				gotoxy(g_Enemy30[i].nX, g_Enemy30[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy30[i].nX - 3 < 79) && (clock() - g_Enemy30[i].MoveTime2 > 100))
			{
				g_Enemy30[i].MoveTime2 = clock();

				gotoxy(g_Enemy30[i].nX, g_Enemy30[i].nY);
				printf("      ");
				g_Enemy30[i].nX--;
				gotoxy(g_Enemy30[i].nX, g_Enemy30[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy30[i].nX == 0)
			{
				g_Enemy30[i].nLife = 2;
				gotoxy(g_Enemy30[i].nX, g_Enemy30[i].nY);
				printf("      ");
				g_Enemy30[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile30()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile30.FireTime>2000 && g_Enemy31[i].nLife == 1)
			{
				
				if (g_EnemyMissile30.nLife[j] == 0)
				{
					g_EnemyMissile30.FireTime = clock();
					g_EnemyMissile30.nLife[j] = 1;
					g_EnemyMissile30.nX[j] = g_Enemy30[i].nX + 2;
					g_EnemyMissile30.nY[j] = g_Enemy30[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile30.AppearTime[j] >= 40))
			{
				g_EnemyMissile30.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile30->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile30.nLife[j] == 1)
				{

					if (g_EnemyMissile30.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile30.nX[j], g_EnemyMissile30.nY[j]);
						printf("  ");
						g_EnemyMissile30.nY[j]++;
						gotoxy(g_EnemyMissile30.nX[j], g_EnemyMissile30.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy30[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy30[i].nX = 0;
							g_Enemy30[i].nY = 0;

						}
						g_EnemyMissile30.nLife[j] = 0;
						gotoxy(g_EnemyMissile30.nX[j], g_EnemyMissile30.nY[j]);
						printf("  ");
						g_EnemyMissile30.nX[j] = 0; g_EnemyMissile30.nY[j] = 0;
					}
				}
			}
}
void UserCrash30()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom30 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime37 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime37 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime37 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime37 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime37 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom30>1600) && (clock() - g_sPlayer.OldTime37>2000))
		if (g_sPlayer.nY == g_EnemyMissile30.nY[j] && (g_EnemyMissile30.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile30.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile30.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom30 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile30.nX[j] = 0;
			g_EnemyMissile30.nY[j] = 0;
			g_EnemyMissile30.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime37 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash30()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy30[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy30[j].Boom < 300)
					{
						gotoxy(g_Enemy30[j].x1 - g_Enemy30[j].x2 + g_Enemy30[j].nX, g_Enemy30[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy30[j].nY && (g_sPlayerMissile[i].nX - g_Enemy30[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy30[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy30[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy30[j].x2 = g_Enemy30[j].nX;
				g_Enemy30[j].Boom = clock();
				g_Enemy30[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy30[j].HP == 0)
				{
					gotoxy(g_Enemy30[j].nX, g_Enemy30[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy30[i].nX = 0; g_Enemy30[i].nY = 0;
					g_Enemy30[j].nLife = 2;
					g_Enemy30[j].nX = -1; g_Enemy30[j].nY = -1;
				}

			}
		}



}

void Enemy31()
{
	if (clock() - extra>30000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy31[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy31[i].nLife = 1;
				g_Enemy31[i].nX = 74;
				g_Enemy31[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy31[i].nLife == 1)
		{

			if ((g_Enemy31[i].nY  < 15) && (clock() - g_Enemy31[i].MoveTime1>600))
			{
				g_Enemy31[i].MoveTime1 = clock();
				gotoxy(g_Enemy31[i].nX, g_Enemy31[i].nY);
				printf("      ");
				g_Enemy31[i].nY++;
				gotoxy(g_Enemy31[i].nX, g_Enemy31[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy31[i].nX - 3 < 79) && (clock() - g_Enemy31[i].MoveTime2 > 100))
			{
				g_Enemy31[i].MoveTime2 = clock();

				gotoxy(g_Enemy31[i].nX, g_Enemy31[i].nY);
				printf("      ");
				g_Enemy31[i].nX--;
				gotoxy(g_Enemy31[i].nX, g_Enemy31[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy31[i].nX == 0)
			{
				g_Enemy31[i].nLife = 2;
				gotoxy(g_Enemy31[i].nX, g_Enemy31[i].nY);
				printf("      ");
				g_Enemy31[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile31()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile31.FireTime>2000 && g_Enemy31[i].nLife == 1)
			{
				
				if (g_EnemyMissile31.nLife[j] == 0)
				{
					g_EnemyMissile31.FireTime = clock();
					g_EnemyMissile31.nLife[j] = 1;
					g_EnemyMissile31.nX[j] = g_Enemy31[i].nX + 2;
					g_EnemyMissile31.nY[j] = g_Enemy31[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile31.AppearTime[j] >= 40))
			{
				g_EnemyMissile31.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile31->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile31.nLife[j] == 1)
				{

					if (g_EnemyMissile31.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile31.nX[j], g_EnemyMissile31.nY[j]);
						printf("  ");
						g_EnemyMissile31.nY[j]++;
						gotoxy(g_EnemyMissile31.nX[j], g_EnemyMissile31.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy31[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy31[i].nX = 0;
							g_Enemy31[i].nY = 0;

						}
						g_EnemyMissile31.nLife[j] = 0;
						gotoxy(g_EnemyMissile31.nX[j], g_EnemyMissile31.nY[j]);
						printf("  ");
						g_EnemyMissile31.nX[j] = 0; g_EnemyMissile31.nY[j] = 0;
					}
				}
			}
}
void UserCrash31()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom31 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime38 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime38 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime38 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime38 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime38 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom31>1600) && (clock() - g_sPlayer.OldTime38>2000))
		if (g_sPlayer.nY == g_EnemyMissile31.nY[j] && (g_EnemyMissile31.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile31.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile31.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom31 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile31.nX[j] = 0;
			g_EnemyMissile31.nY[j] = 0;
			g_EnemyMissile31.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime38 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash31()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy31[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy31[j].Boom < 300)
					{
						gotoxy(g_Enemy31[j].x1 - g_Enemy31[j].x2 + g_Enemy31[j].nX, g_Enemy31[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy31[j].nY && (g_sPlayerMissile[i].nX - g_Enemy31[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy31[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy31[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy31[j].x2 = g_Enemy31[j].nX;
				g_Enemy31[j].Boom = clock();
				g_Enemy31[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy31[j].HP == 0)
				{
					gotoxy(g_Enemy31[j].nX, g_Enemy31[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy31[i].nX = 0; g_Enemy31[i].nY = 0;
					g_Enemy31[j].nLife = 2;
					g_Enemy31[j].nX = -1; g_Enemy31[j].nY = -1;
				}

			}
		}



}

//왼쪽에서 천천히 내려오는 3개의 혼합형
void Enemy32()
{
	if (clock() - extra>35000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy32[i].nLife == 0)
			{
				//g_Enemy32[i].MoveTime1 = clock();
				g_Enemy32[i].nLife = 1;
				g_Enemy32[i].nX = 3;
				g_Enemy32[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy32[i].nLife == 1)
		{

			if ((g_Enemy32[i].nY  < 3) && (clock() - g_Enemy32[i].MoveTime1>100))
			{
				g_Enemy32[i].MoveTime1 = clock();
				gotoxy(g_Enemy32[i].nX, g_Enemy32[i].nY);
				printf("      ");
				g_Enemy32[i].nY++;
				gotoxy(g_Enemy32[i].nX, g_Enemy32[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy32[i].nY >= 3) && (g_Enemy32[i].nY<34))
			{
				if ((clock() - g_Enemy32[i].MoveTime1>500))
				{
					g_Enemy32[i].MoveTime1 = clock();
					gotoxy(g_Enemy32[i].nX, g_Enemy32[i].nY);
					printf("      ");
					g_Enemy32[i].nY++;
					gotoxy(g_Enemy32[i].nX, g_Enemy32[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy32[i].nY == 34)
				{
					g_Enemy32[i].nLife = 2;
					gotoxy(g_Enemy32[i].nX, g_Enemy32[i].nY);
					printf("      ");
					g_Enemy32[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile32()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile32.FireTime>2000 && g_Enemy32[i].nLife == 1)
			{
				
				if (g_EnemyMissile32.nLife[j] == 0)
				{
					g_EnemyMissile32.FireTime = clock();
					g_EnemyMissile32.nLife[j] = 1;
					g_EnemyMissile32.nX[j] = g_Enemy32[i].nX + 2;
					g_EnemyMissile32.nY[j] = g_Enemy32[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile32.AppearTime[j] >= 40))
			{
				g_EnemyMissile32.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile32->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile32.nLife[j] == 1)
				{

					if (g_EnemyMissile32.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile32.nX[j], g_EnemyMissile32.nY[j]);
						printf("  ");
						g_EnemyMissile32.nY[j]++;
						gotoxy(g_EnemyMissile32.nX[j], g_EnemyMissile32.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy32[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy32[i].nX = 0;
							g_Enemy32[i].nY = 0;

						}
						g_EnemyMissile32.nLife[j] = 0;
						gotoxy(g_EnemyMissile32.nX[j], g_EnemyMissile32.nY[j]);
						printf("  ");
						g_EnemyMissile32.nX[j] = 0; g_EnemyMissile32.nY[j] = 0;
					}
				}
			}
}
void UserCrash32()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom32 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime39 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime39 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime39 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime39 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime39 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom32>1600) && (clock() - g_sPlayer.OldTime39>2000))
		if (g_sPlayer.nY == g_EnemyMissile32.nY[j] && (g_EnemyMissile32.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile32.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile32.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom32 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile32.nX[j] = 0;
			g_EnemyMissile32.nY[j] = 0;
			g_EnemyMissile32.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime39 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash32()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy32[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy32[j].Boom < 300)
					{
						gotoxy(g_Enemy32[j].x1 - g_Enemy32[j].x2 + g_Enemy32[j].nX, g_Enemy32[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy32[j].nY && (g_sPlayerMissile[i].nX - g_Enemy32[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy32[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy32[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy32[j].x2 = g_Enemy32[j].nX;
				g_Enemy32[j].Boom = clock();
				g_Enemy32[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy32[j].HP == 0)
				{
					gotoxy(g_Enemy32[j].nX, g_Enemy32[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy32[i].nX = 0; g_Enemy32[i].nY = 0;
					g_Enemy32[j].nLife = 2;
					g_Enemy32[j].nX = -1; g_Enemy32[j].nY = -1;
				}

			}
		}



}

void Enemy33()
{
	if (clock() - extra>34500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy33[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy33[i].nLife = 1;
				g_Enemy33[i].nX = 9;
				g_Enemy33[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy33[i].nLife == 1)
		{

			if ((g_Enemy33[i].nY  < 3) && (clock() - g_Enemy33[i].MoveTime1>100))
			{
				g_Enemy33[i].MoveTime1 = clock();
				gotoxy(g_Enemy33[i].nX, g_Enemy33[i].nY);
				printf("      ");
				g_Enemy33[i].nY++;
				gotoxy(g_Enemy33[i].nX, g_Enemy33[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy33[i].nY >= 3) && (g_Enemy33[i].nY<34))
			{
				if ((clock() - g_Enemy33[i].MoveTime1>500))
				{
					g_Enemy33[i].MoveTime1 = clock();
					gotoxy(g_Enemy33[i].nX, g_Enemy33[i].nY);
					printf("      ");
					g_Enemy33[i].nY++;
					gotoxy(g_Enemy33[i].nX, g_Enemy33[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy33[i].nY == 34)
				{
					g_Enemy33[i].nLife = 2;
					gotoxy(g_Enemy33[i].nX, g_Enemy33[i].nY);
					printf("      ");
					g_Enemy33[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile33()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile33.FireTime>2000 && g_Enemy33[i].nLife == 1)
			{
				
				if (g_EnemyMissile33.nLife[j] == 0)
				{
					g_EnemyMissile33.FireTime = clock();
					g_EnemyMissile33.x1 = g_sPlayer.nX;
					g_EnemyMissile33.y1 = g_sPlayer.nY;
					g_EnemyMissile33.x2 = g_Enemy33[i].nX + 2;
					g_EnemyMissile33.y2 = g_Enemy33[i].nY + 1;
					g_EnemyMissile33.nLife[j] = 1;
					g_EnemyMissile33.nX[j] = g_Enemy33[i].nX + 2;
					g_EnemyMissile33.nY[j] = g_Enemy33[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile33.AppearTime[j] >= 40))
			{
				g_EnemyMissile33.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile33->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile33.nLife[j] == 1)
				{

					if (g_EnemyMissile33.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile33.nX[j], g_EnemyMissile33.nY[j]);
						printf("  ");
						g_EnemyMissile33.nY[j]++;
						gotoxy(g_EnemyMissile33.nX[j], g_EnemyMissile33.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_Enemy33[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy33[i].nX = 0;
							g_Enemy33[i].nY = 0;

						}
						g_EnemyMissile33.nLife[j] = 0;
						gotoxy(g_EnemyMissile33.nX[j], g_EnemyMissile33.nY[j]);
						printf("  ");
						g_EnemyMissile33.nX[j] = 0; g_EnemyMissile33.nY[j] = 0;
					}
				}
			}
}
void UserCrash33()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom33 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime40 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime40 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime40 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime40 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime40 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom33>1600) && (clock() - g_sPlayer.OldTime40>2000))
		if (g_sPlayer.nY == g_EnemyMissile33.nY[j] && (g_EnemyMissile33.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile33.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile33.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom33 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile33.nX[j] = 0;
			g_EnemyMissile33.nY[j] = 0;
			g_EnemyMissile33.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime40 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash33()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy33[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy33[j].Boom < 300)
					{
						gotoxy(g_Enemy33[j].x1 - g_Enemy33[j].x2 + g_Enemy33[j].nX, g_Enemy33[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy33[j].nY && (g_sPlayerMissile[i].nX - g_Enemy33[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy33[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy33[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy33[j].x2 = g_Enemy33[j].nX;
				g_Enemy33[j].Boom = clock();
				g_Enemy33[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy33[j].HP == 0)
				{
					gotoxy(g_Enemy33[j].nX, g_Enemy33[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy33[i].nX = 0; g_Enemy33[i].nY = 0;
					g_Enemy33[j].nLife = 2;
					g_Enemy33[j].nX = -1; g_Enemy33[j].nY = -1;
				}

			}
		}



}

void Enemy34()
{
	if (clock() - extra>35000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy34[i].nLife == 0)
			{
				//g_Enemy34[i].MoveTime1 = clock();
				g_Enemy34[i].nLife = 1;
				g_Enemy34[i].nX = 15;
				g_Enemy34[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy34[i].nLife == 1)
		{

			if ((g_Enemy34[i].nY  < 3) && (clock() - g_Enemy34[i].MoveTime1>100))
			{
				g_Enemy34[i].MoveTime1 = clock();
				gotoxy(g_Enemy34[i].nX, g_Enemy34[i].nY);
				printf("      ");
				g_Enemy34[i].nY++;
				gotoxy(g_Enemy34[i].nX, g_Enemy34[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy34[i].nY >= 3) && (g_Enemy34[i].nY<34))
			{
				if ((clock() - g_Enemy34[i].MoveTime1>500))
				{
					g_Enemy34[i].MoveTime1 = clock();
					gotoxy(g_Enemy34[i].nX, g_Enemy34[i].nY);
					printf("      ");
					g_Enemy34[i].nY++;
					gotoxy(g_Enemy34[i].nX, g_Enemy34[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy34[i].nY == 34)
				{
					g_Enemy34[i].nLife = 2;
					gotoxy(g_Enemy34[i].nX, g_Enemy34[i].nY);
					printf("      ");
					g_Enemy34[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile34()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile34.FireTime>2000 && g_Enemy34[i].nLife == 1)
			{
				
				if (g_EnemyMissile34.nLife[j] == 0)
				{
					g_EnemyMissile34.FireTime = clock();

					g_EnemyMissile34.nLife[j] = 1;
					g_EnemyMissile34.nX[j] = g_Enemy34[i].nX + 2;
					g_EnemyMissile34.nY[j] = g_Enemy34[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile34.AppearTime[j] >= 40))
			{
				g_EnemyMissile34.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile34->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile34.nLife[j] == 1)
				{

					if (g_EnemyMissile34.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile34.nX[j], g_EnemyMissile34.nY[j]);
						printf("  ");
						g_EnemyMissile34.nY[j]++;
						gotoxy(g_EnemyMissile34.nX[j], g_EnemyMissile34.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy34[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy34[i].nX = 0;
							g_Enemy34[i].nY = 0;

						}
						g_EnemyMissile34.nLife[j] = 0;
						gotoxy(g_EnemyMissile34.nX[j], g_EnemyMissile34.nY[j]);
						printf("  ");
						g_EnemyMissile34.nX[j] = 0; g_EnemyMissile34.nY[j] = 0;
					}
				}
			}
}
void UserCrash34()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom34 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime41 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime41 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime41 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime41 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime41 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom34>1600) && (clock() - g_sPlayer.OldTime41>2000))
		if (g_sPlayer.nY == g_EnemyMissile34.nY[j] && (g_EnemyMissile34.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile34.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile34.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom34 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile34.nX[j] = 0;
			g_EnemyMissile34.nY[j] = 0;
			g_EnemyMissile34.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime41 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash34()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy34[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy34[j].Boom < 300)
					{
						gotoxy(g_Enemy34[j].x1 - g_Enemy34[j].x2 + g_Enemy34[j].nX, g_Enemy34[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy34[j].nY && (g_sPlayerMissile[i].nX - g_Enemy34[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy34[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy34[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy34[j].x2 = g_Enemy34[j].nX;
				g_Enemy34[j].Boom = clock();
				g_Enemy34[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy34[j].HP == 0)
				{
					gotoxy(g_Enemy34[j].nX, g_Enemy34[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy34[i].nX = 0; g_Enemy34[i].nY = 0;
					g_Enemy34[j].nLife = 2;
					g_Enemy34[j].nX = -1; g_Enemy34[j].nY = -1;
				}

			}
		}



}

//오른쪽에서 천천히 내려오는 3개의 혼합형
void Enemy35()
{
	if (clock() - extra>38000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy35[i].nLife == 0)
			{
				//g_Enemy35[i].MoveTime1 = clock();
				g_Enemy35[i].nLife = 1;
				g_Enemy35[i].nX = 59;
				g_Enemy35[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy35[i].nLife == 1)
		{

			if ((g_Enemy35[i].nY  < 3) && (clock() - g_Enemy35[i].MoveTime1>100))
			{
				g_Enemy35[i].MoveTime1 = clock();
				gotoxy(g_Enemy35[i].nX, g_Enemy35[i].nY);
				printf("      ");
				g_Enemy35[i].nY++;
				gotoxy(g_Enemy35[i].nX, g_Enemy35[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy35[i].nY >= 3) && (g_Enemy35[i].nY<34))
			{
				if ((clock() - g_Enemy35[i].MoveTime1>500))
				{
					g_Enemy35[i].MoveTime1 = clock();
					gotoxy(g_Enemy35[i].nX, g_Enemy35[i].nY);
					printf("      ");
					g_Enemy35[i].nY++;
					gotoxy(g_Enemy35[i].nX, g_Enemy35[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy35[i].nY == 34)
				{
					g_Enemy35[i].nLife = 2;
					gotoxy(g_Enemy35[i].nX, g_Enemy35[i].nY);
					printf("      ");
					g_Enemy35[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile35()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile35.FireTime>2000 && g_Enemy35[i].nLife == 1)
			{
				
				if (g_EnemyMissile35.nLife[j] == 0)
				{
					g_EnemyMissile35.FireTime = clock();
					g_EnemyMissile35.nLife[j] = 1;
					g_EnemyMissile35.nX[j] = g_Enemy35[i].nX + 2;
					g_EnemyMissile35.nY[j] = g_Enemy35[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile35.AppearTime[j] >= 40))
			{
				g_EnemyMissile35.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile35->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile35.nLife[j] == 1)
				{

					if (g_EnemyMissile35.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile35.nX[j], g_EnemyMissile35.nY[j]);
						printf("  ");
						g_EnemyMissile35.nY[j]++;
						gotoxy(g_EnemyMissile35.nX[j], g_EnemyMissile35.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy35[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy35[i].nX = 0;
							g_Enemy35[i].nY = 0;

						}
						g_EnemyMissile35.nLife[j] = 0;
						gotoxy(g_EnemyMissile35.nX[j], g_EnemyMissile35.nY[j]);
						printf("  ");
						g_EnemyMissile35.nX[j] = 0; g_EnemyMissile35.nY[j] = 0;
					}
				}
			}
}
void UserCrash35()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom35 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime42 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime42 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime42 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime42 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime42 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom35>1600) && (clock() - g_sPlayer.OldTime42>2000))
		if (g_sPlayer.nY == g_EnemyMissile35.nY[j] && (g_EnemyMissile35.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile35.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile35.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom35 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile35.nX[j] = 0;
			g_EnemyMissile35.nY[j] = 0;
			g_EnemyMissile35.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime42 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash35()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy35[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy35[j].Boom < 300)
					{
						gotoxy(g_Enemy35[j].x1 - g_Enemy35[j].x2 + g_Enemy35[j].nX, g_Enemy35[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy35[j].nY && (g_sPlayerMissile[i].nX - g_Enemy35[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy35[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy35[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy35[j].x2 = g_Enemy35[j].nX;
				g_Enemy35[j].Boom = clock();
				g_Enemy35[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy35[j].HP == 0)
				{
					gotoxy(g_Enemy35[j].nX, g_Enemy35[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy35[i].nX = 0; g_Enemy35[i].nY = 0;
					g_Enemy35[j].nLife = 2;
					g_Enemy35[j].nX = -1; g_Enemy35[j].nY = -1;
				}

			}
		}



}

void Enemy36()
{
	if (clock() - extra>37500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy36[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy36[i].nLife = 1;
				g_Enemy36[i].nX = 65;
				g_Enemy36[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy36[i].nLife == 1)
		{

			if ((g_Enemy36[i].nY  < 3) && (clock() - g_Enemy36[i].MoveTime1>100))
			{
				g_Enemy36[i].MoveTime1 = clock();
				gotoxy(g_Enemy36[i].nX, g_Enemy36[i].nY);
				printf("      ");
				g_Enemy36[i].nY++;
				gotoxy(g_Enemy36[i].nX, g_Enemy36[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy36[i].nY >= 3) && (g_Enemy36[i].nY<34))
			{
				if ((clock() - g_Enemy36[i].MoveTime1>500))
				{
					g_Enemy36[i].MoveTime1 = clock();
					gotoxy(g_Enemy36[i].nX, g_Enemy36[i].nY);
					printf("      ");
					g_Enemy36[i].nY++;
					gotoxy(g_Enemy36[i].nX, g_Enemy36[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy36[i].nY == 34)
				{
					g_Enemy36[i].nLife = 2;
					gotoxy(g_Enemy36[i].nX, g_Enemy36[i].nY);
					printf("      ");
					g_Enemy36[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile36()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile36.FireTime>2000 && g_Enemy36[i].nLife == 1)
			{
				
				if (g_EnemyMissile36.nLife[j] == 0)
				{
					g_EnemyMissile36.FireTime = clock();
					g_EnemyMissile36.nLife[j] = 1;
					g_EnemyMissile36.nX[j] = g_Enemy36[i].nX + 2;
					g_EnemyMissile36.nY[j] = g_Enemy36[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile36.AppearTime[j] >= 40))
			{
				g_EnemyMissile36.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile36->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile36.nLife[j] == 1)
				{

					if (g_EnemyMissile36.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile36.nX[j], g_EnemyMissile36.nY[j]);
						printf("  ");
						g_EnemyMissile36.nY[j]++;
						gotoxy(g_EnemyMissile36.nX[j], g_EnemyMissile36.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_Enemy36[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy36[i].nX = 0;
							g_Enemy36[i].nY = 0;

						}
						g_EnemyMissile36.nLife[j] = 0;
						gotoxy(g_EnemyMissile36.nX[j], g_EnemyMissile36.nY[j]);
						printf("  ");
						g_EnemyMissile36.nX[j] = 0; g_EnemyMissile36.nY[j] = 0;
					}
				}
			}
}
void UserCrash36()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom36 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime43 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime43 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime43 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime43 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime43 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom36>1600) && (clock() - g_sPlayer.OldTime43>2000))
		if (g_sPlayer.nY == g_EnemyMissile36.nY[j] && (g_EnemyMissile36.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile36.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile36.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom36 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile36.nX[j] = 0;
			g_EnemyMissile36.nY[j] = 0;
			g_EnemyMissile36.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime43 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash36()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy36[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy36[j].Boom < 300)
					{
						gotoxy(g_Enemy36[j].x1 - g_Enemy36[j].x2 + g_Enemy36[j].nX, g_Enemy36[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy36[j].nY && (g_sPlayerMissile[i].nX - g_Enemy36[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy36[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy36[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy36[j].x2 = g_Enemy36[j].nX;
				g_Enemy36[j].Boom = clock();
				g_Enemy36[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy36[j].HP == 0)
				{
					gotoxy(g_Enemy36[j].nX, g_Enemy36[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy36[i].nX = 0; g_Enemy36[i].nY = 0;
					g_Enemy36[j].nLife = 2;
					g_Enemy36[j].nX = -1; g_Enemy36[j].nY = -1;
				}

			}
		}



}

void Enemy37()
{
	if (clock() - extra>38000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy37[i].nLife == 0)
			{
				//g_Enemy37[i].MoveTime1 = clock();
				g_Enemy37[i].nLife = 1;
				g_Enemy37[i].nX = 71;
				g_Enemy37[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy37[i].nLife == 1)
		{

			if ((g_Enemy37[i].nY  < 3) && (clock() - g_Enemy37[i].MoveTime1>100))
			{
				g_Enemy37[i].MoveTime1 = clock();
				gotoxy(g_Enemy37[i].nX, g_Enemy37[i].nY);
				printf("      ");
				g_Enemy37[i].nY++;
				gotoxy(g_Enemy37[i].nX, g_Enemy37[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy37[i].nY >= 3) && (g_Enemy37[i].nY<34))
			{
				if ((clock() - g_Enemy37[i].MoveTime1>500))
				{
					g_Enemy37[i].MoveTime1 = clock();
					gotoxy(g_Enemy37[i].nX, g_Enemy37[i].nY);
					printf("      ");
					g_Enemy37[i].nY++;
					gotoxy(g_Enemy37[i].nX, g_Enemy37[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy37[i].nY == 34)
				{
					g_Enemy37[i].nLife = 2;
					gotoxy(g_Enemy37[i].nX, g_Enemy37[i].nY);
					printf("      ");
					g_Enemy37[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile37()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile37.FireTime>2000 && g_Enemy37[i].nLife == 1)
			{
				
				if (g_EnemyMissile37.nLife[j] == 0)
				{
					g_EnemyMissile37.FireTime = clock();
					g_EnemyMissile37.nLife[j] = 1;
					g_EnemyMissile37.nX[j] = g_Enemy37[i].nX + 2;
					g_EnemyMissile37.nY[j] = g_Enemy37[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile37.AppearTime[j] >= 40))
			{
				g_EnemyMissile37.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile37->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile37.nLife[j] == 1)
				{

					if (g_EnemyMissile37.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile37.nX[j], g_EnemyMissile37.nY[j]);
						printf("  ");
						g_EnemyMissile37.nY[j]++;
						gotoxy(g_EnemyMissile37.nX[j], g_EnemyMissile37.nY[j]);
						printf("○");
					}
					else
					{
						if (g_Enemy37[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy37[i].nX = 0;
							g_Enemy37[i].nY = 0;

						}
						g_EnemyMissile37.nLife[j] = 0;
						gotoxy(g_EnemyMissile37.nX[j], g_EnemyMissile37.nY[j]);
						printf("  ");
						g_EnemyMissile37.nX[j] = 0; g_EnemyMissile37.nY[j] = 0;
					}
				}
			}
}
void UserCrash37()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom37 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime44 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime44 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime44 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime44 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime44 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom37>1600) && (clock() - g_sPlayer.OldTime44>2000))
		if (g_sPlayer.nY == g_EnemyMissile37.nY[j] && (g_EnemyMissile37.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile37.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile37.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom37 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile37.nX[j] = 0;
			g_EnemyMissile37.nY[j] = 0;
			g_EnemyMissile37.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime44 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash37()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy37[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy37[j].Boom < 300)
					{
						gotoxy(g_Enemy37[j].x1 - g_Enemy37[j].x2 + g_Enemy37[j].nX, g_Enemy37[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy37[j].nY && (g_sPlayerMissile[i].nX - g_Enemy37[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy37[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy37[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy37[j].x2 = g_Enemy37[j].nX;
				g_Enemy37[j].Boom = clock();
				g_Enemy37[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy37[j].HP == 0)
				{
					gotoxy(g_Enemy37[j].nX, g_Enemy37[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy37[i].nX = 0; g_Enemy37[i].nY = 0;
					g_Enemy37[j].nLife = 2;
					g_Enemy37[j].nX = -1; g_Enemy37[j].nY = -1;
				}

			}
		}



}

//왼쪽 위로 올라가는 1개 쌍형
void Enemy38()
{
	if (clock() - extra>37000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy38[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy38[i].nLife = 1;
				g_Enemy38[i].nX = 25;
				g_Enemy38[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy38[i].nLife == 1)
		{

			if ((g_Enemy38[i].nY  < 3) && (clock() - g_Enemy38[i].MoveTime1>200) && clock() - g_Enemy38[i].MoveTime2 > 500)
			{
				g_Enemy38[i].MoveTime1 = clock();

				gotoxy(g_Enemy38[i].nX, g_Enemy38[i].nY);
				printf("          ");
				g_Enemy38[i].nY++;
				gotoxy(g_Enemy38[i].nX, g_Enemy38[i].nY);
				printf("＜ωψω＞");

				//무브타임 설정해줘서 시간딜레이 넣고 수정하기
			}
			if (clock() - g_Enemy38[i].MoveTime1 > 3000)
			{
				if (g_Enemy38[i].nY>0 && (clock() - g_Enemy38[i].MoveTime2 > 200))
				{
					g_Enemy38[i].MoveTime2 = clock();
					gotoxy(g_Enemy38[i].nX, g_Enemy38[i].nY);
					printf("          ");
					g_Enemy38[i].nY--;
					gotoxy(g_Enemy38[i].nX, g_Enemy38[i].nY);
					printf("＜ωψω＞");
				}
				if (g_Enemy38[i].nY == 0)
				{
					g_Enemy38[i].nLife = 2;
					gotoxy(g_Enemy38[i].nX, g_Enemy38[i].nY);
					printf("          ");
					g_Enemy38[i].nY = -100;
				}
			}
			

		}

	}
}
void Enemy_Missile38_1()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_Enemy38[i].nLife == 1)
			{
				
				if (clock() - g_EnemyMissile38_1.FireTime>=80 &&g_EnemyMissile38_1.nLife[j] == 0)
				{
					g_EnemyMissile38_1.FireTime = clock();
					g_EnemyMissile38_1.nLife[j] = 1;
					g_EnemyMissile38_1.nX[j] = g_Enemy38[i].nX + 2;
					g_EnemyMissile38_1.nY[j] = g_Enemy38[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile38_1.AppearTime[j] >= 40))
			{
				g_EnemyMissile38_1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile38_1->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile38_1.nLife[j] == 1)
				{

					if (g_EnemyMissile38_1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile38_1.nX[j], g_EnemyMissile38_1.nY[j]);
						printf("  ");
						g_EnemyMissile38_1.nY[j]++;
						gotoxy(g_EnemyMissile38_1.nX[j], g_EnemyMissile38_1.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy38[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy38[i].nX = 0;
							g_Enemy38[i].nY = 0;

						}
						g_EnemyMissile38_1.nLife[j] = 0;
						gotoxy(g_EnemyMissile38_1.nX[j], g_EnemyMissile38_1.nY[j]);
						printf("  ");
						g_EnemyMissile38_1.nX[j] = 0; g_EnemyMissile38_1.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile38_2()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if ( g_Enemy38[i].nLife == 1)
			{
				
				if (clock() - g_EnemyMissile38_2.FireTime>=80&&g_EnemyMissile38_2.nLife[j] == 0)
				{
					g_EnemyMissile38_2.FireTime = clock();
					g_EnemyMissile38_2.nLife[j] = 1;
					g_EnemyMissile38_2.nX[j] = g_Enemy38[i].nX + 6;
					g_EnemyMissile38_2.nY[j] = g_Enemy38[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile38_2.AppearTime[j] >= 40))
			{
				g_EnemyMissile38_2.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile38_2->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile38_2.nLife[j] == 1)
				{

					if (g_EnemyMissile38_2.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile38_2.nX[j], g_EnemyMissile38_2.nY[j]);
						printf("  ");
						g_EnemyMissile38_2.nY[j]++;
						gotoxy(g_EnemyMissile38_2.nX[j], g_EnemyMissile38_2.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy38[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy38[i].nX = 0;
							g_Enemy38[i].nY = 0;

						}
						g_EnemyMissile38_2.nLife[j] = 0;
						gotoxy(g_EnemyMissile38_2.nX[j], g_EnemyMissile38_2.nY[j]);
						printf("  ");
						g_EnemyMissile38_2.nX[j] = 0; g_EnemyMissile38_2.nY[j] = 0;
					}
				}
			}
}
void UserCrash38_1()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom38 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime45 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime45 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime45 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime45 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime45 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom38>1600) && (clock() - g_sPlayer.OldTime45>2000))
		if (g_sPlayer.nY == g_EnemyMissile38_1.nY[j] && (g_EnemyMissile38_1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile38_1.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile38_1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom38 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile38_1.nX[j] = 0;
			g_EnemyMissile38_1.nY[j] = 0;
			g_EnemyMissile38_1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime45 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash38_2()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom39 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime46 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime46 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime46 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime46 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime46 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom39>1600) && (clock() - g_sPlayer.OldTime46>2000))
		if (g_sPlayer.nY == g_EnemyMissile38_2.nY[j] && (g_EnemyMissile38_2.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile38_2.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile38_2.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom39 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile38_2.nX[j] = 0;
			g_EnemyMissile38_2.nY[j] = 0;
			g_EnemyMissile38_2.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime46 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash38()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy38[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy38[j].Boom < 300)
					{
						gotoxy(g_Enemy38[j].x1 - g_Enemy38[j].x2 + g_Enemy38[j].nX, g_Enemy38[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy38[j].nY && (g_sPlayerMissile[i].nX - g_Enemy38[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy38[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy38[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy38[j].x2 = g_Enemy38[j].nX;
				g_Enemy38[j].Boom = clock();
				g_Enemy38[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy38[j].HP == 0)
				{
					gotoxy(g_Enemy38[j].nX, g_Enemy38[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy38[i].nX = 0; g_Enemy38[i].nY = 0;
					g_Enemy38[j].nLife = 2;
					g_Enemy38[j].nX = -1; g_Enemy38[j].nY = -1;
				}

			}
		}



}
void User_Enemy38()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime47 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime47 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime47 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime47 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime47 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy38[j].nY && (g_Enemy38[j].nX - g_sPlayer.nX) < 6 && (g_Enemy38[j].nX - g_sPlayer.nX) > -9)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime47 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime47 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//오른쪽 위로 올라가는 1개 쌍형
void Enemy39()
{
	if (clock() - extra>40000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy39[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy39[i].nLife = 1;
				g_Enemy39[i].nX = 65;
				g_Enemy39[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy39[i].nLife == 1)
		{

			if ((g_Enemy39[i].nY  < 3) && (clock() - g_Enemy39[i].MoveTime1>200) && clock() - g_Enemy39[i].MoveTime2 > 500)
			{
				g_Enemy39[i].MoveTime1 = clock();

				gotoxy(g_Enemy39[i].nX, g_Enemy39[i].nY);
				printf("          ");
				g_Enemy39[i].nY++;
				gotoxy(g_Enemy39[i].nX, g_Enemy39[i].nY);
				printf("＜ωψω＞");

				//무브타임 설정해줘서 시간딜레이 넣고 수정하기
			}
			if (clock() - g_Enemy39[i].MoveTime1 > 3000)
			{
				if (g_Enemy39[i].nY>0 && (clock() - g_Enemy39[i].MoveTime2 > 200))
				{
					g_Enemy39[i].MoveTime2 = clock();
					gotoxy(g_Enemy39[i].nX, g_Enemy39[i].nY);
					printf("          ");
					g_Enemy39[i].nY--;
					gotoxy(g_Enemy39[i].nX, g_Enemy39[i].nY);
					printf("＜ωψω＞");
				}
				if (g_Enemy39[i].nY == 0)
				{
					g_Enemy39[i].nLife = 2;
					gotoxy(g_Enemy39[i].nX, g_Enemy39[i].nY);
					printf("          ");
					g_Enemy39[i].nY = -100;
				}
			}
		}

	}
}
void Enemy_Missile39_1()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if ( g_Enemy39[i].nLife == 1)
			{
			
				if (clock() - g_EnemyMissile39_1.FireTime>=80&&g_EnemyMissile39_1.nLife[j] == 0)
				{
					g_EnemyMissile39_1.FireTime = clock();
					g_EnemyMissile39_1.nLife[j] = 1;
					g_EnemyMissile39_1.nX[j] = g_Enemy39[i].nX + 2;
					g_EnemyMissile39_1.nY[j] = g_Enemy39[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile39_1.AppearTime[j] >= 40))
			{
				g_EnemyMissile39_1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile39_1->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile39_1.nLife[j] == 1)
				{

					if (g_EnemyMissile39_1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile39_1.nX[j], g_EnemyMissile39_1.nY[j]);
						printf("  ");
						g_EnemyMissile39_1.nY[j]++;
						gotoxy(g_EnemyMissile39_1.nX[j], g_EnemyMissile39_1.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy39[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy39[i].nX = 0;
							g_Enemy39[i].nY = 0;

						}
						g_EnemyMissile39_1.nLife[j] = 0;
						gotoxy(g_EnemyMissile39_1.nX[j], g_EnemyMissile39_1.nY[j]);
						printf("  ");
						g_EnemyMissile39_1.nX[j] = 0; g_EnemyMissile39_1.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile39_2()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if ( g_Enemy39[i].nLife == 1)
			{
			
				if (clock() - g_EnemyMissile39_2.FireTime>=80&&g_EnemyMissile39_2.nLife[j] == 0)
				{
					g_EnemyMissile39_2.FireTime = clock();
					g_EnemyMissile39_2.nLife[j] = 1;
					g_EnemyMissile39_2.nX[j] = g_Enemy39[i].nX + 6;
					g_EnemyMissile39_2.nY[j] = g_Enemy39[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile39_2.AppearTime[j] >= 40))
			{
				g_EnemyMissile39_2.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile39_2->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile39_2.nLife[j] == 1)
				{

					if (g_EnemyMissile39_2.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile39_2.nX[j], g_EnemyMissile39_2.nY[j]);
						printf("  ");
						g_EnemyMissile39_2.nY[j]++;
						gotoxy(g_EnemyMissile39_2.nX[j], g_EnemyMissile39_2.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy39[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy39[i].nX = 0;
							g_Enemy39[i].nY = 0;

						}
						g_EnemyMissile39_2.nLife[j] = 0;
						gotoxy(g_EnemyMissile39_2.nX[j], g_EnemyMissile39_2.nY[j]);
						printf("  ");
						g_EnemyMissile39_2.nX[j] = 0; g_EnemyMissile39_2.nY[j] = 0;
					}
				}
			}
}
void UserCrash39_1()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom40 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime48 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime48 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime48 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime48 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime48 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom40>1600) && (clock() - g_sPlayer.OldTime48>2000))
		if (g_sPlayer.nY == g_EnemyMissile39_1.nY[j] && (g_EnemyMissile39_1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile39_1.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile39_1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom40 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile39_1.nX[j] = 0;
			g_EnemyMissile39_1.nY[j] = 0;
			g_EnemyMissile39_1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime48 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash39_2()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom41 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime49 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime49 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime49 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime49 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime49 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom41>1600) && (clock() - g_sPlayer.OldTime49>2000))
		if (g_sPlayer.nY == g_EnemyMissile39_2.nY[j] && (g_EnemyMissile39_2.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile39_2.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile39_2.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom41 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile39_2.nX[j] = 0;
			g_EnemyMissile39_2.nY[j] = 0;
			g_EnemyMissile39_2.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime49 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash39()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy39[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy39[j].Boom < 300)
					{
						gotoxy(g_Enemy39[j].x1 - g_Enemy39[j].x2 + g_Enemy39[j].nX, g_Enemy39[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy39[j].nY && (g_sPlayerMissile[i].nX - g_Enemy39[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy39[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy39[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy39[j].x2 = g_Enemy39[j].nX;
				g_Enemy39[j].Boom = clock();
				g_Enemy39[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy39[j].HP == 0)
				{
					gotoxy(g_Enemy39[j].nX, g_Enemy39[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy39[i].nX = 0; g_Enemy39[i].nY = 0;
					g_Enemy39[j].nLife = 2;
					g_Enemy39[j].nX = -1; g_Enemy39[j].nY = -1;
				}

			}
		}



}
void User_Enemy39()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime50 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime50 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime50 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime50 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime50 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy39[j].nY && (g_Enemy39[j].nX - g_sPlayer.nX) < 6 && (g_Enemy39[j].nX - g_sPlayer.nX) > -9)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime50 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime50 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

//가운데로 내려오는 7개의 혼합형
void Enemy40()
{
	if (clock() - extra>42000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy40[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy40[i].nLife = 1;
				g_Enemy40[i].nX = 31;
				g_Enemy40[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy40[i].nLife == 1)
		{

			if ((g_Enemy40[i].nY  < 10) && (clock() - g_Enemy40[i].MoveTime1>100))
			{
				g_Enemy40[i].MoveTime1 = clock();
				gotoxy(g_Enemy40[i].nX, g_Enemy40[i].nY);
				printf("      ");
				g_Enemy40[i].nY++;
				gotoxy(g_Enemy40[i].nX, g_Enemy40[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy40[i].nY >= 10) && (g_Enemy40[i].nY<34))
			{
				if ((clock() - g_Enemy40[i].MoveTime1>500))
				{
					g_Enemy40[i].MoveTime1 = clock();
					gotoxy(g_Enemy40[i].nX, g_Enemy40[i].nY);
					printf("      ");
					g_Enemy40[i].nY++;
					gotoxy(g_Enemy40[i].nX, g_Enemy40[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy40[i].nY == 34)
				{
					g_Enemy40[i].nLife = 2;
					gotoxy(g_Enemy40[i].nX, g_Enemy40[i].nY);
					printf("      ");
					g_Enemy40[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile40()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile40.FireTime>2000 && g_Enemy40[i].nLife == 1)
			{
				
				if (g_EnemyMissile40.nLife[j] == 0)
				{
					g_EnemyMissile40.FireTime = clock();
					g_EnemyMissile40.nLife[j] = 1;
					g_EnemyMissile40.nX[j] = g_Enemy40[i].nX + 2;
					g_EnemyMissile40.nY[j] = g_Enemy40[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile40.AppearTime[j] >= 40))
			{
				g_EnemyMissile40.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile40->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile40.nLife[j] == 1)
				{

					if (g_EnemyMissile40.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile40.nX[j], g_EnemyMissile40.nY[j]);
						printf("  ");
						g_EnemyMissile40.nY[j]++;
						gotoxy(g_EnemyMissile40.nX[j], g_EnemyMissile40.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy40[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy40[i].nX = 0;
							g_Enemy40[i].nY = 0;

						}
						g_EnemyMissile40.nLife[j] = 0;
						gotoxy(g_EnemyMissile40.nX[j], g_EnemyMissile40.nY[j]);
						printf("  ");
						g_EnemyMissile40.nX[j] = 0; g_EnemyMissile40.nY[j] = 0;
					}
				}
			}
}
void UserCrash40()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom42 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime51 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime51 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime51 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime51 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime51 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom42>1600) && (clock() - g_sPlayer.OldTime51>2000))
		if (g_sPlayer.nY == g_EnemyMissile40.nY[j] && (g_EnemyMissile40.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile40.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile40.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom42 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile40.nX[j] = 0;
			g_EnemyMissile40.nY[j] = 0;
			g_EnemyMissile40.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime51 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash40()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy40[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy40[j].Boom < 300)
					{
						gotoxy(g_Enemy40[j].x1 - g_Enemy40[j].x2 + g_Enemy40[j].nX, g_Enemy40[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy40[j].nY && (g_sPlayerMissile[i].nX - g_Enemy40[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy40[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy40[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy40[j].x2 = g_Enemy40[j].nX;
				g_Enemy40[j].Boom = clock();
				g_Enemy40[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy40[j].HP == 0)
				{
					gotoxy(g_Enemy40[j].nX, g_Enemy40[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy40[i].nX = 0; g_Enemy40[i].nY = 0;
					g_Enemy40[j].nLife = 2;
					g_Enemy40[j].nX = -1; g_Enemy40[j].nY = -1;
				}

			}
		}



}

void Enemy41()
{
	if (clock() - extra>41500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy41[i].nLife == 0)
			{
				//g_Enemy41[i].MoveTime1 = clock();
				g_Enemy41[i].nLife = 1;
				g_Enemy41[i].nX = 37;
				g_Enemy41[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy41[i].nLife == 1)
		{

			if ((g_Enemy41[i].nY  < 10) && (clock() - g_Enemy41[i].MoveTime1>100))
			{
				g_Enemy41[i].MoveTime1 = clock();
				gotoxy(g_Enemy41[i].nX, g_Enemy41[i].nY);
				printf("      ");
				g_Enemy41[i].nY++;
				gotoxy(g_Enemy41[i].nX, g_Enemy41[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy41[i].nY >= 10) && (g_Enemy41[i].nY<34))
			{
				if ((clock() - g_Enemy41[i].MoveTime1>500))
				{
					g_Enemy41[i].MoveTime1 = clock();
					gotoxy(g_Enemy41[i].nX, g_Enemy41[i].nY);
					printf("      ");
					g_Enemy41[i].nY++;
					gotoxy(g_Enemy41[i].nX, g_Enemy41[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy41[i].nY == 34)
				{
					g_Enemy41[i].nLife = 2;
					gotoxy(g_Enemy41[i].nX, g_Enemy41[i].nY);
					printf("      ");
					g_Enemy41[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile41()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile41.FireTime>2000 && g_Enemy41[i].nLife == 1)
			{
				
				if (g_EnemyMissile41.nLife[j] == 0)
				{
					g_EnemyMissile41.FireTime = clock();
					g_EnemyMissile41.nLife[j] = 1;
					g_EnemyMissile41.nX[j] = g_Enemy41[i].nX + 2;
					g_EnemyMissile41.nY[j] = g_Enemy41[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile41.AppearTime[j] >= 40))
			{
				g_EnemyMissile41.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile41->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile41.nLife[j] == 1)
				{

					if (g_EnemyMissile41.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile41.nX[j], g_EnemyMissile41.nY[j]);
						printf("  ");
						g_EnemyMissile41.nY[j]++;
						gotoxy(g_EnemyMissile41.nX[j], g_EnemyMissile41.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy41[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy41[i].nX = 0;
							g_Enemy41[i].nY = 0;

						}
						g_EnemyMissile41.nLife[j] = 0;
						gotoxy(g_EnemyMissile41.nX[j], g_EnemyMissile41.nY[j]);
						printf("  ");
						g_EnemyMissile41.nX[j] = 0; g_EnemyMissile41.nY[j] = 0;
					}
				}
			}
}
void UserCrash41()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom43 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime52 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime52 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime52 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime52 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime52 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom43>1600) && (clock() - g_sPlayer.OldTime52>2000))
		if (g_sPlayer.nY == g_EnemyMissile41.nY[j] && (g_EnemyMissile41.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile41.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile41.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom43 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile41.nX[j] = 0;
			g_EnemyMissile41.nY[j] = 0;
			g_EnemyMissile41.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime52 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash41()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy41[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy41[j].Boom < 300)
					{
						gotoxy(g_Enemy41[j].x1 - g_Enemy41[j].x2 + g_Enemy41[j].nX, g_Enemy41[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy41[j].nY && (g_sPlayerMissile[i].nX - g_Enemy41[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy41[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy41[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy41[j].x2 = g_Enemy41[j].nX;
				g_Enemy41[j].Boom = clock();
				g_Enemy41[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy41[j].HP == 0)
				{
					gotoxy(g_Enemy41[j].nX, g_Enemy41[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy41[i].nX = 0; g_Enemy41[i].nY = 0;
					g_Enemy41[j].nLife = 2;
					g_Enemy41[j].nX = -1; g_Enemy41[j].nY = -1;
				}

			}
		}



}

void Enemy42()
{
	if (clock() - extra>42000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy42[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy42[i].nLife = 1;
				g_Enemy42[i].nX = 43;
				g_Enemy42[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy42[i].nLife == 1)
		{

			if ((g_Enemy42[i].nY  < 10) && (clock() - g_Enemy42[i].MoveTime1>100))
			{
				g_Enemy42[i].MoveTime1 = clock();
				gotoxy(g_Enemy42[i].nX, g_Enemy42[i].nY);
				printf("      ");
				g_Enemy42[i].nY++;
				gotoxy(g_Enemy42[i].nX, g_Enemy42[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy42[i].nY >= 10) && (g_Enemy42[i].nY<34))
			{
				if ((clock() - g_Enemy42[i].MoveTime1>500))
				{
					g_Enemy42[i].MoveTime1 = clock();
					gotoxy(g_Enemy42[i].nX, g_Enemy42[i].nY);
					printf("      ");
					g_Enemy42[i].nY++;
					gotoxy(g_Enemy42[i].nX, g_Enemy42[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy42[i].nY == 34)
				{
					g_Enemy42[i].nLife = 2;
					gotoxy(g_Enemy42[i].nX, g_Enemy42[i].nY);
					printf("      ");
					g_Enemy42[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile42()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile42.FireTime>2000 && g_Enemy42[i].nLife == 1)
			{
				
				if (g_EnemyMissile42.nLife[j] == 0)
				{
					g_EnemyMissile42.FireTime = clock();
					g_EnemyMissile42.nLife[j] = 1;
					g_EnemyMissile42.nX[j] = g_Enemy42[i].nX + 2;
					g_EnemyMissile42.nY[j] = g_Enemy42[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile42.AppearTime[j] >= 40))
			{
				g_EnemyMissile42.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile42->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile42.nLife[j] == 1)
				{

					if (g_EnemyMissile42.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile42.nX[j], g_EnemyMissile42.nY[j]);
						printf("  ");
						g_EnemyMissile42.nY[j]++;
						gotoxy(g_EnemyMissile42.nX[j], g_EnemyMissile42.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy42[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy42[i].nX = 0;
							g_Enemy42[i].nY = 0;

						}
						g_EnemyMissile42.nLife[j] = 0;
						gotoxy(g_EnemyMissile42.nX[j], g_EnemyMissile42.nY[j]);
						printf("  ");
						g_EnemyMissile42.nX[j] = 0; g_EnemyMissile42.nY[j] = 0;
					}
				}
			}
}
void UserCrash42()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom44 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime53 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime53 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime53 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime53 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime53 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom44>1600) && (clock() - g_sPlayer.OldTime53>2000))
		if (g_sPlayer.nY == g_EnemyMissile42.nY[j] && (g_EnemyMissile42.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile42.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile42.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom44 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile42.nX[j] = 0;
			g_EnemyMissile42.nY[j] = 0;
			g_EnemyMissile42.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime53 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash42()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy42[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy42[j].Boom < 300)
					{
						gotoxy(g_Enemy42[j].x1 - g_Enemy42[j].x2 + g_Enemy42[j].nX, g_Enemy42[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy42[j].nY && (g_sPlayerMissile[i].nX - g_Enemy42[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy42[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy42[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy42[j].x2 = g_Enemy42[j].nX;
				g_Enemy42[j].Boom = clock();
				g_Enemy42[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy42[j].HP == 0)
				{
					gotoxy(g_Enemy42[j].nX, g_Enemy42[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy42[i].nX = 0; g_Enemy42[i].nY = 0;
					g_Enemy42[j].nLife = 2;
					g_Enemy42[j].nX = -1; g_Enemy42[j].nY = -1;
				}

			}
		}



}

void Enemy43()
{
	if (clock() - extra>41500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy43[i].nLife == 0)
			{
				//g_Enemy43[i].MoveTime1 = clock();
				g_Enemy43[i].nLife = 1;
				g_Enemy43[i].nX = 25;
				g_Enemy43[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy43[i].nLife == 1)
		{

			if ((g_Enemy43[i].nY  < 10) && (clock() - g_Enemy43[i].MoveTime1>100))
			{
				g_Enemy43[i].MoveTime1 = clock();
				gotoxy(g_Enemy43[i].nX, g_Enemy43[i].nY);
				printf("      ");
				g_Enemy43[i].nY++;
				gotoxy(g_Enemy43[i].nX, g_Enemy43[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy43[i].nY >= 10) && (g_Enemy43[i].nY<34))
			{
				if ((clock() - g_Enemy43[i].MoveTime1>500))
				{
					g_Enemy43[i].MoveTime1 = clock();
					gotoxy(g_Enemy43[i].nX, g_Enemy43[i].nY);
					printf("      ");
					g_Enemy43[i].nY++;
					gotoxy(g_Enemy43[i].nX, g_Enemy43[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy43[i].nY == 34)
				{
					g_Enemy43[i].nLife = 2;
					gotoxy(g_Enemy43[i].nX, g_Enemy43[i].nY);
					printf("      ");
					g_Enemy43[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile43()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile43.FireTime>2000 && g_Enemy43[i].nLife == 1)
			{
				
				if (g_EnemyMissile43.nLife[j] == 0)
				{
					g_EnemyMissile43.FireTime = clock();
					g_EnemyMissile43.nLife[j] = 1;
					g_EnemyMissile43.nX[j] = g_Enemy43[i].nX + 2;
					g_EnemyMissile43.nY[j] = g_Enemy43[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile43.AppearTime[j] >= 40))
			{
				g_EnemyMissile43.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile43->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile43.nLife[j] == 1)
				{

					if (g_EnemyMissile43.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile43.nX[j], g_EnemyMissile43.nY[j]);
						printf("  ");
						g_EnemyMissile43.nY[j]++;
						gotoxy(g_EnemyMissile43.nX[j], g_EnemyMissile43.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy43[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy43[i].nX = 0;
							g_Enemy43[i].nY = 0;

						}
						g_EnemyMissile43.nLife[j] = 0;
						gotoxy(g_EnemyMissile43.nX[j], g_EnemyMissile43.nY[j]);
						printf("  ");
						g_EnemyMissile43.nX[j] = 0; g_EnemyMissile43.nY[j] = 0;
					}
				}
			}
}
void UserCrash43()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom45 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime54 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime54 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime54 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime54 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime54 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom45>1600) && (clock() - g_sPlayer.OldTime54>2000))
		if (g_sPlayer.nY == g_EnemyMissile43.nY[j] && (g_EnemyMissile43.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile43.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile43.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom45 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile43.nX[j] = 0;
			g_EnemyMissile43.nY[j] = 0;
			g_EnemyMissile43.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime54 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash43()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy43[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy43[j].Boom < 300)
					{
						gotoxy(g_Enemy43[j].x1 - g_Enemy43[j].x2 + g_Enemy43[j].nX, g_Enemy43[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy43[j].nY && (g_sPlayerMissile[i].nX - g_Enemy43[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy43[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy43[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy43[j].x2 = g_Enemy43[j].nX;
				g_Enemy43[j].Boom = clock();
				g_Enemy43[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy43[j].HP == 0)
				{
					gotoxy(g_Enemy43[j].nX, g_Enemy43[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy43[i].nX = 0; g_Enemy43[i].nY = 0;
					g_Enemy43[j].nLife = 2;
					g_Enemy43[j].nX = -1; g_Enemy43[j].nY = -1;
				}

			}
		}



}

void Enemy44()
{
	if (clock() - extra>41500)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy44[i].nLife == 0)
			{
				//g_Enemy44[i].MoveTime1 = clock();
				g_Enemy44[i].nLife = 1;
				g_Enemy44[i].nX = 49;
				g_Enemy44[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy44[i].nLife == 1)
		{

			if ((g_Enemy44[i].nY  < 10) && (clock() - g_Enemy44[i].MoveTime1>100))
			{
				g_Enemy44[i].MoveTime1 = clock();
				gotoxy(g_Enemy44[i].nX, g_Enemy44[i].nY);
				printf("      ");
				g_Enemy44[i].nY++;
				gotoxy(g_Enemy44[i].nX, g_Enemy44[i].nY);
				printf("◁□▷");



			}
			else if ((g_Enemy44[i].nY >= 10) && (g_Enemy44[i].nY<34))
			{
				if ((clock() - g_Enemy44[i].MoveTime1>500))
				{
					g_Enemy44[i].MoveTime1 = clock();
					gotoxy(g_Enemy44[i].nX, g_Enemy44[i].nY);
					printf("      ");
					g_Enemy44[i].nY++;
					gotoxy(g_Enemy44[i].nX, g_Enemy44[i].nY);
					printf("◁□▷");


				}
				if (g_Enemy44[i].nY == 34)
				{
					g_Enemy44[i].nLife = 2;
					gotoxy(g_Enemy44[i].nX, g_Enemy44[i].nY);
					printf("      ");
					g_Enemy44[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile44()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile44.FireTime>2000 && g_Enemy44[i].nLife == 1)
			{
				
				if (g_EnemyMissile44.nLife[j] == 0)
				{
					g_EnemyMissile44.FireTime = clock();
					g_EnemyMissile44.nLife[j] = 1;
					g_EnemyMissile44.nX[j] = g_Enemy44[i].nX + 2;
					g_EnemyMissile44.nY[j] = g_Enemy44[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile44.AppearTime[j] >= 40))
			{
				g_EnemyMissile44.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile44->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile44.nLife[j] == 1)
				{

					if (g_EnemyMissile44.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile44.nX[j], g_EnemyMissile44.nY[j]);
						printf("  ");
						g_EnemyMissile44.nY[j]++;
						gotoxy(g_EnemyMissile44.nX[j], g_EnemyMissile44.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy44[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy44[i].nX = 0;
							g_Enemy44[i].nY = 0;

						}
						g_EnemyMissile44.nLife[j] = 0;
						gotoxy(g_EnemyMissile44.nX[j], g_EnemyMissile44.nY[j]);
						printf("  ");
						g_EnemyMissile44.nX[j] = 0; g_EnemyMissile44.nY[j] = 0;
					}
				}
			}
}
void UserCrash44()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom46 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime55 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime55 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime55 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime55 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime55 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom46>1600) && (clock() - g_sPlayer.OldTime55>2000))
		if (g_sPlayer.nY == g_EnemyMissile44.nY[j] && (g_EnemyMissile44.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile44.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile44.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom46 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile44.nX[j] = 0;
			g_EnemyMissile44.nY[j] = 0;
			g_EnemyMissile44.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime55 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash44()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy44[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy44[j].Boom < 300)
					{
						gotoxy(g_Enemy44[j].x1 - g_Enemy44[j].x2 + g_Enemy44[j].nX, g_Enemy44[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy44[j].nY && (g_sPlayerMissile[i].nX - g_Enemy44[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy44[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy44[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy44[j].x2 = g_Enemy44[j].nX;
				g_Enemy44[j].Boom = clock();
				g_Enemy44[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy44[j].HP == 0)
				{
					gotoxy(g_Enemy44[j].nX, g_Enemy44[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy44[i].nX = 0; g_Enemy44[i].nY = 0;
					g_Enemy44[j].nLife = 2;
					g_Enemy44[j].nX = -1; g_Enemy44[j].nY = -1;
				}

			}
		}



}

void Enemy45()
{
	if (clock() - extra>42000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy45[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy45[i].nLife = 1;
				g_Enemy45[i].nX = 19;
				g_Enemy45[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy45[i].nLife == 1)
		{

			if ((g_Enemy45[i].nY  < 10) && (clock() - g_Enemy45[i].MoveTime1>100))
			{
				g_Enemy45[i].MoveTime1 = clock();
				gotoxy(g_Enemy45[i].nX, g_Enemy45[i].nY);
				printf("      ");
				g_Enemy45[i].nY++;
				gotoxy(g_Enemy45[i].nX, g_Enemy45[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy45[i].nY >= 10) && (g_Enemy45[i].nY<34))
			{
				if ((clock() - g_Enemy45[i].MoveTime1>500))
				{
					g_Enemy45[i].MoveTime1 = clock();
					gotoxy(g_Enemy45[i].nX, g_Enemy45[i].nY);
					printf("      ");
					g_Enemy45[i].nY++;
					gotoxy(g_Enemy45[i].nX, g_Enemy45[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy45[i].nY == 34)
				{
					g_Enemy45[i].nLife = 2;
					gotoxy(g_Enemy45[i].nX, g_Enemy45[i].nY);
					printf("      ");
					g_Enemy45[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile45()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile45.FireTime>2000 && g_Enemy45[i].nLife == 1)
			{
				
				if (g_EnemyMissile45.nLife[j] == 0)
				{
					g_EnemyMissile45.FireTime = clock();
					g_EnemyMissile45.nLife[j] = 1;
					g_EnemyMissile45.nX[j] = g_Enemy45[i].nX + 2;
					g_EnemyMissile45.nY[j] = g_Enemy45[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile45.AppearTime[j] >= 40))
			{
				g_EnemyMissile45.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile45->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile45.nLife[j] == 1)
				{

					if (g_EnemyMissile45.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile45.nX[j], g_EnemyMissile45.nY[j]);
						printf("  ");
						g_EnemyMissile45.nY[j]++;
						gotoxy(g_EnemyMissile45.nX[j], g_EnemyMissile45.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy45[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy45[i].nX = 0;
							g_Enemy45[i].nY = 0;

						}
						g_EnemyMissile45.nLife[j] = 0;
						gotoxy(g_EnemyMissile45.nX[j], g_EnemyMissile45.nY[j]);
						printf("  ");
						g_EnemyMissile45.nX[j] = 0; g_EnemyMissile45.nY[j] = 0;
					}
				}
			}
}
void UserCrash45()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom47 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime56 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime56 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime56 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime56 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime56 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom47>1600) && (clock() - g_sPlayer.OldTime56>2000))
		if (g_sPlayer.nY == g_EnemyMissile45.nY[j] && (g_EnemyMissile45.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile45.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile45.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom47 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile45.nX[j] = 0;
			g_EnemyMissile45.nY[j] = 0;
			g_EnemyMissile45.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime56 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash45()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy45[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy45[j].Boom < 300)
					{
						gotoxy(g_Enemy45[j].x1 - g_Enemy45[j].x2 + g_Enemy45[j].nX, g_Enemy45[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy45[j].nY && (g_sPlayerMissile[i].nX - g_Enemy45[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy45[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy45[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy45[j].x2 = g_Enemy45[j].nX;
				g_Enemy45[j].Boom = clock();
				g_Enemy45[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy45[j].HP == 0)
				{
					gotoxy(g_Enemy45[j].nX, g_Enemy45[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy45[i].nX = 0; g_Enemy45[i].nY = 0;
					g_Enemy45[j].nLife = 2;
					g_Enemy45[j].nX = -1; g_Enemy45[j].nY = -1;
				}

			}
		}



}

void Enemy46()
{
	if (clock() - extra>42000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy46[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy46[i].nLife = 1;
				g_Enemy46[i].nX = 55;
				g_Enemy46[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy46[i].nLife == 1)
		{

			if ((g_Enemy46[i].nY  < 10) && (clock() - g_Enemy46[i].MoveTime1>100))
			{
				g_Enemy46[i].MoveTime1 = clock();
				gotoxy(g_Enemy46[i].nX, g_Enemy46[i].nY);
				printf("      ");
				g_Enemy46[i].nY++;
				gotoxy(g_Enemy46[i].nX, g_Enemy46[i].nY);
				printf("◀⊙▶");



			}
			else if ((g_Enemy46[i].nY >= 10) && (g_Enemy46[i].nY<34))
			{
				if ((clock() - g_Enemy46[i].MoveTime1>500))
				{
					g_Enemy46[i].MoveTime1 = clock();
					gotoxy(g_Enemy46[i].nX, g_Enemy46[i].nY);
					printf("      ");
					g_Enemy46[i].nY++;
					gotoxy(g_Enemy46[i].nX, g_Enemy46[i].nY);
					printf("◀⊙▶");


				}
				if (g_Enemy46[i].nY == 34)
				{
					g_Enemy46[i].nLife = 2;
					gotoxy(g_Enemy46[i].nX, g_Enemy46[i].nY);
					printf("      ");
					g_Enemy46[i].nY = -100;
				}
			}

		}

	}
}
void Enemy_Missile46()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile46.FireTime>2000 && g_Enemy46[i].nLife == 1)
			{
				
				if (g_EnemyMissile46.nLife[j] == 0)
				{
					g_EnemyMissile46.FireTime = clock();
					g_EnemyMissile46.nLife[j] = 1;
					g_EnemyMissile46.nX[j] = g_Enemy46[i].nX + 2;
					g_EnemyMissile46.nY[j] = g_Enemy46[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile46.AppearTime[j] >= 40))
			{
				g_EnemyMissile46.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile46->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile46.nLife[j] == 1)
				{

					if (g_EnemyMissile46.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile46.nX[j], g_EnemyMissile46.nY[j]);
						printf("  ");
						g_EnemyMissile46.nY[j]++;
						gotoxy(g_EnemyMissile46.nX[j], g_EnemyMissile46.nY[j]);
						printf("∨");
					}
					else
					{
						if (g_Enemy46[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy46[i].nX = 0;
							g_Enemy46[i].nY = 0;

						}
						g_EnemyMissile46.nLife[j] = 0;
						gotoxy(g_EnemyMissile46.nX[j], g_EnemyMissile46.nY[j]);
						printf("  ");
						g_EnemyMissile46.nX[j] = 0; g_EnemyMissile46.nY[j] = 0;
					}
				}
			}
}
void UserCrash46()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom48 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime57 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime57 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime57 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime57 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime57 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom48>1600) && (clock() - g_sPlayer.OldTime57>2000))
		if (g_sPlayer.nY == g_EnemyMissile46.nY[j] && (g_EnemyMissile46.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile46.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile46.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom48 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile46.nX[j] = 0;
			g_EnemyMissile46.nY[j] = 0;
			g_EnemyMissile46.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime57 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}

void EnemyCrash46()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy46[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy46[j].Boom < 300)
					{
						gotoxy(g_Enemy46[j].x1 - g_Enemy46[j].x2 + g_Enemy46[j].nX, g_Enemy46[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy46[j].nY && (g_sPlayerMissile[i].nX - g_Enemy46[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy46[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy46[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy46[j].x2 = g_Enemy46[j].nX;
				g_Enemy46[j].Boom = clock();
				g_Enemy46[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy46[j].HP == 0)
				{
					gotoxy(g_Enemy46[j].nX, g_Enemy46[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy46[i].nX = 0; g_Enemy46[i].nY = 0;
					g_Enemy46[j].nLife = 2;
					g_Enemy46[j].nX = -1; g_Enemy46[j].nY = -1;
				}

			}
		}



}

// 오른쪽으로 향하는 2개 일반형
void Enemy47()
{
	if (clock() - extra>44000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy47[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy47[i].nLife = 1;
				g_Enemy47[i].nX = 6;
				g_Enemy47[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy47[i].nLife == 1)
		{

			if ((g_Enemy47[i].nY  < 15) && (clock() - g_Enemy47[i].MoveTime1>600))
			{
				g_Enemy47[i].MoveTime1 = clock();
				gotoxy(g_Enemy47[i].nX, g_Enemy47[i].nY);
				printf("      ");
				g_Enemy47[i].nY++;
				gotoxy(g_Enemy47[i].nX, g_Enemy47[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy47[i].nX - 3 < 79) && (clock() - g_Enemy47[i].MoveTime2 > 100))
			{
				g_Enemy47[i].MoveTime2 = clock();

				gotoxy(g_Enemy47[i].nX, g_Enemy47[i].nY);
				printf("      ");
				g_Enemy47[i].nX++;
				gotoxy(g_Enemy47[i].nX, g_Enemy47[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy47[i].nX + 5 == 79)
			{
				g_Enemy47[i].nLife = 2;
				gotoxy(g_Enemy47[i].nX, g_Enemy47[i].nY);
				printf("      ");
				g_Enemy47[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile47()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile47.FireTime>2000 && g_Enemy47[i].nLife == 1)
			{
				
				if (g_EnemyMissile47.nLife[j] == 0)
				{
					g_EnemyMissile47.FireTime = clock();
					g_EnemyMissile47.nLife[j] = 1;
					g_EnemyMissile47.nX[j] = g_Enemy47[i].nX + 2;
					g_EnemyMissile47.nY[j] = g_Enemy47[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile47.AppearTime[j] >= 40))
			{
				g_EnemyMissile47.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile47->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile47.nLife[j] == 1)
				{

					if (g_EnemyMissile47.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile47.nX[j], g_EnemyMissile47.nY[j]);
						printf("  ");
						g_EnemyMissile47.nY[j]++;
						gotoxy(g_EnemyMissile47.nX[j], g_EnemyMissile47.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy47[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy47[i].nX = 0;
							g_Enemy47[i].nY = 0;

						}
						g_EnemyMissile47.nLife[j] = 0;
						gotoxy(g_EnemyMissile47.nX[j], g_EnemyMissile47.nY[j]);
						printf("  ");
						g_EnemyMissile47.nX[j] = 0; g_EnemyMissile47.nY[j] = 0;
					}
				}
			}
}
void UserCrash47()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom49 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime58 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime58 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime58 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime58 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime58 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom49>1600) && (clock() - g_sPlayer.OldTime58>2000))
		if (g_sPlayer.nY == g_EnemyMissile47.nY[j] && (g_EnemyMissile47.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile47.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile47.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom49 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile47.nX[j] = 0;
			g_EnemyMissile47.nY[j] = 0;
			g_EnemyMissile47.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime58 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash47()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy47[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy47[j].Boom < 300)
					{
						gotoxy(g_Enemy47[j].x1 - g_Enemy47[j].x2 + g_Enemy47[j].nX, g_Enemy47[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy47[j].nY && (g_sPlayerMissile[i].nX - g_Enemy47[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy47[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy47[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy47[j].x2 = g_Enemy47[j].nX;
				g_Enemy47[j].Boom = clock();
				g_Enemy47[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy47[j].HP == 0)
				{
					gotoxy(g_Enemy47[j].nX, g_Enemy47[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy47[i].nX = 0; g_Enemy47[i].nY = 0;
					g_Enemy47[j].nLife = 2;
					g_Enemy47[j].nX = -1; g_Enemy47[j].nY = -1;
				}

			}
		}



}


void Enemy48()
{
	if (clock() - extra>44000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy48[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy48[i].nLife = 1;
				g_Enemy48[i].nX = 0;
				g_Enemy48[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy48[i].nLife == 1)
		{

			if ((g_Enemy48[i].nY  < 15) && (clock() - g_Enemy48[i].MoveTime1>600))
			{
				g_Enemy48[i].MoveTime1 = clock();
				gotoxy(g_Enemy48[i].nX, g_Enemy48[i].nY);
				printf("      ");
				g_Enemy48[i].nY++;
				gotoxy(g_Enemy48[i].nX, g_Enemy48[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy48[i].nX - 3 < 79) && (clock() - g_Enemy48[i].MoveTime2 > 100))
			{
				g_Enemy48[i].MoveTime2 = clock();

				gotoxy(g_Enemy48[i].nX, g_Enemy48[i].nY);
				printf("      ");
				g_Enemy48[i].nX++;
				gotoxy(g_Enemy48[i].nX, g_Enemy48[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy48[i].nX + 5 == 79)
			{
				g_Enemy48[i].nLife = 2;
				gotoxy(g_Enemy48[i].nX, g_Enemy48[i].nY);
				printf("      ");
				g_Enemy48[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile48()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile48.FireTime>2000 && g_Enemy48[i].nLife == 1)
			{
				
				if (g_EnemyMissile48.nLife[j] == 0)
				{

					g_EnemyMissile48.FireTime = clock();
					g_EnemyMissile48.nLife[j] = 1;
					g_EnemyMissile48.nX[j] = g_Enemy48[i].nX + 2;
					g_EnemyMissile48.nY[j] = g_Enemy48[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile48.AppearTime[j] >= 40))
			{
				g_EnemyMissile48.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile48->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile48.nLife[j] == 1)
				{

					if (g_EnemyMissile48.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile48.nX[j], g_EnemyMissile48.nY[j]);
						printf("  ");
						g_EnemyMissile48.nY[j]++;
						gotoxy(g_EnemyMissile48.nX[j], g_EnemyMissile48.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy48[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy48[i].nX = 0;
							g_Enemy48[i].nY = 0;

						}
						g_EnemyMissile48.nLife[j] = 0;
						gotoxy(g_EnemyMissile48.nX[j], g_EnemyMissile48.nY[j]);
						printf("  ");
						g_EnemyMissile48.nX[j] = 0; g_EnemyMissile48.nY[j] = 0;
					}
				}
			}
}
void UserCrash48()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom50 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime59 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime59 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime59 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime59 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime59 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom50>1600) && (clock() - g_sPlayer.OldTime59>2000))
		if (g_sPlayer.nY == g_EnemyMissile48.nY[j] && (g_EnemyMissile48.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile48.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile48.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom50 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile48.nX[j] = 0;
			g_EnemyMissile48.nY[j] = 0;
			g_EnemyMissile48.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime59 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash48()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy48[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy48[j].Boom < 300)
					{
						gotoxy(g_Enemy48[j].x1 - g_Enemy48[j].x2 + g_Enemy48[j].nX, g_Enemy48[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy48[j].nY && (g_sPlayerMissile[i].nX - g_Enemy48[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy48[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy48[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy48[j].x2 = g_Enemy48[j].nX;
				g_Enemy48[j].Boom = clock();
				g_Enemy48[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy48[j].HP == 0)
				{
					gotoxy(g_Enemy48[j].nX, g_Enemy48[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy48[i].nX = 0; g_Enemy48[i].nY = 0;
					g_Enemy48[j].nLife = 2;
					g_Enemy48[j].nX = -1; g_Enemy48[j].nY = -1;
				}

			}
		}



}

//왼쪽으로 향하는 2개 일반형
void Enemy49()
{
	if (clock() - extra>44000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy49[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy49[i].nLife = 1;
				g_Enemy49[i].nX = 68;
				g_Enemy49[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy49[i].nLife == 1)
		{

			if ((g_Enemy49[i].nY  < 15) && (clock() - g_Enemy49[i].MoveTime1>600))
			{
				g_Enemy49[i].MoveTime1 = clock();
				gotoxy(g_Enemy49[i].nX, g_Enemy49[i].nY);
				printf("      ");
				g_Enemy49[i].nY++;
				gotoxy(g_Enemy49[i].nX, g_Enemy49[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy49[i].nX - 3 < 79) && (clock() - g_Enemy49[i].MoveTime2 > 100))
			{
				g_Enemy49[i].MoveTime2 = clock();

				gotoxy(g_Enemy49[i].nX, g_Enemy49[i].nY);
				printf("      ");
				g_Enemy49[i].nX--;
				gotoxy(g_Enemy49[i].nX, g_Enemy49[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy49[i].nX == 0)
			{
				g_Enemy49[i].nLife = 2;
				gotoxy(g_Enemy49[i].nX, g_Enemy49[i].nY);
				printf("      ");
				g_Enemy49[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile49()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile49.FireTime>2000 && g_Enemy49[i].nLife == 1)
			{
				
				if (g_EnemyMissile49.nLife[j] == 0)
				{
					g_EnemyMissile49.FireTime = clock();
					g_EnemyMissile49.nLife[j] = 1;
					g_EnemyMissile49.nX[j] = g_Enemy49[i].nX + 2;
					g_EnemyMissile49.nY[j] = g_Enemy49[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile49.AppearTime[j] >= 40))
			{
				g_EnemyMissile49.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile49->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile49.nLife[j] == 1)
				{

					if (g_EnemyMissile49.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile49.nX[j], g_EnemyMissile49.nY[j]);
						printf("  ");
						g_EnemyMissile49.nY[j]++;
						gotoxy(g_EnemyMissile49.nX[j], g_EnemyMissile49.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy49[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy49[i].nX = 0;
							g_Enemy49[i].nY = 0;

						}
						g_EnemyMissile49.nLife[j] = 0;
						gotoxy(g_EnemyMissile49.nX[j], g_EnemyMissile49.nY[j]);
						printf("  ");
						g_EnemyMissile49.nX[j] = 0; g_EnemyMissile49.nY[j] = 0;
					}
				}
			}
}
void UserCrash49()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom51 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime60 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime60 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime60 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime60 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime60 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom51>1600) && (clock() - g_sPlayer.OldTime60>2000))
		if (g_sPlayer.nY == g_EnemyMissile49.nY[j] && (g_EnemyMissile49.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile49.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile49.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom51 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile49.nX[j] = 0;
			g_EnemyMissile49.nY[j] = 0;
			g_EnemyMissile49.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime60 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash49()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy49[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy49[j].Boom < 300)
					{
						gotoxy(g_Enemy49[j].x1 - g_Enemy49[j].x2 + g_Enemy49[j].nX, g_Enemy49[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy49[j].nY && (g_sPlayerMissile[i].nX - g_Enemy49[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy49[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy49[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy49[j].x2 = g_Enemy49[j].nX;
				g_Enemy49[j].Boom = clock();
				g_Enemy49[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy49[j].HP == 0)
				{
					gotoxy(g_Enemy49[j].nX, g_Enemy49[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy49[i].nX = 0; g_Enemy49[i].nY = 0;
					g_Enemy49[j].nLife = 2;
					g_Enemy49[j].nX = -1; g_Enemy49[j].nY = -1;
				}

			}
		}



}

void Enemy50()
{
	if (clock() - extra>44000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy50[i].nLife == 0)
			{
				//g_Enemy10[i].MoveTime1 = clock();
				g_Enemy50[i].nLife = 1;
				g_Enemy50[i].nX = 74;
				g_Enemy50[i].nY = 1;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy50[i].nLife == 1)
		{

			if ((g_Enemy50[i].nY  < 15) && (clock() - g_Enemy50[i].MoveTime1>600))
			{
				g_Enemy50[i].MoveTime1 = clock();
				gotoxy(g_Enemy50[i].nX, g_Enemy50[i].nY);
				printf("      ");
				g_Enemy50[i].nY++;
				gotoxy(g_Enemy50[i].nX, g_Enemy50[i].nY);
				printf("◁▣▷");


			}
			if ((g_Enemy50[i].nX - 3 < 79) && (clock() - g_Enemy50[i].MoveTime2 > 100))
			{
				g_Enemy50[i].MoveTime2 = clock();

				gotoxy(g_Enemy50[i].nX, g_Enemy50[i].nY);
				printf("      ");
				g_Enemy50[i].nX--;
				gotoxy(g_Enemy50[i].nX, g_Enemy50[i].nY);
				printf("◁▣▷");

			}
			if (g_Enemy50[i].nX == 0)
			{
				g_Enemy50[i].nLife = 2;
				gotoxy(g_Enemy50[i].nX, g_Enemy50[i].nY);
				printf("      ");
				g_Enemy50[i].nY = -100;
			}

		}

	}
}
void Enemy_Missile50()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile50.FireTime>2000 && g_Enemy50[i].nLife == 1)
			{
				
				if (g_EnemyMissile50.nLife[j] == 0)
				{
					g_EnemyMissile50.FireTime = clock();
					g_EnemyMissile50.nLife[j] = 1;
					g_EnemyMissile50.nX[j] = g_Enemy50[i].nX + 2;
					g_EnemyMissile50.nY[j] = g_Enemy50[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile50.AppearTime[j] >= 40))
			{
				g_EnemyMissile50.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile50->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile50.nLife[j] == 1)
				{

					if (g_EnemyMissile50.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile50.nX[j], g_EnemyMissile50.nY[j]);
						printf("  ");
						g_EnemyMissile50.nY[j]++;
						gotoxy(g_EnemyMissile50.nX[j], g_EnemyMissile50.nY[j]);
						printf("▽");
					}
					else
					{
						if (g_Enemy50[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy50[i].nX = 0;
							g_Enemy50[i].nY = 0;

						}
						g_EnemyMissile50.nLife[j] = 0;
						gotoxy(g_EnemyMissile50.nX[j], g_EnemyMissile50.nY[j]);
						printf("  ");
						g_EnemyMissile50.nX[j] = 0; g_EnemyMissile50.nY[j] = 0;
					}
				}
			}
}
void UserCrash50()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom52 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime61 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime61 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime61 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime61 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime61 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom52>1600) && (clock() - g_sPlayer.OldTime61>2000))
		if (g_sPlayer.nY == g_EnemyMissile50.nY[j] && (g_EnemyMissile50.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile50.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile50.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom52 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile50.nX[j] = 0;
			g_EnemyMissile50.nY[j] = 0;
			g_EnemyMissile50.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime61 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash50()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy50[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy50[j].Boom < 300)
					{
						gotoxy(g_Enemy50[j].x1 - g_Enemy50[j].x2 + g_Enemy50[j].nX, g_Enemy50[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy50[j].nY && (g_sPlayerMissile[i].nX - g_Enemy50[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy50[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy50[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy50[j].x2 = g_Enemy50[j].nX;
				g_Enemy50[j].Boom = clock();
				g_Enemy50[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy50[j].HP == 0)
				{
					gotoxy(g_Enemy50[j].nX, g_Enemy50[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy50[i].nX = 0; g_Enemy50[i].nY = 0;
					g_Enemy50[j].nLife = 2;
					g_Enemy50[j].nX = -1; g_Enemy50[j].nY = -1;
				}

			}
		}



}

//왼쪽 위로 올라가는 1개 쌍형
void Enemy51()
{
	if (clock() - extra>49000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy51[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy51[i].nLife = 1;
				g_Enemy51[i].nX = 25;
				g_Enemy51[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy51[i].nLife == 1)
		{

			if ((g_Enemy51[i].nY  < 3) && (clock() - g_Enemy51[i].MoveTime1>200) && clock() - g_Enemy51[i].MoveTime2 > 500)
			{
				g_Enemy51[i].MoveTime1 = clock();

				gotoxy(g_Enemy51[i].nX, g_Enemy51[i].nY);
				printf("          ");
				g_Enemy51[i].nY++;
				gotoxy(g_Enemy51[i].nX, g_Enemy51[i].nY);
				printf("＜ωψω＞");

				//무브타임 설정해줘서 시간딜레이 넣고 수정하기
			}
			if (clock() - g_Enemy51[i].MoveTime1 > 3000)
			{
				if (g_Enemy51[i].nY>0 && (clock() - g_Enemy51[i].MoveTime2 > 200))
				{
					g_Enemy51[i].MoveTime2 = clock();
					gotoxy(g_Enemy51[i].nX, g_Enemy51[i].nY);
					printf("          ");
					g_Enemy51[i].nY--;
					gotoxy(g_Enemy51[i].nX, g_Enemy51[i].nY);
					printf("＜ωψω＞");
				}
				if (g_Enemy51[i].nY == 0)
				{
					g_Enemy51[i].nLife = 2;
					gotoxy(g_Enemy51[i].nX, g_Enemy51[i].nY);
					printf("          ");
					g_Enemy51[i].nY = -100;
				}
			}


		}

	}
}
void Enemy_Missile51_1()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_Enemy51[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile51_1.FireTime >= 80 && g_EnemyMissile51_1.nLife[j] == 0)
				{
					g_EnemyMissile51_1.FireTime = clock();
					g_EnemyMissile51_1.nLife[j] = 1;
					g_EnemyMissile51_1.nX[j] = g_Enemy51[i].nX + 2;
					g_EnemyMissile51_1.nY[j] = g_Enemy51[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile51_1.AppearTime[j] >= 40))
			{
				g_EnemyMissile51_1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile51_1->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile51_1.nLife[j] == 1)
				{

					if (g_EnemyMissile51_1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile51_1.nX[j], g_EnemyMissile51_1.nY[j]);
						printf("  ");
						g_EnemyMissile51_1.nY[j]++;
						gotoxy(g_EnemyMissile51_1.nX[j], g_EnemyMissile51_1.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy51[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy51[i].nX = 0;
							g_Enemy51[i].nY = 0;

						}
						g_EnemyMissile51_1.nLife[j] = 0;
						gotoxy(g_EnemyMissile51_1.nX[j], g_EnemyMissile51_1.nY[j]);
						printf("  ");
						g_EnemyMissile51_1.nX[j] = 0; g_EnemyMissile51_1.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile51_2()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_Enemy51[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile51_2.FireTime >= 80 && g_EnemyMissile51_2.nLife[j] == 0)
				{
					g_EnemyMissile51_2.FireTime = clock();
					g_EnemyMissile51_2.nLife[j] = 1;
					g_EnemyMissile51_2.nX[j] = g_Enemy51[i].nX + 6;
					g_EnemyMissile51_2.nY[j] = g_Enemy51[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile51_2.AppearTime[j] >= 40))
			{
				g_EnemyMissile51_2.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile51_2->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile51_2.nLife[j] == 1)
				{

					if (g_EnemyMissile51_2.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile51_2.nX[j], g_EnemyMissile51_2.nY[j]);
						printf("  ");
						g_EnemyMissile51_2.nY[j]++;
						gotoxy(g_EnemyMissile51_2.nX[j], g_EnemyMissile51_2.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy51[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy51[i].nX = 0;
							g_Enemy51[i].nY = 0;

						}
						g_EnemyMissile51_2.nLife[j] = 0;
						gotoxy(g_EnemyMissile51_2.nX[j], g_EnemyMissile51_2.nY[j]);
						printf("  ");
						g_EnemyMissile51_2.nX[j] = 0; g_EnemyMissile51_2.nY[j] = 0;
					}
				}
			}
}
void UserCrash51_1()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom53 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime62 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime62 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime62 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime62 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime62 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom53>1600) && (clock() - g_sPlayer.OldTime62>2000))
		if (g_sPlayer.nY == g_EnemyMissile51_1.nY[j] && (g_EnemyMissile51_1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile51_1.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile51_1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom53 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile51_1.nX[j] = 0;
			g_EnemyMissile51_1.nY[j] = 0;
			g_EnemyMissile51_1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime62 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash51_2()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom54 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime63 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime63 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime63 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime63 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime63 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom54>1600) && (clock() - g_sPlayer.OldTime63>2000))
		if (g_sPlayer.nY == g_EnemyMissile51_2.nY[j] && (g_EnemyMissile51_2.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile51_2.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile51_2.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom54 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile51_2.nX[j] = 0;
			g_EnemyMissile51_2.nY[j] = 0;
			g_EnemyMissile51_2.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime63 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash51()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy51[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy51[j].Boom < 300)
					{
						gotoxy(g_Enemy51[j].x1 - g_Enemy51[j].x2 + g_Enemy51[j].nX, g_Enemy51[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy51[j].nY && (g_sPlayerMissile[i].nX - g_Enemy51[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy51[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy51[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy51[j].x2 = g_Enemy51[j].nX;
				g_Enemy51[j].Boom = clock();
				g_Enemy51[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy51[j].HP == 0)
				{
					gotoxy(g_Enemy51[j].nX, g_Enemy51[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy51[i].nX = 0; g_Enemy51[i].nY = 0;
					g_Enemy51[j].nLife = 2;
					g_Enemy51[j].nX = -1; g_Enemy51[j].nY = -1;
				}

			}
		}



}
void User_Enemy51()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime64 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime64 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime64 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime64 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime64 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy51[j].nY && (g_Enemy51[j].nX - g_sPlayer.nX) < 6 && (g_Enemy51[j].nX - g_sPlayer.nX) > -9)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime64 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime64 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//오른쪽 위로 올라가는 1개 쌍형
void Enemy52()
{
	if (clock() - extra>53000)
	{
		for (int i = 0; i < 1; i++)
		{

			if (g_Enemy52[i].nLife == 0)
			{
				//g_Enemy3[i].MoveTime1 = clock();
				g_Enemy52[i].nLife = 1;
				g_Enemy52[i].nX = 65;
				g_Enemy52[i].nY = 0;

				break;
			}
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (g_Enemy52[i].nLife == 1)
		{

			if ((g_Enemy52[i].nY  < 3) && (clock() - g_Enemy52[i].MoveTime1>200) && clock() - g_Enemy52[i].MoveTime2 > 500)
			{
				g_Enemy52[i].MoveTime1 = clock();

				gotoxy(g_Enemy52[i].nX, g_Enemy52[i].nY);
				printf("          ");
				g_Enemy52[i].nY++;
				gotoxy(g_Enemy52[i].nX, g_Enemy52[i].nY);
				printf("＜ωψω＞");

				//무브타임 설정해줘서 시간딜레이 넣고 수정하기
			}
			if (clock() - g_Enemy52[i].MoveTime1 > 3000)
			{
				if (g_Enemy52[i].nY>0 && (clock() - g_Enemy52[i].MoveTime2 > 200))
				{
					g_Enemy52[i].MoveTime2 = clock();
					gotoxy(g_Enemy52[i].nX, g_Enemy52[i].nY);
					printf("          ");
					g_Enemy52[i].nY--;
					gotoxy(g_Enemy52[i].nX, g_Enemy52[i].nY);
					printf("＜ωψω＞");
				}
				if (g_Enemy52[i].nY == 0)
				{
					g_Enemy52[i].nLife = 2;
					gotoxy(g_Enemy52[i].nX, g_Enemy52[i].nY);
					printf("          ");
					g_Enemy52[i].nY = -100;
				}
			}
		}

	}
}
void Enemy_Missile52_1()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_Enemy52[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile52_1.FireTime >= 80 && g_EnemyMissile52_1.nLife[j] == 0)
				{
					g_EnemyMissile52_1.FireTime = clock();
					g_EnemyMissile52_1.nLife[j] = 1;
					g_EnemyMissile52_1.nX[j] = g_Enemy52[i].nX + 2;
					g_EnemyMissile52_1.nY[j] = g_Enemy52[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile52_1.AppearTime[j] >= 40))
			{
				g_EnemyMissile52_1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile52_1->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile52_1.nLife[j] == 1)
				{

					if (g_EnemyMissile52_1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile52_1.nX[j], g_EnemyMissile52_1.nY[j]);
						printf("  ");
						g_EnemyMissile52_1.nY[j]++;
						gotoxy(g_EnemyMissile52_1.nX[j], g_EnemyMissile52_1.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy52[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy52[i].nX = 0;
							g_Enemy52[i].nY = 0;

						}
						g_EnemyMissile52_1.nLife[j] = 0;
						gotoxy(g_EnemyMissile52_1.nX[j], g_EnemyMissile52_1.nY[j]);
						printf("  ");
						g_EnemyMissile52_1.nX[j] = 0; g_EnemyMissile52_1.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile52_2()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_Enemy52[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile52_2.FireTime >= 80 && g_EnemyMissile52_2.nLife[j] == 0)
				{
					g_EnemyMissile52_2.FireTime = clock();
					g_EnemyMissile52_2.nLife[j] = 1;
					g_EnemyMissile52_2.nX[j] = g_Enemy52[i].nX + 6;
					g_EnemyMissile52_2.nY[j] = g_Enemy52[i].nY + 1;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile52_2.AppearTime[j] >= 40))
			{
				g_EnemyMissile52_2.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile52_2->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile52_2.nLife[j] == 1)
				{

					if (g_EnemyMissile52_2.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile52_2.nX[j], g_EnemyMissile52_2.nY[j]);
						printf("  ");
						g_EnemyMissile52_2.nY[j]++;
						gotoxy(g_EnemyMissile52_2.nX[j], g_EnemyMissile52_2.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_Enemy52[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_Enemy52[i].nX = 0;
							g_Enemy52[i].nY = 0;

						}
						g_EnemyMissile52_2.nLife[j] = 0;
						gotoxy(g_EnemyMissile52_2.nX[j], g_EnemyMissile52_2.nY[j]);
						printf("  ");
						g_EnemyMissile52_2.nX[j] = 0; g_EnemyMissile52_2.nY[j] = 0;
					}
				}
			}
}
void UserCrash52_1()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom55 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime65 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime65 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime65 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime65 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime65 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom55>1600) && (clock() - g_sPlayer.OldTime65>2000))
		if (g_sPlayer.nY == g_EnemyMissile52_1.nY[j] && (g_EnemyMissile52_1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile52_1.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile52_1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom55 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile52_1.nX[j] = 0;
			g_EnemyMissile52_1.nY[j] = 0;
			g_EnemyMissile52_1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime65 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash52_2()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom56 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime66 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime66 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime66 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime66 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime66 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom56>1600) && (clock() - g_sPlayer.OldTime66>2000))
		if (g_sPlayer.nY == g_EnemyMissile52_2.nY[j] && (g_EnemyMissile52_2.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile52_2.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile52_2.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom56 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile52_2.nX[j] = 0;
			g_EnemyMissile52_2.nY[j] = 0;
			g_EnemyMissile52_2.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime66 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash52()
{
	for (int j = 0; j<1; j++)
		for (int i = 0; i < 10; i++)
		{
			if (g_Enemy52[j].HP != 0)// 수정1 복사
			{
				if (clock()>300)
					if (clock() - g_Enemy52[j].Boom < 300)
					{
						gotoxy(g_Enemy52[j].x1 - g_Enemy52[j].x2 + g_Enemy52[j].nX, g_Enemy52[j].nY);
						printf("※");

					}
			}
			if (g_sPlayerMissile[i].nY == g_Enemy52[j].nY && (g_sPlayerMissile[i].nX - g_Enemy52[j].nX) < 6 && (g_sPlayerMissile[i].nX - g_Enemy52[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
			{

				g_Enemy52[j].x1 = g_sPlayerMissile[i].nX;
				g_Enemy52[j].x2 = g_Enemy52[j].nX;
				g_Enemy52[j].Boom = clock();
				g_Enemy52[j].HP--;
				g_sPlayerMissile[i].nLife = 0;
				g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
				if (g_Enemy52[j].HP == 0)
				{
					gotoxy(g_Enemy52[j].nX, g_Enemy52[j].nY);
					printf("      ");//스페이스바 7번..
									 //g_Enemy52[i].nX = 0; g_Enemy52[i].nY = 0;
					g_Enemy52[j].nLife = 2;
					g_Enemy52[j].nX = -1; g_Enemy52[j].nY = -1;
				}

			}
		}



}
void User_Enemy52()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime67 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime67 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime67 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime67 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime67 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");


			char arr[] = "dqdqw";
		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy52[j].nY && (g_Enemy52[j].nX - g_sPlayer.nX) < 6 && (g_Enemy52[j].nX - g_sPlayer.nX) > -9)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime67 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime67 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//보스 50 

void Enemy53()//처음 왼쪽 등장 적 비행기
{
	if (clock() - extra < 55000)
	{
		if (clock() - extra > 50000)
		{
			gotoxy(10, 20);
			printf("BOSS EMERGE!!!");
		}
		if (clock() - extra > 51000)
		{
			gotoxy(10, 20);
			printf("              ");
		}
		if (clock() - extra > 52000)
		{
			gotoxy(10, 20);
			printf("BOSS EMERGE!!!");
		}
		if (clock() - extra > 53000)
		{
			gotoxy(10, 20);
			printf("              ");
		}
		if (clock() - extra > 54000)
		{
			gotoxy(10, 20);
			printf("BOSS EMERGE!!!");
		}
		if (clock() - extra > 54900)
		{
			gotoxy(10, 20);
			printf("              ");
		}

	}
	if (clock() - extra > 55000)//55000
	{
		for (int i = 0; i < 1; i++)
		{
			

			if (g_BOSS[i].nLife == 0)
			{
				//g_Enemy[i].MoveTime1 = clock();
				g_BOSS[i].nLife = 1;
				g_BOSS[i].nX = 15;
				g_BOSS[i].nY = 0;
				break;
			}
		}
	}
	

	
	for (int i = 0; i < 1; i++)
	{
		if (g_BOSS[i].nLife == 1)
		{
			
			if ((g_BOSS[i].nY < 25) && (clock() - g_BOSS[i].MoveTime1>50) && clock() - g_BOSS[i].MoveTime2 > 5000&& clock() - g_BOSS[i].MoveTime3>3000
				&& clock()-g_BOSS[i].MoveTime5>3000 &&clock() - g_BOSS[i].MoveTime6 > 3000)
			{
				g_BOSS[i].MoveTime1 = clock();
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
				gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
				gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
				g_BOSS[i].nY++;
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
				gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
				gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");
	



			}
			
			if (clock() - g_BOSS[i].MoveTime1 > 3000 && clock() - g_BOSS[i].MoveTime3>3000&& clock()-g_BOSS[i].MoveTime5>3000 
				&& clock() - g_BOSS[i].MoveTime6 > 3000)
			{
				if (g_BOSS[i].nY>0 && (clock() - g_BOSS[i].MoveTime2 > 50))
				{
					g_BOSS[i].MoveTime2 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
					g_BOSS[i].nY--;
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");

				}
			}
			if (clock() - g_BOSS[i].MoveTime2 > 4000 && clock() - g_BOSS[i].MoveTime1 > 4000)
			{
			// 왼쪽 x증가부분 이상현상잡기 
				//Y++
				if(clock() - g_BOSS[i].MoveTime6 > 195)
				if ( g_BOSS[i].nY<25 &&clock() - g_BOSS[i].MoveTime3 > 145)
				{

					g_BOSS[i].MoveTime3 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
					g_BOSS[i].nY++;
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");


				}
				
				//x++
				if(clock()-g_BOSS[i].MoveTime5 > 300 && clock() - g_BOSS[i].MoveTime7>200)
				if ( g_BOSS[i].nX<30 &&clock() - g_BOSS[i].MoveTime4 > 130)
				{
					g_BOSS[i].MoveTime4 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
				g_BOSS[i].nX++;
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
				gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
				gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
				gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");

				}//x++
				//x--
				if (clock()-g_BOSS[i].MoveTime4 > 200 &&clock() - g_BOSS[i].MoveTime7 > 300)
				if ( g_BOSS[i].nX>1 && clock() - g_BOSS[i].MoveTime5 > 130)
				{
					g_BOSS[i].MoveTime5 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
					g_BOSS[i].nX--;
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");

				}
				
				//y--
				if (clock() - g_BOSS[i].MoveTime3 > 195)
				if (g_BOSS[i].nY>0 && clock() - g_BOSS[i].MoveTime6 > 145)
				{
					g_BOSS[i].MoveTime6 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
					g_BOSS[i].nY--;
					
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");

				}
				//x++
				if (clock()-g_BOSS[i].MoveTime4 > 300 && clock()-g_BOSS[i].MoveTime5 > 200)
				if ( g_BOSS[i].nX<=15  && clock() - g_BOSS[i].MoveTime7 > 130)
				{
					g_BOSS[i].MoveTime7 = clock();

					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("      "); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("          "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("      "); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("        "); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("      ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("          "); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("        "); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf("                                                  ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("                              ");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("                          ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("                                                  ");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("                                                  ");
					g_BOSS[i].nX++;
					
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY); printf("l￣￣l"); gotoxy(g_BOSS[i].nX + 20, g_BOSS[i].nY); printf("(////////)"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY); printf("l￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 1); printf("l    l"); gotoxy(g_BOSS[i].nX + 21, g_BOSS[i].nY + 1); printf("lΘ  Θl"); gotoxy(g_BOSS[i].nX + 44, g_BOSS[i].nY + 1); printf("l    l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 2); printf("l￣￣￣￣l"); gotoxy(g_BOSS[i].nX + 22, g_BOSS[i].nY + 2); printf("l ¤ l"); gotoxy(g_BOSS[i].nX + 40, g_BOSS[i].nY + 2); printf("l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 3); printf("l        l.￣￣￣￣￣l￣￣￣l￣￣￣￣￣.l        l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 4); printf(" ￣￣￣￣l           l  ∮  l           l￣￣￣￣ ");
					gotoxy(g_BOSS[i].nX + 10, g_BOSS[i].nY + 5); printf("￣l        l      l        l￣");
					gotoxy(g_BOSS[i].nX + 12, g_BOSS[i].nY + 6); printf("l￣￣￣￣l      l￣￣￣￣l");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 7); printf("＿＿＿＿＿＿l        l      l        l＿＿＿＿＿＿");
					gotoxy(g_BOSS[i].nX, g_BOSS[i].nY + 8); printf("l＿＿ll＿＿ll＿＿.＿l￣ ∏ ￣l＿＿.＿ll＿＿ll＿＿l");

				}

			}
			
			
		

		}

	}
}

void Enemy_Missile53_1()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_BOSS[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile53_1.FireTime >= 200 && g_EnemyMissile53_1.nLife[j] == 0)
				{
					g_EnemyMissile53_1.FireTime = clock();
					g_EnemyMissile53_1.nLife[j] = 1;
					g_EnemyMissile53_1.nX[j] = g_BOSS[i].nX + 5;
					g_EnemyMissile53_1.nY[j] = g_BOSS[i].nY + 9;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile53_1.AppearTime[j] >= 40))
			{
				g_EnemyMissile53_1.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile53_1->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile53_1.nLife[j] == 1)
				{

					if (g_EnemyMissile53_1.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile53_1.nX[j], g_EnemyMissile53_1.nY[j]);
						printf("  ");
						g_EnemyMissile53_1.nY[j]++;
						gotoxy(g_EnemyMissile53_1.nX[j], g_EnemyMissile53_1.nY[j]);
						printf("Ξ");
						
						
					}
					else
					{
						if (g_BOSS[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_BOSS[i].nX = 0;
							g_BOSS[i].nY = 0;

						}
						g_EnemyMissile53_1.nLife[j] = 0;
						gotoxy(g_EnemyMissile53_1.nX[j], g_EnemyMissile53_1.nY[j]);
						printf("  ");
						g_EnemyMissile53_1.nX[j] = 0; g_EnemyMissile53_1.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile53_2()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (g_BOSS[i].nLife == 1)
			{

				if (clock() - g_EnemyMissile53_2.FireTime >= 200 && g_EnemyMissile53_2.nLife[j] == 0)
				{
					g_EnemyMissile53_2.FireTime = clock();
					g_EnemyMissile53_2.nLife[j] = 1;
					g_EnemyMissile53_2.nX[j] = g_BOSS[i].nX + 43;
					g_EnemyMissile53_2.nY[j] = g_BOSS[i].nY + 9;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile53_2.AppearTime[j] >= 40))
			{
				g_EnemyMissile53_2.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile53_2->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile53_2.nLife[j] == 1)
				{

					if (g_EnemyMissile53_2.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile53_2.nX[j], g_EnemyMissile53_2.nY[j]);
						printf("  ");
						g_EnemyMissile53_2.nY[j]++;
						gotoxy(g_EnemyMissile53_2.nX[j], g_EnemyMissile53_2.nY[j]);
						printf("Ξ");
					}
					else
					{
						if (g_BOSS[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_BOSS[i].nX = 0;
							g_BOSS[i].nY = 0;

						}
						g_EnemyMissile53_2.nLife[j] = 0;
						gotoxy(g_EnemyMissile53_2.nX[j], g_EnemyMissile53_2.nY[j]);
						printf("  ");
						g_EnemyMissile53_2.nX[j] = 0; g_EnemyMissile53_2.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile53_3()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile53_3.FireTime>300 && g_BOSS[i].nLife == 1)
			{
				
				if (g_EnemyMissile53_3.nLife[j] == 0)
				{
					g_EnemyMissile53_3.FireTime = clock();
					g_EnemyMissile53_3.nLife[j] = 1;
					g_EnemyMissile53_3.nX[j] = g_BOSS[i].nX + 11;
					g_EnemyMissile53_3.nY[j] = g_BOSS[i].nY + 9;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile53_3.AppearTime[j] >= 40))
			{
				g_EnemyMissile53_3.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile53_3->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile53_3.nLife[j] == 1)
				{

					if (g_EnemyMissile53_3.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile53_3.nX[j], g_EnemyMissile53_3.nY[j]);
						printf("  ");
						g_EnemyMissile53_3.nY[j]++;
						gotoxy(g_EnemyMissile53_3.nX[j], g_EnemyMissile53_3.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_BOSS[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_BOSS[i].nX = 0;
							g_BOSS[i].nY = 0;

						}
						g_EnemyMissile53_3.nLife[j] = 0;
						gotoxy(g_EnemyMissile53_3.nX[j], g_EnemyMissile53_3.nY[j]);
						printf("  ");
						g_EnemyMissile53_3.nX[j] = 0; g_EnemyMissile53_3.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile53_4()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile53_4.FireTime>300 && g_BOSS[i].nLife == 1)
			{
				
				if (g_EnemyMissile53_4.nLife[j] == 0)
				{
					g_EnemyMissile53_4.FireTime = clock();
					g_EnemyMissile53_4.nLife[j] = 1;
					g_EnemyMissile53_4.nX[j] = g_BOSS[i].nX +37;
					g_EnemyMissile53_4.nY[j] = g_BOSS[i].nY + 9;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile53_4.AppearTime[j] >= 40))
			{
				g_EnemyMissile53_4.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile53_4->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile53_4.nLife[j] == 1)
				{

					if (g_EnemyMissile53_4.nY[j] < 34)
					{
						gotoxy(g_EnemyMissile53_4.nX[j], g_EnemyMissile53_4.nY[j]);
						printf("  ");
						g_EnemyMissile53_4.nY[j]++;
						gotoxy(g_EnemyMissile53_4.nX[j], g_EnemyMissile53_4.nY[j]);
						printf("◎");
					}
					else
					{
						if (g_BOSS[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_BOSS[i].nX = 0;
							g_BOSS[i].nY = 0;

						}
						g_EnemyMissile53_4.nLife[j] = 0;
						gotoxy(g_EnemyMissile53_4.nX[j], g_EnemyMissile53_4.nY[j]);
						printf("  ");
						g_EnemyMissile53_4.nX[j] = 0; g_EnemyMissile53_4.nY[j] = 0;
					}
				}
			}
}
void Enemy_Missile53_5()
{
	//x%3==0일때

	for (int i = 0; i<1; i++)
		for (int j = 0; j < 10; j++)
		{
			if (clock() - g_EnemyMissile53_5.FireTime>50 && g_BOSS[i].nLife == 1)
			{
				
				if (g_EnemyMissile53_5.nLife[j] == 0)
				{
					g_EnemyMissile53_5.FireTime = clock();
					g_EnemyMissile53_5.nLife[j] = 1;
					g_EnemyMissile53_5.nX[j] = g_BOSS[i].nX + 24-3;
					g_EnemyMissile53_5.nY[j] = g_BOSS[i].nY + 9;
					break;
				}


			}
		}

	for (int i = 0; i<1; i++)
		for (int j = 0; j<10; j++)
			if ((clock() - g_EnemyMissile53_5.AppearTime[j] >= 40))
			{
				g_EnemyMissile53_5.AppearTime[j] = clock();// 여기서 초기화를 해주었기 때문에 반복문이 돌지않는다 따라서g_EnemyMissile53_5->AppearTime 때문에 오류가났다.
				if (g_EnemyMissile53_5.nLife[j] == 1)
				{

					if (g_EnemyMissile53_5.nY[j] < 34)
					{
						//gotoxy(g_EnemyMissile53_5.nX[j], g_EnemyMissile53_5.nY[j]);
						
						//printf("  ");
						//g_EnemyMissile53_5.nY[j]++;
						//gotoxy(g_EnemyMissile53_5.nX[j], g_EnemyMissile53_5.nY[j]);
						//printf("‡");

							if (j % 2 == 1)
							{
								gotoxy(g_EnemyMissile53_5.nX[j] , g_EnemyMissile53_5.nY[j]);
								printf("        ");
								g_EnemyMissile53_5.nY[j]++;
								gotoxy(g_EnemyMissile53_5.nX[j] , g_EnemyMissile53_5.nY[j]);
								printf("(■■■)");
							}
							if (j % 2 == 0)
							{
								gotoxy(g_EnemyMissile53_5.nX[j] , g_EnemyMissile53_5.nY[j]);
								printf("          ");
								g_EnemyMissile53_5.nY[j]++;
								gotoxy(g_EnemyMissile53_5.nX[j] , g_EnemyMissile53_5.nY[j]);
								printf("(□□□)");
							}

						
					}
					else
					{
						if (g_BOSS[i].nLife == 2)//비행기 터질시 미사일 중단하기
						{

							g_BOSS[i].nX = 0;
							g_BOSS[i].nY = 0;

						}
						g_EnemyMissile53_5.nLife[j] = 0;
						gotoxy(g_EnemyMissile53_5.nX[j], g_EnemyMissile53_5.nY[j]);
						printf("        ");
						g_EnemyMissile53_5.nX[j] = 0; g_EnemyMissile53_5.nY[j] = 0;
					}
				}
			}
}
void UserCrash53_5()
{

	for (int j = 0; j < 5; j++)
	{


		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime68 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime68 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime68 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime68 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime68 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom57>1600) && (clock() - g_sPlayer.OldTime68>2000))
		if (g_sPlayer.nY == g_EnemyMissile53_5.nY[j] && (g_EnemyMissile53_5.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile53_5.nX[j] - g_sPlayer.nX) >= -7)
		{


			//g_sPlayer.x1 = g_EnemyMissile53_5.nX[j];
			//g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.OldTime68 = clock();
			g_sPlayer.Boom57 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile53_5.nX[j] = 0;
			g_EnemyMissile53_5.nY[j] = 0;
			g_EnemyMissile53_5.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime68 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash53_3()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom58 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime69 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime69 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime69 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime69 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime69 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom58>1600) && (clock() - g_sPlayer.OldTime69>2000))
		if (g_sPlayer.nY == g_EnemyMissile53_3.nY[j] && (g_EnemyMissile53_3.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile53_3.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile53_3.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom58 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile53_3.nX[j] = 0;
			g_EnemyMissile53_3.nY[j] = 0;
			g_EnemyMissile53_3.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime69 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash53_4()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom59 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime70 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime70 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime70 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime70 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime70 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom59>1600) && (clock() - g_sPlayer.OldTime70>2000))
		if (g_sPlayer.nY == g_EnemyMissile53_4.nY[j] && (g_EnemyMissile53_4.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile53_4.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile53_4.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom59 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile53_4.nX[j] = 0;
			g_EnemyMissile53_4.nY[j] = 0;
			g_EnemyMissile53_4.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				g_sPlayer.OldTime70 = clock();
				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;
			}

			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash53_1()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom60 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime71 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime71 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime71 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime71 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime71 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom60>1600) && (clock() - g_sPlayer.OldTime71>2000))
		if (g_sPlayer.nY == g_EnemyMissile53_1.nY[j] && (g_EnemyMissile53_1.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile53_1.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile53_1.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom60 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile53_1.nX[j] = 0;
			g_EnemyMissile53_1.nY[j] = 0;
			g_EnemyMissile53_1.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				//수정


				g_sPlayer.OldTime71 = clock();

				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;


			}



			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void UserCrash53_2()
{

	for (int j = 0; j < 5; j++)
	{

		if (g_sPlayer.nHP != 0)
		{
			if (clock()>1500)
				if (clock() - g_sPlayer.Boom61 < 1500)
				{
					gotoxy(g_sPlayer.x1 - g_sPlayer.x2 + g_sPlayer.nX, g_sPlayer.nY);
					printf("※");

				}
		}
		if (clock()>1000)
			if (clock() - g_sPlayer.OldTime72 < 1000)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("    ☆");



			}
		if (clock()>800)
			if (clock() - g_sPlayer.OldTime72 < 800)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("   ★ ");



			}
		if (clock()>600)
			if (clock() - g_sPlayer.OldTime72 < 600)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("  ☆  ");



			}
		if (clock()>400)
			if (clock() - g_sPlayer.OldTime72 < 400)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf(" ★   ");



			}
		if (clock()>200)
			if (clock() - g_sPlayer.OldTime72 < 200)
			{
				gotoxy(g_sPlayer.nX, g_sPlayer.nY);
				printf("☆    ");



			}

		if ((clock() - g_sPlayer.Boom61>1600) && (clock() - g_sPlayer.OldTime72>2000))
		if (g_sPlayer.nY == g_EnemyMissile53_2.nY[j] && (g_EnemyMissile53_2.nX[j] - g_sPlayer.nX) <= 5 && (g_EnemyMissile53_2.nX[j] - g_sPlayer.nX) >= -1)
		{


			g_sPlayer.x1 = g_EnemyMissile53_2.nX[j];
			g_sPlayer.x2 = g_sPlayer.nX;
			g_sPlayer.Boom61 = clock();
			g_sPlayer.nHP--;
			g_EnemyMissile53_2.nX[j] = 0;
			g_EnemyMissile53_2.nY[j] = 0;
			g_EnemyMissile53_2.nLife[j] = 0;
			if (g_sPlayer.nHP == 0)
			{
				//수정


				g_sPlayer.OldTime72 = clock();

				g_sPlayer.nHP = 3;
				g_sPlayer.GG--;


			}



			if (g_sPlayer.GG == 0)
			{
				system("cls");
				gotoxy(40, 17);
				printf("Game Over\n");
				exit(0);
			}
			break;

		}


	}

}
void EnemyCrash53()
{
	
	for (int j = 0; j < 1; j++)
	{
		if (g_BOSS[j].nLife == 1)

			for (int i = 0; i < 10; i++)
			{

				if (g_BOSS[j].HP != 0)// 수정1 복사
				{
					if (clock() > 300)
						if (clock() - g_BOSS[j].Boom < 300)
						{
							gotoxy(g_BOSS[j].x1 - g_BOSS[j].x2 + g_BOSS[j].nX, g_BOSS[j].nY + 8);
							printf("※");

						}
				}
				if (g_sPlayerMissile[i].nY == (g_BOSS[j].nY + 8) && (g_sPlayerMissile[i].nX - g_BOSS[j].nX) < 50 && (g_sPlayerMissile[i].nX - g_BOSS[j].nX) >= 0 && g_sPlayerMissile[i].nX != 0)
				{

					g_BOSS[j].x1 = g_sPlayerMissile[i].nX;
					g_BOSS[j].x2 = g_BOSS[j].nX;
					g_BOSS[j].Boom = clock();
					g_BOSS[j].HP--;
					g_sPlayerMissile[i].nLife = 0;
					g_sPlayerMissile[i].nX = 0; g_sPlayerMissile[i].nY = 0;
					if (g_BOSS[j].HP == 0)
					{
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 1);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 2);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 3);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 4);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 5);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 6);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 7);
						printf("                                                  ");
						gotoxy(g_BOSS[j].nX, g_BOSS[j].nY + 8);
						printf("                                                  ");

						g_BOSS[j].nLife = 2;
						g_BOSS[j].nY = 50;
					}

				}
			}

	}

}
//y=0
void User_Enemy53_1()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime73 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime73 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime73 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime73 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime73 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}

	
	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == g_BOSS[j].nY && (g_BOSS[j].nX - g_sPlayer.nX) < 6 && (g_BOSS[j].nX - g_sPlayer.nX) > -5)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime73 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime73 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_2()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime74 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime74 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime74 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime74 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime74 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == g_BOSS[j].nY && (g_BOSS[j].nX - g_sPlayer.nX) < -14 && (g_BOSS[j].nX - g_sPlayer.nX) > -29)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime74 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime74 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_3()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime75 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime75 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime75 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime75 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime75 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == g_BOSS[j].nY && (g_BOSS[j].nX - g_sPlayer.nX) < -38 && (g_BOSS[j].nX - g_sPlayer.nX) > -49)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime75 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime75 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=1
void User_Enemy53_4()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime76 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime76 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime76 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime76 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime76 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY+1) && (g_BOSS[j].nX - g_sPlayer.nX) < 6 && (g_BOSS[j].nX - g_sPlayer.nX) > -5)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime76 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime76 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_5()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime77 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime77 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime77 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime77 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime77 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 1) && (g_BOSS[j].nX - g_sPlayer.nX) < -15 && (g_BOSS[j].nX - g_sPlayer.nX) > -28)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime77 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime77 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_6()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime78 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime78 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime78 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime78 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime78 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 1) && (g_BOSS[j].nX - g_sPlayer.nX) < -38 && (g_BOSS[j].nX - g_sPlayer.nX) > -49)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime78 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime78 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=2
void User_Enemy53_7()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime79 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime79 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime79 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime79 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime79 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 2) && (g_BOSS[j].nX - g_sPlayer.nX) < 6 && (g_BOSS[j].nX - g_sPlayer.nX) > -9)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime79 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime79 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_8()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime80 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime80 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime80 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime80 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime80 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 2) && (g_BOSS[j].nX - g_sPlayer.nX) < -16 && (g_BOSS[j].nX - g_sPlayer.nX) > -28)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime80 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime80 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy53_9()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime81 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime81 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime81 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime81 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime81 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 2) && (g_BOSS[j].nX - g_sPlayer.nX) < -34 && (g_BOSS[j].nX - g_sPlayer.nX) > -49)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime81 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime81 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=3
void User_Enemy53_10()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime82 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime82 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime82 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime82 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime82 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 3) && (g_BOSS[j].nX - g_sPlayer.nX) < 6 && (g_BOSS[j].nX - g_sPlayer.nX) > -49)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime82 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime82 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=4
void User_Enemy53_11()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime83 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime83 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime83 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime83 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime83 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 4) && (g_BOSS[j].nX - g_sPlayer.nX) < -3 && (g_BOSS[j].nX - g_sPlayer.nX) > -40)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime83 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime83 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=5
void User_Enemy53_12()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime84 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime84 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime84 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime84 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime84 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 5) && (g_BOSS[j].nX - g_sPlayer.nX) < -6 && (g_BOSS[j].nX - g_sPlayer.nX) > -37)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime84 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime84 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=6
void User_Enemy53_13()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime85 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime85 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime85 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime85 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime85 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 6) && (g_BOSS[j].nX - g_sPlayer.nX) < -6 && (g_BOSS[j].nX - g_sPlayer.nX) > -37)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime85 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime85 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=7
void User_Enemy53_14()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime86 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime86 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime86 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime86 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime86 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 7) && (g_BOSS[j].nX - g_sPlayer.nX) < -6 && (g_BOSS[j].nX - g_sPlayer.nX) > -37)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime86 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime86 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
//y=8
void User_Enemy53_15()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime87 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime87 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime87 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime87 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime87 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_BOSS[j].nLife == 1)
			if (g_sPlayer.nY == (g_BOSS[j].nY + 8) && (g_BOSS[j].nX - g_sPlayer.nX) < 6 && (g_BOSS[j].nX - g_sPlayer.nX) > -49)

			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime87 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime87 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void User_Enemy8()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime89 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime89 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime89 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime89 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime89 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy8[j].nY && (g_Enemy8[j].nX - g_sPlayer.nX) < 6 && (g_Enemy8[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime89 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime89 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy9()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime90 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime90 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime90 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime90 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime90 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy9[j].nY && (g_Enemy9[j].nX - g_sPlayer.nX) < 6 && (g_Enemy9[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime90 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime90 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy10()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime91 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime91 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime91 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime91 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime91 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy10[j].nY && (g_Enemy10[j].nX - g_sPlayer.nX) < 6 && (g_Enemy10[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime91 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime91 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy11()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime92 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime92 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime92 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime92 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime92 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy11[j].nY && (g_Enemy11[j].nX - g_sPlayer.nX) < 6 && (g_Enemy11[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime92 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime92 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy12()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime93 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime93 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime93 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime93 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime93 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy12[j].nY && (g_Enemy12[j].nX - g_sPlayer.nX) < 6 && (g_Enemy12[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime93 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime93 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy13()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime94 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime94 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime94 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime94 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime94 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy13[j].nY && (g_Enemy13[j].nX - g_sPlayer.nX) < 6 && (g_Enemy13[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime94 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime94 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy14()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime95 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime95 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime95 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime95 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime95 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy14[j].nY && (g_Enemy14[j].nX - g_sPlayer.nX) < 6 && (g_Enemy14[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime95 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime95 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy15()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime96 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime96 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime96 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime96 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime96 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy15[j].nY && (g_Enemy15[j].nX - g_sPlayer.nX) < 6 && (g_Enemy15[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime96 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime96 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy16()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime97 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime97 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime97 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime97 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime97 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy16[j].nY && (g_Enemy16[j].nX - g_sPlayer.nX) < 6 && (g_Enemy16[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime97 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime97 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy17()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime98 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime98 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime98 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime98 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime98 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy17[j].nY && (g_Enemy17[j].nX - g_sPlayer.nX) < 6 && (g_Enemy17[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime98 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime98 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy18()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime99 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime99 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime99 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime99 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime99 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy18[j].nY && (g_Enemy18[j].nX - g_sPlayer.nX) < 6 && (g_Enemy18[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime99 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime99 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy19()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime100 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime100 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime100 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime100 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime100 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy19[j].nY && (g_Enemy19[j].nX - g_sPlayer.nX) < 6 && (g_Enemy19[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime100 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime100 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy20()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime101 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime101 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime101 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime101 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime101 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy20[j].nY && (g_Enemy20[j].nX - g_sPlayer.nX) < 6 && (g_Enemy20[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime101 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime101 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy21()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime102 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime102 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime102 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime102 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime102 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy21[j].nY && (g_Enemy21[j].nX - g_sPlayer.nX) < 6 && (g_Enemy21[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime102 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime102 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy22()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime103 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime103 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime103 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime103 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime103 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy22[j].nY && (g_Enemy22[j].nX - g_sPlayer.nX) < 6 && (g_Enemy22[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime103 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime103 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy23()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime104 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime104 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime104 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime104 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime104 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy23[j].nY && (g_Enemy23[j].nX - g_sPlayer.nX) < 6 && (g_Enemy23[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime104 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime104 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy24()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime105 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime105 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime105 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime105 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime105 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy24[j].nY && (g_Enemy24[j].nX - g_sPlayer.nX) < 6 && (g_Enemy24[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime105 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime105 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy25()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime106 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime106 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime106 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime106 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime106 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy25[j].nY && (g_Enemy25[j].nX - g_sPlayer.nX) < 6 && (g_Enemy25[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime106 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime106 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy26()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime107 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime107 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime107 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime107 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime107 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy26[j].nY && (g_Enemy26[j].nX - g_sPlayer.nX) < 6 && (g_Enemy26[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime107 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime107 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy27()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime108 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime108 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime108 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime108 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime108 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy27[j].nY && (g_Enemy27[j].nX - g_sPlayer.nX) < 6 && (g_Enemy27[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime108 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime108 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy28()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime109 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime109 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime109 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime109 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime109 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy28[j].nY && (g_Enemy28[j].nX - g_sPlayer.nX) < 6 && (g_Enemy28[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime109 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime109 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy29()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime110 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime110 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime110 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime110 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime110 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy29[j].nY && (g_Enemy29[j].nX - g_sPlayer.nX) < 6 && (g_Enemy29[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime110 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime110 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy30()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime111 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime111 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime111 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime111 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime111 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy30[j].nY && (g_Enemy30[j].nX - g_sPlayer.nX) < 6 && (g_Enemy30[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime111 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime111 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy31()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime112 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime112 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime112 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime112 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime112 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy31[j].nY && (g_Enemy31[j].nX - g_sPlayer.nX) < 6 && (g_Enemy31[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime112 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime112 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy32()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime113 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime113 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime113 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime113 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime113 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy32[j].nY && (g_Enemy32[j].nX - g_sPlayer.nX) < 6 && (g_Enemy32[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime113 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime113 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy33()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime114 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime114 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime114 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime114 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime114 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy33[j].nY && (g_Enemy33[j].nX - g_sPlayer.nX) < 6 && (g_Enemy33[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime114 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime114 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy34()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime115 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime115 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime115 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime115 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime115 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy34[j].nY && (g_Enemy34[j].nX - g_sPlayer.nX) < 6 && (g_Enemy34[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime115 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime115 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy35()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime116 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime116 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime116 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime116 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime116 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy35[j].nY && (g_Enemy35[j].nX - g_sPlayer.nX) < 6 && (g_Enemy35[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime116 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime116 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy36()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime117 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime117 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime117 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime117 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime117 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy36[j].nY && (g_Enemy36[j].nX - g_sPlayer.nX) < 6 && (g_Enemy36[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime117 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime117 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy37()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime118 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime118 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime118 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime118 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime118 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy37[j].nY && (g_Enemy37[j].nX - g_sPlayer.nX) < 6 && (g_Enemy37[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime118 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime118 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void User_Enemy40()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime119 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime119 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime119 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime119 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime119 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy40[j].nY && (g_Enemy40[j].nX - g_sPlayer.nX) < 6 && (g_Enemy40[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime119 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime119 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy41()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime120 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime120 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime120 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime120 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime120 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy41[j].nY && (g_Enemy41[j].nX - g_sPlayer.nX) < 6 && (g_Enemy41[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime120 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime120 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy42()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime121 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime121 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime121 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime121 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime121 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy42[j].nY && (g_Enemy42[j].nX - g_sPlayer.nX) < 6 && (g_Enemy42[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime121 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime121 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy43()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime122 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime122 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime122 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime122 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime122 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy43[j].nY && (g_Enemy43[j].nX - g_sPlayer.nX) < 6 && (g_Enemy43[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime122 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime122 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy44()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime123 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime123 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime123 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime123 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime123 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy44[j].nY && (g_Enemy44[j].nX - g_sPlayer.nX) < 6 && (g_Enemy44[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime123 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime123 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy45()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime124 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime124 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime124 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime124 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime124 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy45[j].nY && (g_Enemy45[j].nX - g_sPlayer.nX) < 6 && (g_Enemy45[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime124 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime124 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy46()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime125 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime125 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime125 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime125 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime125 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy46[j].nY && (g_Enemy46[j].nX - g_sPlayer.nX) < 6 && (g_Enemy46[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime125 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime125 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy47()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime126 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime126 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime126 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime126 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime126 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy47[j].nY && (g_Enemy47[j].nX - g_sPlayer.nX) < 6 && (g_Enemy47[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime126 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime126 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy48()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime127 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime127 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime127 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime127 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime127 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy48[j].nY && (g_Enemy48[j].nX - g_sPlayer.nX) < 6 && (g_Enemy48[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime127 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime127 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy49()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime128 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime128 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime128 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime128 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime128 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy49[j].nY && (g_Enemy49[j].nX - g_sPlayer.nX) < 6 && (g_Enemy49[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime128 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime128 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}
void User_Enemy50()
{


	if (clock() > 1000)
		if (clock() - g_sPlayer.OldTime129 < 1000)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("    ☆");



		}
	if (clock() > 800)
		if (clock() - g_sPlayer.OldTime129 < 800)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("   ★ ");



		}
	if (clock() > 600)
		if (clock() - g_sPlayer.OldTime129 < 600)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("  ☆  ");



		}
	if (clock() > 400)
		if (clock() - g_sPlayer.OldTime129 < 400)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf(" ★   ");



		}
	if (clock() > 200)
		if (clock() - g_sPlayer.OldTime129 < 200)
		{
			gotoxy(g_sPlayer.nX, g_sPlayer.nY);
			printf("☆    ");



		}


	if (clock() - g_sPlayer.Crash>2000)
		for (int j = 0; j < 1; j++)
		{
			if (g_sPlayer.nY == g_Enemy50[j].nY && (g_Enemy50[j].nX - g_sPlayer.nX) < 6 && (g_Enemy50[j].nX - g_sPlayer.nX) > -5)
			{



				g_sPlayer.Crash = clock();
				g_sPlayer.OldTime129 = clock();
				g_sPlayer.nHP--;

				if (g_sPlayer.nHP == 0)
				{
					//수정


					g_sPlayer.OldTime129 = clock();

					g_sPlayer.nHP = 3;
					g_sPlayer.GG--;


				}



				if (g_sPlayer.GG == 0)
				{
					system("cls");
					gotoxy(40, 17);
					printf("Game Over\n");
					exit(0);
				}
				break;

			}

		}

}

void FirstUser()
{
	g_sPlayer.nHP = 3;
	g_sPlayer.nX = 30;
	g_sPlayer.nY = 20;
	gotoxy(g_sPlayer.nX, g_sPlayer.nY);
	printf("┞─┃┃─┦");
	removeCursor();
}

void Loding()
{
	
	gotoxy(10, 3);
	printf("□□□□□");
	gotoxy(10, 4);
	printf("□      □");
	gotoxy(10, 5);
	printf("□□□□□");
	gotoxy(10, 6);
	printf("□        ");
	gotoxy(10, 7);
	printf("□");
	gotoxy(10, 8);
	printf("□");
	gotoxy(10, 9);
	printf("□");
	
	gotoxy(22, 3);
	printf("□");
	gotoxy(22, 4);
	printf("□");
	gotoxy(22, 5);
	printf("□\n");
	gotoxy(22, 6);
	printf("□\n");
	gotoxy(22, 7);
	printf("□\n");
	gotoxy(22, 8);
	printf("□\n");
	gotoxy(22, 9);
	printf("□□□□□");
	
	gotoxy(34, 3);
	printf("    □\n");
	gotoxy(34, 4);
	printf("   □□\n");
	gotoxy(34, 5);
	printf("  □  □\n");
	gotoxy(34, 6);
	printf(" □    □\n");
	gotoxy(34, 7);
	printf("□□□□□\n");
	gotoxy(34, 8);
	printf("□      □\n");
	gotoxy(34, 9);
	printf("□      □\n");


	gotoxy(46, 3);
	printf("□      □\n");
	gotoxy(46, 4);
	printf("□□    □\n");
	gotoxy(46, 5);
	printf("□ □   □\n");
	gotoxy(46, 6);
	printf("□  □  □\n");
	gotoxy(46, 7);
	printf("□   □ □\n");
	gotoxy(46, 8);
	printf("□    □□\n");
	gotoxy(46, 9);
	printf("□      □\n");

	gotoxy(58, 3);
	printf("□□□□□\n");
	gotoxy(58, 4);
	printf("□\n");
	gotoxy(58, 5);
	printf("□\n");
	gotoxy(58, 6);
	printf("□□□□□\n");
	gotoxy(58, 7);
	printf("□\n");
	gotoxy(58, 8);
	printf("□\n");
	gotoxy(58, 9);
	printf("□□□□□\n");

	gotoxy(16, 12);
	printf(" ▣▣▣▣");
	gotoxy(16, 13);
	printf("▣      ");
	gotoxy(16, 14);
	printf("▣");
	gotoxy(16, 15);
	printf("▣   ▣▣");
	gotoxy(16, 16);
	printf("▣     ▣");
	gotoxy(16, 17);
	printf("▣     ▣");
	gotoxy(16, 18);
	printf(" ▣▣▣▣");

	gotoxy(27, 12);
	printf("    ▣\n");
	gotoxy(27, 13);
	printf("   ▣▣\n");
	gotoxy(27, 14);
	printf("  ▣  ▣\n");
	gotoxy(27, 15);
	printf(" ▣    ▣\n");
	gotoxy(27, 16);
	printf("▣▣▣▣▣\n");
	gotoxy(27, 17);
	printf("▣      ▣\n");
	gotoxy(27, 18);
	printf("▣      ▣\n");

	gotoxy(39, 12);
	printf("▣      ▣");
	gotoxy(39, 13);
	printf("▣▣  ▣▣");
	gotoxy(39, 14);
	printf("▣ ▣▣ ▣");
	gotoxy(39, 15);
	printf("▣ ▣▣ ▣");
	gotoxy(39, 16);
	printf("▣  ▣  ▣");
	gotoxy(39, 17);
	printf("▣  ▣  ▣");
	gotoxy(39, 18);
	printf("▣  ▣  ▣");

	gotoxy(51, 12);
	printf("▣▣▣▣▣\n");
	gotoxy(51, 13);
	printf("▣\n");
	gotoxy(51, 14);
	printf("▣\n");
	gotoxy(51, 15);
	printf("▣▣▣▣▣\n");
	gotoxy(51, 16);
	printf("▣\n");
	gotoxy(51, 17);
	printf("▣\n");
	gotoxy(51, 18);
    printf("▣▣▣▣▣\n");

	gotoxy(5, 25);
	printf("KEY INSTRUCTION");
	gotoxy(5, 26);
	printf("          △");
	gotoxy(5, 27);
	printf("MOVE:   ◁▽▷");
	gotoxy(5, 28);
	printf("FIRE:   LEFT CTRL");

	gotoxy(28,22);
	printf("PRESS <ANY KEY> TO START");
	removeCursor();
	
	getch();
	system("cls");//clock()변경하는법
	last = clock();
	extra = last -first;

	
}

void HPprinting()
{
	if (g_sPlayer.nHP == 3)
	{
		gotoxy(35, 35);
		printf("HP ♥♥♥");
	}
	else if (g_sPlayer.nHP == 2)
	{
		gotoxy(35, 35);
		printf("HP ♥♥♡");
	}
	else if (g_sPlayer.nHP == 1)
	{
		gotoxy(35, 35);
		printf("HP ♥♡♡");
	}
	if (g_sPlayer.GG == 2)
	{
		gotoxy(3, 35);
		printf("LIFE ♥");
	}
	else if (g_sPlayer.GG == 1)
	{
		gotoxy(3, 35);
		printf("LIFE   ");
	}
}
void SIDEprinting()
{
	for (int i = 0; i <36; i++)
	{
		gotoxy(0, i);
		printf("∥");
		gotoxy(79, i);
		printf("∥");

	}
}
void MIDprinting()
{ 
	if (clock() - extra < 2000)
	{
		if (clock() - extra > 50)
		{
			gotoxy(10, 20);
			printf("S");
		}
		if (clock() - extra > 250)
		{
			gotoxy(10, 20);
			printf("ST");
		}
		if (clock() - extra > 450)
		{
			gotoxy(10, 20);
			printf("STA");
		}
		if (clock() - extra > 650)
		{
			gotoxy(10, 20);
			printf("STAG");
		}
		if (clock() - extra > 850)
		{
			gotoxy(10, 20);
			printf("STAGE");
		}
		if (clock() - extra > 1250)
		{
			gotoxy(10, 20);
			printf("STAGE :");
		}
		if (clock() - extra > 1650)
		{
			gotoxy(10, 20);
			printf("STAGE : 0");
		}
		if (clock() - extra > 1850)
		{
			gotoxy(10, 20);
			printf("STAGE : 01");
		}

	}

	if(clock()-extra<3000)
	if (clock() - extra > 2850)
	{
		gotoxy(10, 20);
		printf("          ");
	}

}
void Victory()
{
	if (g_BOSS->HP == 0)
	{
		system("cls");
		gotoxy(40,17);
		printf("Victory!\n");
		exit(0);
	}
}
	int main()
	{
		
		first = clock();

		int  i;
		Loding();
		FirstUser();



		while (1)
		{
			
			HPprinting();
			SIDEprinting();
			MIDprinting();
			UserMove();
			UserMissile();
			
			Enemy1();
			Enemy2();
			Enemy3();
			Enemy4();
			Enemy5();
			Enemy6();
			Enemy7();
			Enemy8();
			Enemy9();
			Enemy10();
			Enemy11();
			Enemy12();
			Enemy13();
			Enemy14();
			Enemy15();
			Enemy16();
			Enemy17();
			Enemy18();
			Enemy19();
			Enemy20();
			Enemy21();
			Enemy22();
			Enemy23();
			Enemy24();
			Enemy25();
			Enemy26();
			Enemy27();
			Enemy28();
			Enemy29();
			Enemy30();
			Enemy31();
			Enemy32();
			Enemy33();
			Enemy34();
			Enemy35();
			Enemy36();
			Enemy37();
			
			Enemy38();
			
			Enemy39();
			Enemy40();
			Enemy41();
			Enemy42();
			Enemy43();
			Enemy44();
			Enemy45();
			Enemy46();
			Enemy47();
			Enemy48();
			Enemy49();
			Enemy50();
			Enemy51();
			Enemy52();
			

			Enemy53();
			

			Enemy_Missile1();
			Enemy_Missile2();
			Enemy_Missile3();
			Enemy_Missile4();
			Enemy_Missile5();
			Enemy_Missile6();
			Enemy_Missile7();
			Enemy_Missile8();
			Enemy_Missile9();
			Enemy_Missile10();
			Enemy_Missile11();
			Enemy_Missile12();
			Enemy_Missile13();
			Enemy_Missile14();
			Enemy_Missile15();
			Enemy_Missile16();
			Enemy_Missile17();
			Enemy_Missile18();
			Enemy_Missile19();
			Enemy_Missile20();
			Enemy_Missile21();
			Enemy_Missile22();
			Enemy_Missile23();
			Enemy_Missile24();
			Enemy_Missile25();
			Enemy_Missile26();
			Enemy_Missile27();
			Enemy_Missile28();
			Enemy_Missile29();
			Enemy_Missile30();
			Enemy_Missile31();
			Enemy_Missile32();
			Enemy_Missile33();
			Enemy_Missile34();
			Enemy_Missile35();
			Enemy_Missile36();
			Enemy_Missile37();
			Enemy_Missile38_1();
			Enemy_Missile38_2();
			Enemy_Missile39_1();
			Enemy_Missile39_2();
			Enemy_Missile40();
			Enemy_Missile41();
			Enemy_Missile42();
			Enemy_Missile43();
			Enemy_Missile44();
			Enemy_Missile45();
			Enemy_Missile46();
			Enemy_Missile47();
			Enemy_Missile48();
			Enemy_Missile49();
			Enemy_Missile50();
			Enemy_Missile51_1();
			Enemy_Missile51_2();
			Enemy_Missile52_1();
			Enemy_Missile52_2();
			Enemy_Missile53_1();
			Enemy_Missile53_2();
			Enemy_Missile53_3();
			Enemy_Missile53_4();
			Enemy_Missile53_5();
			UserCrash1();
			UserCrash2();
			UserCrash3();
			UserCrash4();
			UserCrash5();
			UserCrash6();
			UserCrash7();
			UserCrash8();
			UserCrash9();
			UserCrash10();
			UserCrash11();
			UserCrash12();
			UserCrash13();
			UserCrash14();
			UserCrash15();
			UserCrash16();
			UserCrash17();
			UserCrash18();
			UserCrash19();
			UserCrash20();
			UserCrash21();
			UserCrash22();
			UserCrash23();
			UserCrash24();
			UserCrash25();
			UserCrash26();
			UserCrash27();
			UserCrash28();
			UserCrash29();
			UserCrash30();
			UserCrash31();
			UserCrash32();
			UserCrash33();
			UserCrash34();
			UserCrash35();
			UserCrash36();
			UserCrash37();
			UserCrash38_1();
			UserCrash38_2();
			UserCrash39_1();
			UserCrash39_2();
			UserCrash40();
			UserCrash41();
			UserCrash42();
			UserCrash43();
			UserCrash44();
			UserCrash45();
			UserCrash46();
			UserCrash47();
			UserCrash48();
			UserCrash49();
			UserCrash50();
			UserCrash51_1();
			UserCrash51_2();
			UserCrash52_1();
			UserCrash52_2();
			UserCrash53_1();
			UserCrash53_2();
			UserCrash53_3();
			UserCrash53_4();
			UserCrash53_5();

			User_Enemy1();
			User_Enemy2();
			User_Enemy3();
			User_Enemy4();
			User_Enemy5();
			User_Enemy6();
			User_Enemy7();
			User_Enemy8();
			User_Enemy9();
			User_Enemy10();
			User_Enemy11();
			User_Enemy12();
			User_Enemy13();
			User_Enemy14();
			User_Enemy15();
			User_Enemy16();
			User_Enemy17();
			User_Enemy18();
			User_Enemy19();
			User_Enemy20();
			User_Enemy21();
			User_Enemy22();
			User_Enemy23();
			User_Enemy24();
			User_Enemy25();
			User_Enemy26();
			User_Enemy27();
			User_Enemy28();
			User_Enemy29();
			User_Enemy30();
			User_Enemy31();
			User_Enemy32();
			User_Enemy33();
			User_Enemy34();
			User_Enemy35();
			User_Enemy36();
			User_Enemy37();
			User_Enemy38();
			User_Enemy39();
			User_Enemy40();
			User_Enemy41();
			User_Enemy42();
			User_Enemy43();
			User_Enemy44();
			User_Enemy45();
			User_Enemy46();
			User_Enemy47();
			User_Enemy48();
			User_Enemy49();
			User_Enemy50();
			User_Enemy51();
			User_Enemy52();
			User_Enemy52();
			User_Enemy53_1();
			User_Enemy53_2();
			User_Enemy53_3();
			User_Enemy53_4();
			User_Enemy53_5();
			User_Enemy53_6();
			User_Enemy53_7();
			User_Enemy53_8();
			User_Enemy53_9();
			User_Enemy53_10();
			User_Enemy53_11();
			User_Enemy53_12();
			User_Enemy53_13();
			User_Enemy53_14();
			User_Enemy53_15();

			EnemyCrash1();
			EnemyCrash2();
			EnemyCrash3();
			EnemyCrash4();
			EnemyCrash5();
			EnemyCrash6();
			EnemyCrash7();
			EnemyCrash8();
			EnemyCrash9();
			EnemyCrash10();
			EnemyCrash11();
			EnemyCrash12();
			EnemyCrash13();
			EnemyCrash14();
			EnemyCrash15();
			EnemyCrash16();
			EnemyCrash17();
			EnemyCrash18();
			EnemyCrash19();
			EnemyCrash20();
			EnemyCrash21();
			EnemyCrash22();
			EnemyCrash23();
			EnemyCrash24();
			EnemyCrash25();
			EnemyCrash26();
			EnemyCrash27();
			EnemyCrash28();
			EnemyCrash29();
			EnemyCrash30();
			EnemyCrash31();
			EnemyCrash32();
			EnemyCrash33();
			EnemyCrash34();
			EnemyCrash35();
			EnemyCrash36();
			EnemyCrash37();
			EnemyCrash38();
			EnemyCrash39();
			EnemyCrash40();
			EnemyCrash41();
			EnemyCrash42();
			EnemyCrash43();
			EnemyCrash44();
			EnemyCrash45();
			EnemyCrash46();
			EnemyCrash47();
			EnemyCrash48();
			EnemyCrash49();
			EnemyCrash50();
			EnemyCrash51();
			EnemyCrash52();
			EnemyCrash53();
			
			

			Victory();
		}


		return 0;
	}