#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int i;
    cin>>i;
    int a[i];
    for(int c=0; c<i; c++){
        cin>>a[c];
    }
    for(int c= i-1; c>=0; c--){
        cout<<a[c]<<" ";
    }
    return 0;
}

