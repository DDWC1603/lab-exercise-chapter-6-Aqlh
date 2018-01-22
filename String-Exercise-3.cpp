//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)
//aqilah syahirah A17DW2330

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[80];

	cout<<"Enter password: ";
	gets(str);
	
	if(strcmp(str,"password"))
	{
	   //strings differ
	   cout<<"Invalid password"<<endl;
	}
	
	 else cout<<"Logged in "<<endl;

	return 0;
}
