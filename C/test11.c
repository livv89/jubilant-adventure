#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* p= arr;
	int i;
	
	printf("int arr[] = { ");
	
	for(i=0;i<14;i++) //for문 안에서 선언한 int i는 for문 안에서만 사용됨.. 
	{
		printf("%d", p[i]);
		if(i<8) printf(",");
			
	}
	 printf("};");
	 return i;
}
