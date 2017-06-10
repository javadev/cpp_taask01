#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime> 


using namespace std;
	
void initialize();
int generateRandomNumber();
int playGame(int randomNumber);
void showGameResult(int gameResult);

void main() 
{ 
   initialize();
   int randomNumber = generateRandomNumber();
   int gameResult = playGame(randomNumber);
   showGameResult(gameResult);
}

void initialize()
{
   SetConsoleOutputCP(1251);
   
   srand(time(0));
}

int generateRandomNumber()
{
   return rand() % 100;
}

int playGame(int randomNumber)
{
   int i;
   int b;
   i = 0;
  do
   {
   
   cout<<"������� ����� �� 1 �� 100:\n";
	   cin>>b;
	   i=i+1;
       if (b < randomNumber)
            cout<<"������!\n";
	   else if (b > randomNumber)
		   cout<<"������!\n";
	   else 
		   cout<<"�������!\n";
   }
   while (b != randomNumber);
   cout<<"�����!\n";
   return i;
}

void showGameResult(int gameResult) {
   switch (gameResult)
   {
   case 1:
   case 2:
	   cout<<"�� ������!\n";
	   break;
   
   case 3:
   case 4:

	   cout<<"�� ������� �����!\n";
	   break;
   case 5:
       cout<<"�� �������� �����!\n";
	   break;
   default:
	   cout<<"� ��������� ��� ���� ������� �������������!\n";
   }
} 
