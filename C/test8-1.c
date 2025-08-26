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
			printf("%d>4 : 숫자 ", k);
		}
		else if(64 < k < 91)
		{
			k = getch();
			printf(">A : 대문자 ", k);
		}
		else if(96 < k < 123)
		{
			k = getch();
			printf(">%d a : 소문자 ", k);
		}
		else
		{
			k = getch();
			printf(">@ : 특수문자 ", k);
		}
	
		
//	}
	
}

int a()
{
	char k = getch();
	
	
}

