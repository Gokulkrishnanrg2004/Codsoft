#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"SIMPLE CALCULATOR"<<endl<<endl<<"ENTER ONE CHOICE FOR OPERATION YOU WANT TO PERFORM"<<endl<<endl;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    int n;
    cin>>n;
    int result,num1,num2;
    switch(n)
    {
        case 1:
        cout<<"Enter the number 1 : ";
        cin>>num1;
        cout<<"Enter the number 2 : ";
        cin>>num2;
        result=num1+num2;
        cout<<"The addition of "<<num1<<" and "<<num2<<" is : "<<result;
        break;

        case 2:
        cout<<"Enter the number 1 : ";
        cin>>num1;
        cout<<"Enter the number 2 : ";
        cin>>num2;
        result=num1-num2;
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" is : "<<result;
        break;

        case 3:
        cout<<"Enter the number 1 : ";
        cin>>num1;
        cout<<"Enter the number 2 : ";
        cin>>num2;
        result=num1*num2;
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is : "<<result;
        break;

        case 4:
        cout<<"Enter the number 1 : ";
        cin>>num1;
        cout<<"Enter the number 2 : ";
        cin>>num2;
        result=num1/num2;
        cout<<"The division of "<<num1<<" and "<<num2<<" is : "<<result;
        break;

        default :
        cout<<"Enter valid choice from the above displayed options";
    }
}
