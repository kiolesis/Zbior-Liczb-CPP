#include<iostream>
#include<cmath>

using namespace std;

main()
{
	float a;
	cout<<"podaj liczbe";
	do
	{
		cin>>a ;
	}
	while(a<=-3 || a>=4);
	cout<<"liczba "<<a<<" nalezy do zbioru (-3;4)";
}
