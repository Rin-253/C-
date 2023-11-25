#include<iostream>
using namespace std;
int main()
{
  int a,b,s;
  do
  {
  cout<<"nhap a=";cin>>a;
  cout<<"nhap b=";cin>>b;
  }while(a==0&&b==0);
  s=a*b;
  if(a==0)
  {
  	{
    cout<<"UCLN :"<<b;
    cout<<"\tBCNN la :0";
     }
    if(b==0)
      {
	cout<<"\nUCLN :"<<a;
    cout<<"\tBCNN la: 0";
    }
  }
  
    else{
  
     while(a!=b){
	   if(a>b)a=a-b;
	          b=b-a;
	 }
	 cout<<"\nUCLN la:"<<a;
	 cout<<"\tBCNN la:"<<s/a;
  
  }
  return 0;
}
