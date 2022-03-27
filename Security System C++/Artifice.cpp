#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	int t=0;
	string p,o,p1,p2,pass;
	while(t!=3)
	{
		cout<<"1.Change the password\n2.Login page to see the data\n3.Quit"<<endl;
		cout<<"Enter your choice:";
		cin>>t;
		switch(t)
		{
			case 1:
				{
					ifstream read("CodeSpeedy.txt");
					cout<<"Enter your old password:";
					cin>>o;
					while(read>>p)
					{
						
						if(o==p)
						{
							read.close();
							ofstream write("CodeSpeedy.txt");
							cout<<"Enter your new password:";
							cin>>p1;
							cout<<"Confirm your new password:";
							cin>>p2;
							if(p1==p2)
							{
								write<<p1;
								cout<<"Congrats! password change successfully"<<endl<<endl;
							}
							write.close();
							break;
						}
						else
						{
							cout<<"Please, enter valid password."<<endl<<endl;
						}
					}
					break;
				}
			case 2:
				{
					ifstream read("CodeSpeedy.txt");
					cout<<"Please enter a password:";
					cin>>pass;
					while(read>>p)
					{
							
						if(pass==p)
						{
							cout<<"Congrats! Access granted"<<endl<<endl;
							break;
						}
						else
						{
							cout<<"Sorry! Password is wrong"<<endl;
						}
					}
					read.close();
					break;
				}
			case 3:
				{
					break;
				}
			default:
				cout<<"Enter a valid choice";
		}
	}
	return 0;
}
