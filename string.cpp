#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /* Prasuk write your code from here */
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char c = a[0];
    char d = b[0];
    a[0] =  d;
    b[0] = c;
    cout<<a<<" "<<b;
    return 0;
}
