#include <stdio.h>
#include <conio.h> // windows console only

int func1(char c); // function prototype

int main()
{
	int m=1; //operationȭ mode ����� ���ÿ� �ʱ�ȭ 
	char c;


	while(m)
	{	
		printf(">"); c = getch();
		
		switch(func1(c))
		{
		
			case 1: printf("%c : �빮��\n", c); break;
			case 2: printf("%c : �ҹ���\n", c); break;
			case 3: printf("%c : ����\n", c); break;
			case 4: printf("%c : Ư������\n", c); break;
			default: m=0;
		}
	}

		
}

int func1(char c)
{
	int k;
	if((c >= 'A') && (c <= 'Z')) k=1;
	else if((c >= 'a') && (c <= 'z')) k=2;
	else if((c >= '0') && (c <= '9')) k=3;
	else if(c == 3) k=0; //���Ṯ�� c == 3 -> control + c
	else k = 4; 
	
	return k;
}
