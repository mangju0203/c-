#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define DINO_BOTTOM_Y 12
#define TREE_BOTTOM_Y 20
#define TREE_BOTTOM_X 45
#define SHOOTING_BOTTOM_X 8
#define SHOOTING_BOTTOM_Y 20
#define BIRD_TOP_X 45
#define BIRD_TOP_Y 5

//�ܼ� â�� ũ��� ������ �����ϴ� �Լ�
void SetConsoleView()
{
	system("mode con:cols=100 lines=25");
	system("title Google Dinosaurs.");
}

//Ŀ���� ��ġ�� x, y�� �̵��ϴ� �Լ�
void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//Ű������ �Է��� �ް�, �Էµ� Ű�� ���� ��ȯ�ϴ� �Լ�
int GetKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch();
	}
	return 0;
}

//������ �׸��� �Լ�
void DrawDino(int dinoY)
{
	GotoXY(0, dinoY);
	static bool legFlag = true;
	printf("   $$$    $$$\n");
	printf("   $$$    $$$\n");
	printf("  $$$$$$$$$$$$ \n");
	printf(" $$$$$$$$$$$$$$ \n");
	printf(" $$$$$$$$$$$$$$  \n");
	printf("  $$$$$$$$$$$$    \n");
	printf(" $$$$$$$$$$$$$$ \n");
	printf("    $$$$$$$$$  \n");
	printf("   $$$$$$$$$$$    \n");
	printf("    $$$$$$$$$$    \n");
	printf("     $$$$$$$$     \n");
	if (legFlag)
	{
		printf("     $    $$$    \n");
		printf("     $$          ");
		legFlag = false;
	}
	else
	{
		printf("     $$$  $     \n");
		printf("          $$    ");
		legFlag = true;
	}
}

// �߻��� ��� 
 
 void DrawShooting(int shootingX)
{
               
    GotoXY(shootingX,SHOOTING_BOTTOM_Y );  
      printf("   ||| ");
      GotoXY(shootingX,SHOOTING_BOTTOM_Y + 1);  
      printf("   === ");
      GotoXY(shootingX,SHOOTING_BOTTOM_Y + 2);  
      printf("  ====== ");
      GotoXY(shootingX,SHOOTING_BOTTOM_Y + 3);  
      printf("   ====");
      GotoXY(shootingX,SHOOTING_BOTTOM_Y + 4);  
      printf("    ==");
           
}

//������ �׸��� �Լ�
void DrawTree(int treeX)
{
	GotoXY(treeX, TREE_BOTTOM_Y);
	printf("$$$$");
	GotoXY(treeX, TREE_BOTTOM_Y + 1);
	printf(" $$ ");
	GotoXY(treeX, TREE_BOTTOM_Y + 2);
	printf(" $$ ");
	GotoXY(treeX, TREE_BOTTOM_Y + 3);
	printf(" $$ ");
	GotoXY(treeX, TREE_BOTTOM_Y + 4);
	printf(" $$ ");
}



// ������ ����ٴ� ��ֹ� 
void DrawBird(int birdX)   //bottom �Ⱦ��� ���ƴٴ� 
{
      
   GotoXY(birdX, BIRD_TOP_Y);
   printf(" $$$                            $$$");
   GotoXY(birdX, BIRD_TOP_Y + 1);
   printf(" $$$$$$$                        $$$$");
   GotoXY(birdX, BIRD_TOP_Y + 2);
   printf(" $$$$$$$                        $$$$$$$");
   GotoXY(birdX, BIRD_TOP_Y + 3);
   printf(" $$$$                           $$$$");
   GotoXY(birdX, BIRD_TOP_Y + 4);
   printf(" $$                             $$"); 
} 


//(v2.0) �浹 ������ ���ӿ��� �׷���
void DrawGameOver(const int score)
{
	system("cls");
	int x = 18;
	int y = 8;
	GotoXY(x, y);
	printf("===========================");
	GotoXY(x, y + 1);
	printf("======G A M E O V E R======");
	GotoXY(x, y + 2);	
	printf("===========================");
	GotoXY(x, y + 5);
	printf("SCORE : %d", score);

	printf("\n\n\n\n\n\n\n\n\n");
	system("pause");
}

bool isCollision(const int treeX, const int dinoY, const int shooting)  
{
   //Ʈ���� X�� �䳢�� ��ü�ʿ� ������,
   //�䳢�� ���̰� ������� �ʴٸ� �浹�� ó��
   GotoXY(0, 0);
   printf("treeX : %d, dinoY : %d, shootingcooltime: %d", treeX, dinoY, shooting); //�̷������� ������ X, Y�� ã���ϴ�.
   if (treeX <= 8 && treeX >= 4 && dinoY > 8) // ������ X���� �����̱⶧���� ������ �΋H���� ��ġ���� �׻� ����(but �̷��� �ϸ� �����ϰ� �������� �߿� �΋H���� ���� ������X) 
   {
      return true;
   }
   
   return false;
}

bool Bird(const int birdX, const int dinoY)
{
   //���� x�� ������ �Ӹ��ʿ� ������
   //������ ���̰� ����� ���� �ʴٸ� �浹�� ó��
   if (birdX <= 8 && birdX >= 4 && dinoY <= 8) 
   {
      return true;
   }
   
   return false;
}


bool Shooting(const int shootingX, const int treeX)
{
   //�䳢�� ��Ʈ�� �߻���  ��ֹ� �ı� 
   if ((shootingX + 3) == treeX || (shootingX + 2) == treeX || (shootingX + 1) == treeX || shootingX == treeX) 
   {
      return true;
   }
   
   return false;
}

int main()
{
   SetConsoleView();
 

   while (true)      //(v2.0) ���� ����
   {
      //���� ���۽� �ʱ�ȭ
      bool isJumping = false;
      bool isBottom = true;
      bool isShooting   = false;
      const int gravity = 3;
      const int X       = 1;
      bool ZCheck = false;
      
      bool isJumping_x = false;
      //bool isShooting_x = false;
      bool isBottom_x = true;
      
      int Shooting_X = SHOOTING_BOTTOM_X;
      int shootingCheck = 0;
      int sc = 1;
      
      int dinoY = DINO_BOTTOM_Y;
      int treeX = TREE_BOTTOM_X;
      int birdX = BIRD_TOP_X;
      int shootingX = SHOOTING_BOTTOM_X; 
      int shootingPlus = 2;
      int First = 1;
      int itemE = 1;
      int itemS = 0;
      
      int score = 0;
      clock_t start, curr;   //���� ���� �ʱ�ȭ
      start = clock();      //���۽ð� �ʱ�ȭ

      while (true)   //�� �ǿ� ���� ����
      {
         //(v2.0) �浹üũ Ʈ���� x���� ������ y������ �Ǵ�
        if(shootingCheck < 0) {
        	shootingCheck = 0;
		}
		else if(First == 1) {
			shootingCheck = 0;
		}
         if(isCollision(treeX, dinoY, shootingCheck))
            break;
         
         if(Bird(birdX, dinoY))
            break;
		
		switch(GetKeyDown()) {
			case 'x':
				if(sc == 1) {
				itemS = score;
         		isShooting = true;
         	}
         		break;
         	case 'z':
         		ZCheck = true;
         		break;
				
		}
		
		
		itemE = score;
        shootingCheck = 3 - (itemE - itemS);
        if(shootingCheck == 0) {
        	sc = 1;
		}
         
         //zŰ�� ���Ȱ�, �ٴ��� �� ����
         if (ZCheck && isBottom)
         {
            isJumping = true;
            isBottom = false;
            
         }
            
          
         //�������̶�� Y�� ����, ������ �������� Y�� ����.
         if (isJumping)
         {
            dinoY -= gravity;
         }
         else
         {
            dinoY += gravity;
         }

         //Y�� ����ؼ� �����ϴ°� �������� �ٴ��� ����.
         if (dinoY >= DINO_BOTTOM_Y)
         {
            dinoY = DINO_BOTTOM_Y;
            isBottom = true;
            ZCheck = false;
         }
         
   
         
        
         //������ �������� (x����) �������ϰ�
         //������ ��ġ�� ���� �����ΰ��� �ٽ� ������ ������ ��ȯ.
         treeX -= 2;
         if (treeX <= 0)
         {
            treeX = TREE_BOTTOM_X;
         }
            
            
            //���� �������� �������ϰ� 
         //���� ��ġ�� ���� �����ΰ��� �ٽ� ������ ������ ��ȯ
         birdX -=4;
         if (birdX <=0)
         {
            birdX = BIRD_TOP_X;
         }
          
         //������ ������ ������ ������ ���� ��Ȳ.
         if (dinoY <= 3)
         {
            isJumping = false;
         }
            
            /*Shooting_X +=3;
            if (Shooting_X )
            {
               isShooting = false;
         }*/
         
         DrawDino(dinoY);
         DrawBird(birdX);      //draw dino
         DrawTree(treeX);      //draw Tree
            //Runner_instance_.setSpeed(30)
            

         //(v2.0)
         curr = clock();         //����ð� �޾ƿ���
         if (((curr - start) / CLOCKS_PER_SEC) >= 1)   // 1�ʰ� �Ѿ���??
         { 
            score++;   //���ھ� UP
            start = clock();   //���۽ð� �ʱ�ȭ
         }
        /* if (((curr - start) / CLOCKS_PER_SEC) >= 4)
         {
            Shooting_X;
            start = clock();
         }*/
         Sleep(60); // ������ �ð����� ���߰� �ϴ� �Լ�(ms���� : 1�� : 1000ms) 
         system("cls");   //clear

         //(v2.0) ��������� 1�ʸ��� ���ִ°��� �ƴ϶� �׻� ������ָ鼭, 1�ʰ� �������� ++ ���ݴϴ�.
         GotoXY(22, 0);   //Ŀ���� ��� �������� �ű��. �ܼ�â�� cols=100�̴ϱ� 2*x�̹Ƿ� 22���� �־���
         printf("Score : %d ", score);   //���� �������.
      }

      //(v2.0) ���� ���� �޴�
      DrawGameOver(score);
   }
   return 0;
}
