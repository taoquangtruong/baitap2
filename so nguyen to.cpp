#include<iostream>
#include<cmath>
using namespace std;
bool kt(int n)
{
	int i,dem=0;
	if(i<2) return 0;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) dem++;
	if(dem==1) return 1;
	
	
	
}
int main()
{
	int i,n;
	cout<<"nhap mot so nguyen :";
	cin>>n;
	
	if(kt(n)==1)
	cout<<n<<"la so nguyen to";
	else
	cout<<n<<"khong la so nguyen to";
}
    
