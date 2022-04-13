#include<iostream>
#include <iomanip>
using namespace std;

int main(){

    /* Prasuk write your code from here */
    int a;
    long long int b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout << fixed << setprecision(3) << d << endl;  // setprecision is used to set decimal places after decimal.
    cout << fixed << setprecision(9) << e << endl;
    return 0;
}