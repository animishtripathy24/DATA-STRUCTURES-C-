#include<iostream>
using namespace std;

void first_part(int n)
{
	int i=1;
	while(i<=n)
	{
		int spaces=n-i;
		while(spaces)
		{
			cout << " " << " ";
			spaces--;
		}
		int stars=i;
		while(stars)
		{
			cout << "  " << "*" << " ";
			stars--;
		}
		i++;
		cout << endl;
	}
}

void second_part(int n)
{
	int i=1;
	while(i<=n)
	{
	int spaces2=i-1;
	while(spaces2)
	{
		cout << " " << " ";
		spaces2--;
	}
	int stars=n-i+1;
	while(stars)
	{
		cout << "  " << "*" << " ";
		stars--;
	}
	i++;
	cout << endl;	
	}

}

int main()
{
	int n;
	cin >> n;
	first_part(n);
	second_part(n);
}