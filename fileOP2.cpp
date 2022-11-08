#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	// read file
	ifstream fs("data.txt");
	string str;
	
	if(fs.is_open())
	{
		while(getline(fs, str))
		{
			cout<<str<<endl;
		}
		
		fs.close();		
	}
	
}
