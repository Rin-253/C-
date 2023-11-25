#include<iostream>
using namespace std;
struct hcn{
	int dai,rong;
};

int main()  // cach 1 : khoi tao cua struct o ham main()
{
  struct hcn *b;
  struct hcn a;
  b=&a;
  cout<<"nhap chieu dai:";cin>>a.dai;
  cout<<"\nnhap chieu rong:";cin>>a.rong;
  cout<<"\nchieu dai cua a la:"<<a.dai<<"\t\tchieu rong cua a la:"<<a.rong;
  b->dai=10;b->rong=6;
  cout<<"\nchieu dai la:"<<a.dai<<"\t\tchieu rong la:"<<a.rong;
  cout<<"\ndien tich hcn la:"<<a.dai*a.rong;
  
}

// cach 2 : khoi tao gia tri ngay trong struct va luu y ham khoi tao phai giong voi ten cua struct
/*struct hcn{
   int dai,rong;
   
   hcn(int x,int y)
   {
     dai=x; rong=y;
   }
};

int main()
{
  int x,y;
  cout<<"nhap x=";cin>>x;
  cout<<"nhap y=";cin>>y;
  cout<<"dien tich hcn la:"<<x*y;
  return 0;
}*/

