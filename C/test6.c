#include <stdio.h>
int main()
{
/*	int index =1 , val = 0, end;
	
	printf("�ε��� ���۰���? "); scanf("%d", &index);
	printf("�ε��� ���ᰪ��? "); scanf("%d", &end);
	
	while(index < end)
	{
		val = val + index;
		printf("%-5d	%3d\n", val, index); //%(-)��������(n)�ڸ���d ������ ��ȣ ����// index++;
		index = index +2;
	}*/
 
 	int index, val, end;
	
 	printf("�ε��� ���۰���? "); scanf("%d", &index);
 	printf("�ε��� ���ᰪ��? "); scanf("%d", &end);
	
	for(index; index < end; index += 2)
	{
		val += index;
		printf("%05d	%3d\n", val, index); //%(-)��������(n)�ڸ���d ������ ��ȣ ����// index++;
		
	}

}
