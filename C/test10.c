#include <stdio.h>

int main()
{
	int a = 0x1234;
	char* pc;
	int* pi; // int *p ž»°í int* p Ÿ²ŽÂ°Ô ÀÇ¹Ì°¡ Á»Žõ žíÈ®.. 
	double* pd;
	printf("&a: %08x %08x\n\n\n", &a, a);
		
	pi = &a;
	pc = pi;
	pd = pi;
	
	printf("&a: %08x %08x\n", &a, a);
	printf("p  : %08x %08x\n", &pi, pi);
	printf("p  : %08x %08x %08x\n", pi, pc, pd);
	printf("p+1: %08x %08x %08x\n", pi+1, pc+1, pd+1); //*p == a
	printf("p+2: %08x %08x %08x\n", pi+2, pc +2, pd +2);
	
}
