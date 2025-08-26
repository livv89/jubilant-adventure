#include <stdio.h>
int main()
{
/*	int index =1 , val = 0, end;
	
	printf("인덱스 시작값은? "); scanf("%d", &index);
	printf("인덱스 종료값은? "); scanf("%d", &end);
	
	while(index < end)
	{
		val = val + index;
		printf("%-5d	%3d\n", val, index); //%(-)왼쪽정렬(n)자릿수d 실제는 괄호 생략// index++;
		index = index +2;
	}*/
 
 	int index, val, end;
	
 	printf("인덱스 시작값은? "); scanf("%d", &index);
 	printf("인덱스 종료값은? "); scanf("%d", &end);
	
	for(index; index < end; index += 2)
	{
		val += index;
		printf("%05d	%3d\n", val, index); //%(-)왼쪽정렬(n)자릿수d 실제는 괄호 생략// index++;
		
	}

}
