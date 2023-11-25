#include <iostream>
#include<string>
using namespace std;
struct People{
	string hoten;
	int ngay;
	int thang;
	int nam;
	string quequan;
	
	void input(){
		cout<<"\nnhap ho ten: ";cin>>hoten;
		cout<<"\nnhap ngay sinh: ";cin>>ngay;
		cout<<"\nnhap thang sinh: ";cin>>thang;
		cout<<"\nnhap nam sinh: ";cin>>nam;
		cin.ignore();
		cout<<"\nnhap que quan: ";cin>>quequan;
	}
	void output(){
		cout<<"\nho ten: "<<hoten;
		cout<<"\nngay sinh: "<<ngay;
		cout<<"\nthang sinh: "<<thang;
		cout<<"\nnam sinh: "<<nam;
		cout<<"\nque quan: "<<quequan;
	}
};

int main(){
	People p1;
	cout<<"nhap thong tin 1 nguoi";
	p1.input();
	p1.output();
	
	int n;
	do{
		cout<<"\nnhap so luong sinh vien: "; cin>>n;
		if(n>40){
			cout<<"\nso luong sinh vien phai <=40";
		}
	}
	while(n>40);
	
	
	People arrPeople[n];
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong tin sinh vien thu "<<i+1<<": ";
		arrPeople[i].input();
	}
	
	cout<<"\n=============================";
	
	for(int i=0;i<n;i++){
		cout<<"\nthong tin sinh vien thu"<<i+1<<": ";
		arrPeople[i].output();
	}
	
	cout<<"\n=============================";
	cout<<"\nthong tin sinh vien ten AN:";
	for(int i=0;i<n;i++){
		if(arrPeople[i].hoten=="AN"){
			cout<<"sinh vien thu "<<i+1<<": ";
			arrPeople[i].output();
		}
	}
	
}