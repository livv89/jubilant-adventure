#include <stdio.h>
#include <conio.h>
int key();

int main()
{
	
	
	for(;;)
	{
		int k = Key();
		
		if(47 < k && k < 58)
		{
			k = getch();	
			printf(">%c : ���� \n", k);
		}
		else if(64 < k && k < 91)
		{
			k = getch();
			printf(">%c : �빮�� \n", k);
		}
		else if(96 < k && k < 123)
		{
			k = getch();
			printf(">%c : �ҹ��� \n", k);
		}
		else
		{
			k = getch();
			printf(">%c : Ư������ \n", k);
		}
	
		
	}
	
}

int Key() 
{
    int a = getch();
    return a;
}
