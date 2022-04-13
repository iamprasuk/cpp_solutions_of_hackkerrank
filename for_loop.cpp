#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /* Prasuk write your code from here */
    int a,b,i;
    string s[] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++){
        if (i<=9){
            cout<<s[i-1]<<endl;
        }
        else{
            cout<<s[9+i%2]<<endl;
        }
    }
    return 0;
}
