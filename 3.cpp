#include <bits/stdc++.h> 
using namespace std;

//void traverse(string str,int n)
//{
//	int i,count1=0,count2=0,count3=0;
//	for(i=0;i<=n;i++)
//	{
//	if (str[i]='a')
//	{
//		count1++;
//		cin>>count1;
//	}
//	if (str[i]='b')
//	{
//		count2++;
//		cin>>count2;
//	}
//	if (str[i]='c')
//	{
//		count3++;
//		cin>>count3;
//	}
//	}
////	return false;
//}

//void isValid()
//{
//	traverse(str, n);
//	if(count1=count3 && count2>=0)
//	return true;
//	else
//	return false;
//}
int main() 
{ 
	//string str1,str2,str3;
//	int n1=str1.length();
//	int n2=str2.length();
//	int n3=str3.length();
	string str ="aaabbccc";
//	cout<<"Enter line of code to test"<<endl;
//	cin>>str;
//	cout<<"Enterd string is"<<endl<<str;
	int n = str.length(); 
	
	int i,count1=0,count2=0,count3=0;
	for(i=0;i<=n;i++)
	{
	if (str[i]='a')
	{
		count1++;
		cin>>count1;
		cout<<count1;
	}
	else if (str[i]='b')
	{
		count2++;
		cin>>count2;
		cout<<count2;
	}
	else if (str[i]='c')
	{
		count3++;
		cin>>count3;
		cout<<count3;
	}
	}
	
	if(count1=count3 && count2>=0)
	cout<<"Accepted";
	else
	cout<<"UnAccepted";

	return 0; 
} 
