#include<iostream>
using namespace std;
int main()
{
   int i,n;
   float s=0;
   cout<<"nhap n=";cin>>n;
   for(i=1;i<=n;i++)
   {
      s+=(float)1/(2*i+1);
   }
   cout<<"\ntong s la:"<<s;
   return 0;
}






