#include<iostream>
#include<stdio.h>
using namespace std;
class ps{
   double ts,ms;
  public:
  	ps(){}
  void nhap(){
  	cout<<"nhap tu so:";cin>>ts;
  	cout<<"\nnhap mau so:";cin>>ms;
    }
  void xuat(){
    cout<<ts<<"/"<<ms;
  }
  int ucln(int c,int d){
  	int r;
  	if(c==d)cout<<"1";
  	else{
  		while(c%d!=0){
  			r=c%d;
  			c=d;
  			d=r;
		  }
	  }
  }
  ps tongps(){
  	int x;
  	for(int i=2;i<=n;i++){
  	  b.ts=ts*b.ms+ms*b.ts;
  	  b.ms=ms*b.ms;
  	  x=ucln(b.ts,b.ms);
  	  b.ts/=x;
  	  b.ms/=x;
     }
     return b;
  }
 void hienthi(){
  	ps tong=tongps();
  	cout<<"TONG PS:"<<tong.ts<<"/"<<tong.ms;
  }
};

int main(){
  ps a[100];
  int n;
  cout<<"nhap n:";cin>>n;
  for(int i=1;i<=n;i++){
  	a[i].nhap();
  	a[i].xuat();
  	a[i].hienthi();
  }
  return 0;
}