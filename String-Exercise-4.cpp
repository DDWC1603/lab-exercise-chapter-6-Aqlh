//convert string to uppercase
//complete the fragment code below using the string to uppercase function.
//aqilah syahirah A17DW2330

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char lowerToUpper[80];
	int i;

	strcpy(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = toupper(lowerToUpper[i]);

	}

	cout<<lowerToUpper<<endl;
}
	
