#include<iostream>
#include<stdio.h>
using namespace std;
class PS{
   double ts,ms;
  public:
  	PS(){}
  void nhap(){
  	cout<<"nhap tu so:";cin>>ts;
  	cout<<"\nnhap mau so:";cin>>ms;
    }
  void hienthi(){
    cout<<ts<<"/"<<ms;
  }
  
};

int main(){
  PS a;
  a.nhap();
  a.hienthi();
  return 0;
}
