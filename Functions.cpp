#include <iostream>
#include <cmath>
using namespace std;

/*  Function Syntax
    return_type function_name(parameters){
    function body
}*/

// function declaration / function prototype
int add(int c, int d);
// declaration and defination
int sub(int a, int b){
    return a-b;
}

int main(){

    int a,b,res;
    bool is_continue = true;
    while(is_continue){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout << "Enter the option"<< endl;
        cout << "Enter 1 for addition"<< endl;
        cout << "Enter 2 for suntraction"<< endl;
        cout << "Enter 3 for power"<< endl;
        cout << "Enter 4 for exit"<< endl;
        cin>>res;
        switch(res){
            case 1:
                cout<< "addition = "<<add(a,b)<<endl;
                break;
            case 2:
                cout<< "subtraction = "<< sub(a,b)<<endl;
                break;
            case 3:
                cout<< "power = "<< pow(a,b)<<endl;
                break;
            case 4:
                is_continue= false;
                break;
            default:
                cout<< "please enter numbers form 1 to 4 only"<<endl;
                break;             
        }
    }

    return 0;
}
//defination
int add(int c,int d){
    return c+d;
}