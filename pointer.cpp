#include<iostream>
using namespace std;

void sumdef(int *a,int *b){
    int c = *a+*b;
    *b= *a-*b;
    *a = c;
    if (*b<0){
        *b= (-1)*(*b);
    }
    cout<<*a<<endl;
    cout<<*b<<endl;
}

int main()
{
    /* Prasuk write your code from here */
    int a,b;
    cin>>a;
    cin>>b;
    int *p = &a;
    int *d = &b;
    sumdef(p,d);
    return 0;
}