#include"stdio.h"
#include"conio.h"
 int main()
 {
   int n,i,kt;
   printf("nhap n:");
   scanf("%d",&n);
   if(n<=2)
   {
   	printf("moi ban nhap lai");
   	}
   for(i=2;i<=n-1;i++){
   if(n%i==0)
   {
     kt=0;
     printf("\n%d khong la so nguyen to",n);
     break;
     }
   if(n%i==1){
    printf("\n%d la so nguyen to",n);
    break;
   }  
  } 
   getch();
   return 0;

 }
 
