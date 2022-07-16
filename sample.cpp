#include<iostream>
using namespace std;
int main()
{
    // int a,s;
    // cout<<"enter a number";
    // cin>>a;
    // s=a*a;
    // cout<<"Answer is"<<s;
    system("cls");
    int i,j,k,n=0;
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++)
        {
             cout<<" ";
        }
        cout<<"+";
        for(k=0;k<i;k++)
        {
             cout<<" ";
             cout<<"+";
        }
        cout<<"\n";
    

    }
}