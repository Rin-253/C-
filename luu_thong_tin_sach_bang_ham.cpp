#include<iostream>
using namespace std;
struct sach{
	char td[100];  
	 char tg[20];
	 char cd[50];
	 int ms;                      
	
};
int main()
{
	struct sach a;
  cout<<"nhap thong tin sach";
  nhaptts(&a);
  hienthisach(a);
  return 0;
}

void nhaptts(struct sach *a){    //khi dung bien con tro thi chuyen dau "." thanh"->"
  cin.ignore();
  struct sach a;
  cout<<"nhap tieu de :";
  fgets(a->td,sizeof(a->td)+1,stdin);
  cout<<"\nnhap tac gia :";
  fgets(a->tg,sizeof(a->tg)+1,stdin);
  cout<<"\nnhap chu de :";
  fgets(a->cd,sizeof(a->cd)+1,stdin);
  cout<<"\nnhap ma sach :";
  cin>>a->ms;
}

void hienthisach(struct sach a){
  cout<<"\n\tTHONG TIN SACH:";
  cout<<"\ntieu de la:"<<a.td;
  cout<<"\ntac gia la:"<<a.tg;
  cout<<"\nchu de la:"<<a.cd;
  cout<<"\nma sach la:"<<a.ms;

}
