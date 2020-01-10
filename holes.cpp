#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	string a;
	cin>>x;
    	getline(cin,a);
	int count=0;
	for(int i=0;i<x;i++)
	{       
	       count=0;
	       
	       getline(cin, a);
	       char ch;
	       int l = a.length();
	       for(int j=0;j<l;j++)
	       {
	           ch = a.at(j);
	           
	           if(ch=='A'||ch=='D'||ch=='O'||ch=='P'||ch=='Q'||ch=='R')
	           count++;
	           else if(ch=='B')
	           count=count+2;
	       }
	       cout<<count<<endl;
	}
	return 0;
}
