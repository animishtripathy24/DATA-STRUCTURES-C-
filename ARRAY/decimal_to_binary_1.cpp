#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int binary[30];
    int i=0;
	while(n>0)
	{
		binary[i]=n%2;
		n=n/2;
		i=i+1;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<binary[j];
	}

}
