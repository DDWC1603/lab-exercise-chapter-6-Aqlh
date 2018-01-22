//its just an array example
//find the sum of all the value inside the array
//aqilah syahirah A17DW2330
#include <iostream>
using namespace std;


int main()
{
int ary[5]={5,34,56,2,5};

int n, result=0;

	for(n=0;n<5;++n)
	{
		result += ary[n];
	}
	cout<<result;
}
