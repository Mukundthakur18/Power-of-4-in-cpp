#include <iostream>
using namespace std;

bool powofFOur(int n){
    if(n == 0) return false;
    while(n%4 ==0){
        n/=4;
    }
    return n==1;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool result = powofFOur(num);
    if(result){
        cout<< num << " is a power of 4!"<<endl;
    }
    else{
        cout<<num<<" is not a power of 4!"<<endl;
    }
    return 0;
}