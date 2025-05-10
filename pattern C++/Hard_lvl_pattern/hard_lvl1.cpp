// Numder of Outer loop runs
// No of space loop runs(inner loop)
// No of print loop run (inner loop)
// what to print

#include<iostream>
using namespace std;
int main(){
int n = 5;
for(int i =1 ; i<= n; i++){
	for(int j = n - 1; j>= i; j--){
		cout<<" ";
	}
	for(int k =1; k<=i; k++){
		cout<<"*";
	}
	cout<<"\n";
	
}
return 0;
}

//     *
//    **
//   ***
//  ****
// *****