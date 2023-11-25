#include<iostream>
#include"time.h"//thư viện để dùng time(NULL)
#include"stdlib.h"//thư viện để dùng random
using namespace std;
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	int *p;
	p=new int[n];
	//nhập các phần tử n
	//for(int i=0;i<n;i++)
	//{
	//	cout<<"nhap phan tu thu:"<<i<<"\n";
	//	cin>>*(p+i);
	//}
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		*(p+1)=rand()% 99+1;
	}
	//xuất các phần tử
	cout<<"\nmang random la:"<<"        \n";
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<"\t";
	}
	//sắp xếp phần tử tăng dần
	cout<<"\nmang sau khi sap xep la:\n";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			  swap(*(p+i),*(p+j));
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<"\t";
	}
	return 0;
}