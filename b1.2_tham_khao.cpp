#include<iostream>
#include"math.h"
using namespace std;
class cp{
	double a,b;
	public:
		cp();
		void nhap();
		void xuat();
		cp operator+(cp &);
		bool operator==(const cp &);
};
cp::cp(){
}
bool cp::operator==(const cp &c){
	return(a==c.a&&b==c.b);
}
void cp::nhap(){
	cout<<"nhap phan thuc:";
	cin>>a;
	cout<<"nhap phan ao:";
	cin>>b;
}
void cp::xuat(){
     cout<<a<<((b>=0)?"+":"-")<<abs(b)<<"i\n";
}
cp cp::operator+(cp &c){
    a+=c.a;
    b+=c.b;
	return c;
}
int main()
{
    cp v;
    cp g;
    int n;
    cout<<"nhap so phuc:";
    cin>>n;
    cp a[n];
    for(int i=0;i<n;i++){
    	cout<<"nhap so phuc"<<i+1<<endl;
        a[i].nhap();
	}
    for(int i=0;i<n;i++){
    	cout<<endl;
        a[i].xuat();
	}
    for(int i=0;i<n;i++){
    	g.operator+(a[i]);
	}
	v=g;
	cout<<"\ntong:\n";
	v.xuat();
	return 0;
}