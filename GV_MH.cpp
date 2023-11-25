#include<iostream>
#include"string"
using namespace std;
class MH{
	string mh;
	int st;
	public:
		MH(){}
		void nhap(){
		 cin.ignore();
	        cout<<"\nnhap ten mon hoc:";cin.ignore();getline(cin,mh);
	        cout<<"nhap so tiet:";cin>>st;
		};	
		void xuat(){
			cout<<"\nmon"<<"\t"<<mh<<"\t"<<st;
		};
};
class GV{
	string hoten;
	int ns;
	int n;
	MH*ds;
	public:
		GV(){}
		void nhapgv(){
			cout<<"\n\nnhap ho ten:";cin.ignore();getline(cin,hoten);
	        cout<<"nhap nam sinh:";cin>>ns;
	        cout<<"nhap so mon co the day:";cin>>n;
	        ds=new MH[n+1];
	        for(int i=0;i<n;i++){
		      cout<<"nhap mon hoc thu:"<<i+1;
		      ds[i].nhap();
	       }
      }
	    void xuatgv(){
	      cout<<"\n"<<hoten<<"\t"<<ns;
	      ds=new MH[n+1];
	      for(int i=0;i<n;i++){
		     cout<<"\nmon hoc thu:"<<i+1;
		     ds[i].xuat();
	       }
      }	
};

class BM{
	string tenBM;
	int sogv;
	//GV ds[100];
	public:
		BM(){}
		void nhapbm(){
			cin.ignore()
			cout<<"\nnhap ten bo mon:";getline(cin,tenBM);
			cout<<"\nnhap so giao vien:";cin>>sogv;
		}
		void xuatbm(){
			cout<<"ten bo mon:"<<tenBM;
			cout<<"\nso giao vien:"<<sogv;
			
		//	cout<<"\ndanh sach giao vien:"<<dsgv;
		}
		
};
int main()
{
	GV a;
	a.nhapgv();
	cout<<"\nso mon day/so tiet:";
	a.xuatgv();
	BM b;
	b.nhapbm();
	b.xuatbm();
	return 0;
}