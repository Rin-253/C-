#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
class sp{
	double thuc,ao;
	float *p;
	public:
		sp(){}
		sp(double a,double b){
			thuc=a,ao=b;
		}
		void nhap();
		void xuat();
		sp operator+(const sp &a);
		sp operator-(const sp &a);
		
};
void sp::nhap(){
	cout<<"\nnhap phan thuc: "; cin>>thuc;
	cout<<"\nnhap phan ao: "; cin>>ao;
	/*float n;
		cout<<"\nnhap n:";cin>>n;
	p=new float[n];
	for(int i=0;i<n;i++){
		cout<<"\nnhap phan tu thu:"<<i;cin>>*(p+i);
		*(p+i).nhap();
	}*/
}
void sp::xuat(){
	cout<<"so thuc la:"<<thuc<<"+"<<ao<<"i";
	cout<<"\n";
	/*p=new float[n];
	for(int i=0;i<n;i++){
		cout<<"\nnhap phan tu thu:"<<i;cin>>*(p+i);
		*(p+i).xuat();
	}*/
}
sp sp::operator+(const sp &a) {
	sp cong;
	cong.thuc =thuc + a.thuc ;
	cong.ao =ao + a.ao;	
	return cong;
}

sp sp::operator-(const sp &a){
	sp tru;
	tru.thuc =thuc  - a.thuc;
	tru.ao= ao - a.ao; 
	return tru;
} 
int main(){
	sp a,a1,a2,c;
	a1.nhap();
	a1.xuat();
	a2.nhap();
	a2.xuat();
	cout<<"\n tong hai so phuc la:";
	c=a1+a2;
	c.xuat();
	return 0;
}