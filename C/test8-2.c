#include <stdio.h>
#include <conio.h> // windows console only
 
int main()
{
	int k;
	char c;
	printf(">"); c = getch();
	if((c >= 'A') && (c <= 'Z')) k=1;
	else if((c >= 'a') && (c <= 'z')) k=2;
	else if((c >= '0') && (c <= '9')) k=3;
	else k=4;
	
	switch(k)
	{
		case 1: pirntf("%c : �빮��\n", c); break;
		case 2: pirntf("%c : �ҹ���\n", c); break;
		case 3: pirntf("%c : ����\n", c); break;
		case 4: pirntf("%c : Ư������\n", c); break;
		default: break;
	}

}
