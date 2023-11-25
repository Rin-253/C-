#include<iostream>
#include"ctype.h"
#include"string.h"
using namespace std;
struct ngay{
	int ngay,thang,nam;
};
class people{
	protected:
		int ngay,thang,nam;
		char hoten[50];
	public:
	    people();
	    void nhap();
	    void xuat();
};
class GV:public people{
	protected:
		int magv;
		char trinhdo[50];
	public:
		GV(){};
		void nhapGV();
		void xuatGV();
};
people::people(){};
void people::nhap(){
	cout<<"nhap ho ten:";fgets(hoten,sizeof(hoten)+1,stdin);
	cout<<"\nnhap ngay sinh:";
	cin>>ngay>>thang>>nam;
}
void people::xuat(){
	cout<<"\nho ten:"<<hoten;
	cout<<"ngay sinh:"<<ngay<<" "<<thang<<" "<<nam;
}

void GV::nhapGV(){
	people::nhap();
	cin.ignore();
	cout<<"nhap trinh do:";
	fgets(trinhdo,sizeof(trinhdo)+1,stdin);
	cout<<"nhap magv:";
	cin>>magv;
}
void GV::xuatGV(){
    people::xuat();
	cout<<"\ntrinh do:"<<trinhdo;
	cout<<"magv:"<<magv;
}
int main()
{
	GV a;
	a.nhapGV();
	a.xuatGV();
	return 0;
}
