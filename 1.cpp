#include<bits/stdc++.h>
using namespace std;

bool isComment(string str, int n)
	{
		if(str[0]= '/' && str[1] ='/')
		return true;
		elseif(str(0)='/' && str(1)='*')
		return true;
		else
		return false;
	}
	
int main()
{
	string ip;
	cout<<"Enter line of code to test"<<endl;
	cin>>ip;
	cout<<ip;
	int n = str.length();
	if (isComment(str, n)) 
		cout<<endl<<"is Comment"; 
	else
		cout<<endl<<"is NOT comment"; 

	return 0;
	
	
}
