#include<iostream>
using namespace std;
bool isComment(char line[])
{
    if(line[0] =='/' && line[1] == '/')
        return true;

     if(line[0] =='/' && line[1] == '*')
        return true;
        return false;
}
int main()
{
    char line[100];
    cout<<"enter a line:";
    cin.getline(line,100);
    if(isComment(line))
    {
        cout<<"This is a comment line."<<endl;
    }
    else{
        cout<<"This is not a comment line."<<endl;
    }
    return 0;
}

