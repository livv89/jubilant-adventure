#include <stdio.h>
#include <conio.h>
int main()
{
	int v1, v2;
	printf("value 1 ? "); scanf("%d", &v1);
	printf("value 2 ? "); scanf("%d", &v2);
	
/*	for(;;)// = while(1)
	{
		char k = getch(); // console �Լ� 
		
		if(k == '+') //������ �ᵵ ���� �ȶ�, ���� ���� �ȵ�  
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1+v2); // %c ���� ��ȯ��  v1 + v2 = x 
		}
		
		else if(k == '-') 
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1-v2);
		}
		
		else if(k == '*') 
		{
			printf("%d %c %d = %d\n", v1, k, v2, v1*v2);
		}
		
		else if(k == '/')
		{
			printf("%d %c %d = %f\n", v1, k, v2, (double)(v1)/(double)(v2)); //double �Ǽ� ��ȯ  
		}
		else break;
	
	}*/
	
	for(;;)// = while(1)
	{
		char k = getch(); // console �Լ� 
		
		switch(k)
		{
		case '+':
			printf("%d %c %d = %d\n", v1, k, v2, v1+v2); break;
		case '-':
			printf("%d %c %d = %d\n", v1, k, v2, v1-v2); break;
		case '*':
			printf("%d %c %d = %d\n", v1, k, v2, v1*v2); break;
		case '/':
			printf("%d %c %d = %f\n", v1, k, v2, (double)(v1)/(double)(v2)); break;
		default: k=3; break;
		}
		if(k==3) break;
	}	
}
