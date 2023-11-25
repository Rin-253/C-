#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n) {
    do{
        for (int i = 0; i < n; i++) {
            cout << "a[" << i << "]=";
            cin >> a[i];
        }
    }while(n<2);
}
int lonNhat(int a[],int n) {
    int max = a[0];
    int i;
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int swap(int &a,int &b){
	int temp;
	a=temp;
	a=b;
	b=temp;
	return temp;
}
int ktsoNguyento(int n) {
	if(n<=2) return 0;
		 
	       //so nguyen to :1, khong laf so nguyen to:0
	for(int i=2;i<=n-1;i++){
		if(n%i==0) return 0;
	    else if(n%i==1)return 1;
	}   
    return 1;
}
void shownguyento(int a[],int n){
	int b[50],dem=0;
	for(int i=0;i<n;i++){
	    b[dem]=a[i];
	    dem++;
		cout<<"a[i]";
	
}
}
void sapXep(int a[],int n) {
	int i,j;
    for (i = 0; i <= n - 1; i++) {
        for (j = i+1; j <n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}
int main() {
    int a[MAX], n;
    cout << "nhap n >= 2:";
    cin >> n;
    nhap(a,n);
    cout << "\nso lon nhat la:";
    lonNhat(a,n);
    cout << "\ncac so nguyen to la:";
    shownguyento(a,n);
    cout << "\nso tu be den lon";
    sapXep(a,n);
    return 0;
}
