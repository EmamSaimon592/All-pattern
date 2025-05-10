#include<iostream>
using namespace std;
int main(){
char i, j;
for( i = 'A' ; i <= 'E'; i++){
	for(int j = 'E'; j>= i; j--){
		cout<<i;
	}
	cout<<"\n";
}
return 0;
}

// AAAAA
// BBBB
// CCC
// DD
// E