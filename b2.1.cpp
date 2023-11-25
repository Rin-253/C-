#include<iostream>
using namespace std;
class MyAttr{
	int Attr;
	public:
		MyAttr(){}
		void nhap(){
			cout<<"nhap so hieu thuoc tinh cua tep:";cin>>Attr;
		};
		void hienthi(){
			cout<<Attr;
		};
};
class Mydate{
	int ngay,thang,nam;
	public:
		Mydate(){}
		Mydate(int d=2,int m=5,int y=1950){
			ngay=d,thang=m,nam=y;
		}
		void nhap(){
			cout<<"nhap ngay:";cin>>ngay;
	        cout<<"nhap thang:";cin>>thang;
	        cout<<"nhap nam:";cin>>nam;
		};
		void xuat(){
			cout<<"\n"<<ngay<<"-"<<thang<<"-"<<nam<<"\n";
		};
		/*bool operator > (Mydate &d){
			return SoSanh(d)>0;
		}*/
		bool cmp(const Mydate &d){
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

class Myfile:public MyAttr,public Mydate{
	char filename[255];
	int filesize;
	public:
		Myfile(){}
		void nhap(){
			MyAttr::nhap();
			Mydate::nhap();
			cout<<"nhap ten file:";fgets(filename,sizeof(filename)+1,stdin);
			cout<<"nhap kich thuoc:";cin>>filesize;
		}
		void xuat(){
			MyAttr::hienthi();
			Mydate::xuat();
			cout<<"ten file la:"<<filename<<"\t";
			cout<<"kich thuoc la:"<<filesize;
		}
};
int main(){
    /*ios::sync_with_stdio(0);//
    cin.tie(0);     // 3 dòng code để ở đầu hàm main giúp ct fast run
    cout.tie(0);*/            //khi cần nhập xuất với slg lớn
	
	Myfile t;
	t.nhap();
	t.xuat();
	return 0;
}


