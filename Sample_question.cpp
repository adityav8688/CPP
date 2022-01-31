#include <iostream>
using namespace std;

int main(){

    int i,sum=0,n;
    cout<<"Enter the value of n:"<<endl;
    cin>>i;
    //O(n)
    if(i>0){
        for(int j=1;j<=i;j++){
            sum += j;

        }
    }
    cout << "Sum of nummbers is: "<< sum <<endl;
    //O(1)
    if(i>0){
        n = (i*(i+1))/2;
        cout <<"sum of natural numbers is: "<<n<<endl;
    }
    return 0;
}