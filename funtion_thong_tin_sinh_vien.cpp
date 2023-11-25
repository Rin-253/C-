#include<iostream>
using namespace std;
#include"string.h"
struct sinhvien{
   string tsv;
   int tuoi;
   string ms;
};

typedef struct sinhvien SV;
void nhapttsv(SV, 0&x){
  cin.ignore();
  cout<<"\n\tnhap ten sinh vien:";
  getline(cin,x.tsv);
  cout<<"\n\tnhap tuoi cua sinh vien:";cin>>x.tuoi;
  cin.ignore();
  cout<<"\n\tnhap ma so sinh vien:";
  getline(cin,x.ms);
}

void xuatttsv(SV, x){
  cout<<"\n ten sinh vien:"<<x.tsv;
  cout<<"\n tuoi cua sinh vien:"<<x.tuoi;
  cout<<"\n ma so sinh vien:"<<x.ms;
}

void nhapdssv(SV a[],int n){
	for(int i=0;i<n;i++){
   cout<<"\n\nNhap thong tin sinh vien thu:"<<i+1;
   nhapttsv(a[i]);
   }
}

void xuatdssv(SV a[],int n){
	for(int i=0;i<n;i++){
   cout<<"\n\nThong tin sinh vien thu:"<<i+1;
   xuatttsv(a[i]);
   }
}

/*int lonnhat(SV a[],int b,int c){
	int n;
  for(int i=0;i<n;i++){
		max(b>c?b:c)
  }
}

void svtuoilonnhat(SV a[],int m){
	int dem=1;
	if(m==lonnhat(a,b,c)){
    cout<<"\n\t Thong tin sinh vien"<<dem++;
    xuatttsv(a[i]);
    }
 } 

int hvi(int &a,int &b)
{
  int temp;
  a=temp;
  a=b;
  b=temp;
  
}

void tang(SV a[],int n){
 int i,j;
 for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     { if(a[i]>a[j]){
	    hvi(a[i],a[j]);
	    }
	 }
   }
}*/

int main()
{
  SV a[100];
  int n;
  cout<<"Nhap so luong sinh vien:";cin>>n;
  cout<<"\n\n\t NHAP DANH SACH SINH VIEN";
  nhapdssv(a,n);
  cout<<"\n\n\t XUAT DANH SACH SINH VIEN";
  xuatdssv(a,n);
  /*cout<<"\n\n Sinh vien co tuoi lon nhat la:";
  svtuoilonnhat(a,m);
  cout<<"\n\n\t SAU KHI SAP XEP";
  tang(a,n);*/
  return 0;
}

