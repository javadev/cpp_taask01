#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime> 
#include <string>
#include "Ugadai_no_fun_new.h"

using namespace std;
	
void main() 
{ 
   initialize();
   int randomNumber = generateRandomNumber();
   int numOfTrys = playGame(randomNumber);
   string result = getUsersSkillLevel(numOfTrys);
   print(result);
}

void initialize()
{
   SetConsoleOutputCP(1251);
   
   srand(time(0));
}

void print(string str)
{
    cout << str;
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
   
   print("������� ����� �� 1 �� 100:\n");
	   cin>>b;
	   i=i+1;
       if (b < randomNumber)
            print("������!\n");
	   else if (b > randomNumber)
		   print("������!\n");
	   else 
		   print("�������!\n");
   }
   while (b != randomNumber);
   print("�����!\n");
   return i;
}

string getUsersSkillLevel(int numOfTrys)
{
   switch (numOfTrys)
   {
   case 1:
   case 2:
	   return "�� ������!\n";
   
   case 3:
   case 4:

	   return "�� ������� �����!\n";
   case 5:
           return "�� �������� �����!\n";
   default:
	   return "� ��������� ��� ���� ������� �������������!\n";
   }
} 
