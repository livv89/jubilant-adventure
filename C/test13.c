#include <stdio.h>
/*int main()
{
  int i = 0x10;
  int *p = &i;
  int **pp  = &p;
  
  printf(" i : %08x (%08x)\n", &i, i);
  printf(" p : %08x (%08x) (%08x)\n", &p, p, *p);
  printf("pp : %08x (%08x) (%08x) \n", &pp, pp, 10***pp);
}*/

char* label[] = { "번호", "이름", "국어", "영어", "수학" };
char *name[] = { "아아아", "어어ㅇ", "으으ㅇ", "잉ㅇ잉", "우ㅇ우" }; //문자열은 포인터 타입.. 그래서 포인터배열쓴다? 아마..
int kor[] = { 10, 20, 30, 40, 50 };
int eng[] = { 90, 80, 70, 60, 50 };
int mat[] = { 33, 44, 55, 66, 77 };
//총점과 등수찍기

int main()
{ 
  for(int i = 0; i < 10; i++)
  {
    if(i==0)
    {
      for( int j = 0; j<5; j++)
      {
      printf("%s  ", label[j]);
      }
    printf("\n");
    }
    printf("%2d  %s  %3d    %3d   %3d\n", i+1, name[i], kor[i], eng[i], mat[i]);
  }
}
