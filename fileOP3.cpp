#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	// write data
	ofstream os("data.txt");
	
	string name, email;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your email : ";
	cin>>email;
	
	if(os.is_open())
	{
		os<<"Student name = "<<name;
		os<<"\nStudent email = "<<email<<"\n\n";
		
		os.close();
	}
	
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
