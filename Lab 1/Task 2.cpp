#include <iostream>
using namespace std;
void operators (char expression[])
{
cout <<"operators Found: ";
int count =1;
for(int i =0;expression[i]!='\0';i++)
    {
    if(expression[i] == '+'||expression[i]=='-'|| expression[i]=='*'||
expression[i]=='/'|| expression[i]=='%'|| expression[i]=='=')
{
cout<<"Operator: "<<count<< " : " <<expression[i]<<" \n";
count++;
  }
  }
}
int main()
{
char expression[100];

cout<<"Enter an expression: ";
cin>>expression;

operators(expression);
return 0;
}
