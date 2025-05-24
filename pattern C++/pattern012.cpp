#include<iostream>
using namespace std;
int main(){
char i, j; 
for( i = 'A' ; i <= 'E'; i++){
	for( j = 'A'; j<=i; j++){
		cout<<j;
	}
	cout<<"\n";
}
return 0;
}

//the output will be
// A
// AB
// ABC
// ABCD
// ABCDE
