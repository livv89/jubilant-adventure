#include <stdio.h>
#include <conio.h>


int main()
{
	char k = getch();
//	for(;;)
//	{

		if(47 < k < 58)
		{
			k = getch();	
			printf("%d>4 : ���� ", k);
		}
		else if(64 < k < 91)
		{
			k = getch();
			printf(">A : �빮�� ", k);
		}
		else if(96 < k < 123)
		{
			k = getch();
			printf(">%d a : �ҹ��� ", k);
		}
		else
		{
			k = getch();
			printf(">@ : Ư������ ", k);
		}
	
		
//	}
	
}

int a()
{
	char k = getch();
	
	
}

