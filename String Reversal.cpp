#include <iostream>
using namespace std;
void reverse(string str)
{
     if(str.size() == 0)
    return;
    reverse(str.substr(1));
    cout << str[0];
}
int main()
{
    string mystr;
    cout<<"Enter a string:-";
    cin>>mystr;
    reverse(mystr);
}
/*OUTPUT
Enter a string:-hello
olleh
*/
