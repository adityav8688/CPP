#include <bits/stdc++.h>

using namespace std;
// here we taken "a" to increment it's value
void increment_by_value(int a){
    a++;
    cout << "Value of the copy variable after incrementing a "<< a << endl;
}
//here we taken address of "&a" to increment its value
void increment_by_address(int *ptr){
    (*ptr)++;
    cout<< "Incrementing the copied number using address: "<< *ptr << endl;
}
//here we taken "a" as reference
void increment_by_reference(int &n){
    n++;
    cout<< "Incrementing the copied number using reference: "<< n << endl;
}

int main(){
    int a=10;
    cout <<"value of number is "<< a << " address of number is "<< &a << endl;
    
    increment_by_value(a);
    increment_by_address(&a);
    increment_by_reference(a); 
    return 0;
}