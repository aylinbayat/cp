#include <iostream>
using namespace std;
const int a=10 ;
main ()
{
	int n[a];
	int i ,min ;
	for (i=0; i<a; i++)
	{
		cout <<"please enter value ["<<i<<"] : ";
		cin >> n [i];
	}
	min = n [1];
	for (i=0; i<10; i++)
	{
		if (n [i]<min )
		{min =n [i+1];
		
		}
	}
	cout << "minimum value is : " <<min;
}