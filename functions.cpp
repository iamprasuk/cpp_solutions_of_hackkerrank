#include<iostream>
using namespace std;

void greater_number(int a, int b, int c, int d){

    if (a>b && a>c && a>d){
        cout<<a;
    }
    else if (b>a && b>c && b>d){
        cout<<b;
    }
    else if (c>a && c>b && c>d){
        cout<<c;
    }
    else {
        cout<<d;
    }
}

int main()
{
    /* Prasuk write your code from here */
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    greater_number(a,b,c,d);
    return 0;
}