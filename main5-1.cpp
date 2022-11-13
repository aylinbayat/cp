#include <iostream>
using namespace std;

main(){ 
int n,m;
cin >> n,m;
if ( n<6000000){ 
m=n-n*0/100;
cout << m;
} 
else if ( n>=6000000 && n<8000000 ) {
m=n-n*5/100;
cout << m; 
}
else if ( n>=8000000 && n<10000000) {
m=n-n*10/100;
cout << m;
} 
else if (n>=10000000 && n<14000000) {
m=n-n*15/100;
cout << m;
}
else if (n>=14000000 && n<18000000 ) {
m=n-n*20/100;
cout << m;
} 
else if (n>=18000000 && n<25000000) {
m=n-n*25/100;
cout << m;
}
else if(n>25000000 ){
m=n-n*35/100;
cout << m;
} 
}