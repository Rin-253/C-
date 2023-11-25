#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
	cout<<"a["<<i<<"]=";
	cin>>a[i];
}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
	cout<<"\na[i]=";
}
}
int hoanvi(int &a,int &b){
	int temp;
	a=temp;
	a=b;
	b=temp;
	return temp;
}
void sapxepchanle(int a[],int &n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((a[i]>a[j])&&(a[i]%2==0)&&(a[j]%2==0)){
				swap(a[i],a[j]);
			}
			 if((a[i]<a[j])&&(a[i]%2==1)&&(a[j]%2==1)){
			  swap(a[i],a[j]);
		    }
		}
	}
	for(i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}

int main()
{
	/*int a,b;
	float x;
	cout<<"nhap a=";cin>>a;
	cout<<"nhap b=";cin>>b;
	if(a==0)
	{
		if(a==0&&b==0) cout<<"phuong trinh vo so nghiem";
		else cout<<"\nphuong trinh vo nghiem";
	}
	else
	 {
	 	x=(float)-b/a;
	 cout<<"\nphuong trinh co nghiem duy nhat:"<<x;
	cout<<"\n";
	}*/
	int n,a[MAX];
	cout<<"nhap n:";cin>>n;
	nhap(a,n);
	cout<<"\nmang da duoc sap xep:";
    sapxepchanle(a,n);
	return 0;
}

