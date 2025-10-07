#include <iostream>
using namespace std;
int main()
{
   int n1, n2;
   cout<<"Entre the number:";
   cin>>n1>>n2;
   cout<<"Entre an operator (+,-,*,/):";
   char op;
   cin>>op;

   switch (op){
    case '+':
    cout<<"Sum = "<<n1+n2<<endl;
    break;
    case '-':
    cout<<"Difference ="<<n1-n2<<endl;
    break;
    case '*' :
    cout<<"product ="<<n1*n2<<endl;
    break;
    case '/' :
    cout<<"Division = "<<n1/n2<<endl;
    break;
    default:
    cout<<"enter a valid operator"<<endl;
    break;
   }
    return 0;
}