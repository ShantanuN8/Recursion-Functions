#include <iostream>
using namespace std;
int factorial(int n){
    if ((n==0)||(n==1))
   return 1;
   else
   return n*factorial(n-1);   
}

int main() {
    int n;
    cout<<"Number to find the factorial of:-";
    cin>>n;
    cout<<factorial(n); 
}
/*OUTPUT
Number to find the factorial of:-12
479001600
*/
