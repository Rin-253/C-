#include"stdio.h"
#include"conio.h"
int tong(int n);
int tong(int n)
{
   int s=0,i;
   for(i=1;i<=n;i++)s=s+i;
   return s;
}
 int main()
 {
 printf("tong cac so tu1 den 11 la %d",tong(11)) ;
 getch();
 return 0;
 }
 
