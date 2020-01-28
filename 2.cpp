#include <bits/stdc++.h> 
using namespace std; 

bool isValid(string str, int n) 
{ 
 
	if (!((str[0] >= 'a' && str[0] <= 'z') 
		|| (str[0] >= 'A' && str[1] <= 'Z') 
		|| str[0] == '_')) 
		return false; 

	for (int i = 1; i < str.length(); i++) { 
		if (!((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= '0' && str[i] <= '9') 
			|| str[i] == '_')) 
			return false; 
	} 

	return true; 
} 
 
int main() 
{ 
	string str;
	cout<<"Enter line of code to test"<<endl;
	cin>>str;
	cout<<"Enterd string is"<<endl<<str;
	int n = str.length(); 
	if (isValid(str, n)) 
		cout<<endl<<"VALID"; 
	else
		cout<<endl<<"INVALID"; 

	return 0; 
} 

