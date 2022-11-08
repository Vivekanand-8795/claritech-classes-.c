#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	// write data
	ofstream os("data.txt");
	
	if(os.is_open())
	{
		os<<"Good Morning.";
		os<<"\nHello and welcome";
		
		os.close();
	}
	
}
