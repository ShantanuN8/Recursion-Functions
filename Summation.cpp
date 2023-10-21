#include <iostream>
using namespace std;
int summation(int n){
    if ((n==0)||(n==1))
   return 1;
   else
   return n+summation(n-1);  
}

int main() {
    int n;
    cout<<"Number to find the summation of:-";
    cin>>n;
    cout<<summation(n);  
}
/*OUTPUT
Number to find the summation of:-12
78
*/
