#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int c,d;
	
	cout<<"Input 4 integers a,b,c and d";
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	// statement : a>b
	// execute AND and OR statements and print out the boolean
	//for AND condition
	cout<<(a>b && c>d);
	
	cout<<endl;
	// for OR condition
	cout<<(a>b || c>d);
	
	// c++ interprets true as 1
	// c++ interprets false as 0
	cout<<endl;
	return 0;
}

