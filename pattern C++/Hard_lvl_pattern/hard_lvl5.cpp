#include<iostream>
using namespace std;
int main(){
int n = 5;
for(int i =1 ; i<= n; i++){
    for(int j = n - 1; j>= i; j--){
        cout<<" ";
    }
    for(int k =1; k<=i; k++){
        cout<<" "<< i;
    }
    cout<<"\n";
    
}
return 0;
}

 //     1
 //    2 2
 //   3 3 3
 //  4 4 4 4
 // 5 5 5 5 5