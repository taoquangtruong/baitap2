#include<iostream>
using namespace std;

int tich(int a)
{
	int p=1;
	for(int i=1;i<=a;i++)
	p=p*i;
	return p;
}
int main()
{
	int n;
	cin>>n;
	cout<<"giai thua cua"<<"\t"<<n<<"="<<tich(n);
	}
