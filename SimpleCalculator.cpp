#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    char x;

    cout<<"===== SIMPLE CALCULATOR =====\n";
    cin>>a>>x>>b;
    switch(x)
    {
        case '+':
        cout<<"Sum = "<<a+b;
        break;

        case '*':
        cout<<"Product = "<<a*b;
        break;

        case '-':
        cout<<"Subtraction = "<<a-b;
        break;
        case '/':
          if(b!=0)
          {
            cout<<"Division"<<a/b;
           
          }
         else
          {
             cout<<"Error: Division by zero!";
          }
        break;
        default:
          cout<<"Invalid Input";


    }
    
   


}