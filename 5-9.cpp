#include <iostream>

using namespace std;

 main() {
  int N, j, f;
   cout << "please enter an integer number : ";
    cin >> N; f=1;
	 for(j = 2; j <= N; j++) {
	   f*=j;   
	    }   
		 cout << N <<"! is " << f ;
}