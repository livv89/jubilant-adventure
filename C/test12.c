#include <stdio.h>


char s1[] = "Good";
char s2[] = "Afternoon";

char* ss[2] = { s1, s2 };
int main()
{

	printf("\"%s %s\"\n", ss[0], ss[1]);
}
/*
//char str[] = "Good Afternoon";  // <---- 상수라서 그냥 바꾸면 오류남 const 영역  

int main()
{
	char b[100];
	strcpy(b,str); //불변영역에 있는 것을 가변영역으로 복사  
	char *p = b;
	
	printf("before : \"%s\"\n", p);
	*(p+5) = '_';
	printf("after : \"%s\"\n", p);	
}
*/
