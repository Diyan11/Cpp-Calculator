#include<iostream>
using namespace std;
int main(){
   double num1, num2;
   char op;
   char choice;

   cout<<"------Simple Calculator------"<<endl;
   
   cout<<"Enter first number: ";
   cin>>num1;

   cout<<"Enter operator(+, -, /, *):";
   cin>>op;

   cout<<"Enter second number: ";
   cin>>num2;

   double result;

   switch (op)
   {
   case '+':
    result=num1+num2;
    break;

   case '-':
   result=num1-num2;
    break;
   
    case '*':
    result=num1*num2;
    break;

    case '/':
    if (num2 != 0)
        result=num1/num2;
    else{
        cout<<"Error: Division by zero"<<endl;
    }break;

   default:
     cout << "Invalid operator!" << endl;
   }
     cout << "Result: " << result << endl;

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
         
        cout<<endl;
    while (choice=='y'|| choice == 'Y');
    cout<<"Thank You for choosing this calculator"<<endl;
    return 0;



}