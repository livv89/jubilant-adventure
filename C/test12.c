#include <stdio.h>


char s1[] = "Good";
char s2[] = "Afternoon";

char* ss[2] = { s1, s2 };
int main()
{

	printf("\"%s %s\"\n", ss[0], ss[1]);
}
/*
//char str[] = "Good Afternoon";  // <---- ����� �׳� �ٲٸ� ������ const ����  

int main()
{
	char b[100];
	strcpy(b,str); //�Һ������� �ִ� ���� ������������ ����  
	char *p = b;
	
	printf("before : \"%s\"\n", p);
	*(p+5) = '_';
	printf("after : \"%s\"\n", p);	
}
*/
