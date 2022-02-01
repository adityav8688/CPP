#include <bits/stdc++.h>

using namespace std;

int max_value(int a, int b){
    cout << "Max with 2 integers is "<<endl;
    if(a>b){
        return a;
    }else{
        return b;
    }
}

double max_value(double a, double b){
    cout << "Max with 2 doubles is "<<endl;
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int max_value(int a, int b, int c){
    cout << "Max with 2 integers is "<<endl;
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
        
    }else if(b>a){
        if(b>c){
            return b;
        }else{
            return c;
        }        
    }
}

int main(){
    cout << max_value(10,20)<<endl;
    cout << max_value(10.02,20.2)<<endl;
    cout << max_value(10,20,30)<<endl;


}