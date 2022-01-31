#include <iostream>
using namespace std;

int main(){

    int i,sum;
    cout<<"Enter the value of n:"<<endl;
    cin>>i;
    if(i>0){
        for(int j=1;j<=i;j++){
            sum += i;
        }
    }
    cout << "Sum of natural num is:"<< sum <<endl;

    return 0;
}