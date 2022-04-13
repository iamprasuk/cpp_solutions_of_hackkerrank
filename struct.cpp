#include<iostream>
#include <string>
using namespace std;

typedef struct employee{
    int age;
    string first_name;
    string last_name;
    int standard;
}st;

int main()
{
    /* Prasuk write your code from here */
    st person;
    cin>>person.age>>person.first_name>>person.last_name>>person.standard;
    cout<<person.age<<" "<<person.first_name<<" "<<person.last_name<<" "<<person.standard;
    
    return 0;
}