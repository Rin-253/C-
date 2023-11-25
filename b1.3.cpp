#include<iostream>
using namespace std;
class Mydate{
	int ngay,thang,nam;
	public:
		Mydate(){
		  ngay=2;
		  thang=4;
		  nam=1900;
		}
		Mydate(int d,int m,int y){
			ngay=d,thang=m,nam=y;
		}
		void nhap(){
			cout<<"nhap ngay:";cin>>ngay;
	        cout<<"nhap thang:";cin>>thang;
	        cout<<"nhap nam:";cin>>nam;
		}
		void xuat(){
			cout<<"\n"<<ngay<<"-"<<thang<<"-"<<nam<<"\n";
		}

int SoSanh(const Mydate& d)
    {
//So sanh ngay nay voi ngay d
//Neu ngay nay>d Tra ve 1;
//Neu bang nhau Tra ve 0
//Else Tra ve -1;
    if(nam>d.nam)
        return 1;             
    if(nam==d.nam)
        {
            if(thang>d.thang)
                return 1;
            if(thang<d.thang)
                return -1;
            if(thang==d.thang)
                {
                    if(ngay>d.ngay)
                        return 1;
                    if(ngay==d.ngay)
                        return 0;
                    return -1;                
                }   
        }          
    return -1;
    }
};
int main(){
	Mydate a[10];
	int n;
	cout<<"nhap n:";cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
		a[i].xuat();

	}
	
}