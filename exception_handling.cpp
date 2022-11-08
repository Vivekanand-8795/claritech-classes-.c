#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	
	try
	{
		if(y == 0)
		{
			throw "You cannot divide a number by zero.";
		}
		cout<<"Division is "<<(float)x/y<<endl;
	}
	catch(const char* e)
	{
		cerr<<e<<endl;
	}
}
