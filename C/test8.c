#include <stdio.h>
#include <conio.h>
int rectangle(int a, int b);
double triangle(int a, int b);
int main()
{
	int x, y;
	
	printf("(x, y) ? "); scanf("%d %d", &x, &y);
	int r = rectangle(x, y); // �տ� ������� ������ int rect(int a, int b)�� ���� 
	double t = triangle(x, y);
	
	printf("�غ��� %d�̰� ���̰� %d�� �簢���� ������ %d�Դϴ�.\n", x, y, r);
	printf("�غ��� %d�̰� ���̰� %d�� �ﰢ���� ������ %f�Դϴ�.\n", x, y, t);
}

int rectangle(int a, int b)
{
	int xy = a * b; //return a * b;
	return xy;
}
double triangle(int a, int b)
{
	double xy = (double)(a) * (double)(b) / 2.0;
	return xy;
}
