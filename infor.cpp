#include <iostream>
#include<string.h>
using namespace std;
struct sinhvien{

	char name[50];
	char date[20];
	char quequan[100];
	
	void nhap(){
	cout<<"nhap ten: ";fgets(name,sizeof(name)+1,stdin);
	cout<<"nhap ngay thang nam sinh: ";fgets(date,sizeof(date)+1,stdin);;
	cout<<"nhap que quan: ";fgets(quequan,sizeof(quequan)+1,stdin);; 
	}
	 
	void xuat(){
		cout<<"\n ten cua sinh vien la: "<<name;
		cout<<"\n ngay thang nam sinh cua sinh vien la: "<<date;
		cout<<"\n que quan cua sinh vien la: "<<quequan;
	} 
	
};

int main(){
	struct sinhvien sv[100];
	int n;
	cout<<"\n Nhap vao so sinh vien: "; cin>>n;
	for(int i=0; i<n; i++){
		sv[i].nhap();
	}
	for(int i=0; i<n; i++){
		sv[i].xuat();
	}
	
	char key[10];
	cout<<"\n Nhap vao ten can tim kiem:  "; cin>>key;
	for(int i=0; i<n;i++){
		if( strcmp(sv[i].name,"AN")==0){
			sv[i].xuat();
		}else{
			cout<<"Khong tim thay";
			break;
		}
	}
	
}