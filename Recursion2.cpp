//WAP to calculate power of given number using recursion
#include <iostream>
using namespace std;
int power(int base ,int exp){
    if(exp==0){
        return 1;
    }
    else if(exp==1){
        return base;
    }
    return base*power(base,exp - 1);
}
int main(){
    int exponent,base;
    cout<<"Enter the power and base"<<endl;
    cin>>exponent>>base;
    cout << base << "^" << exponent << " = " << power(base,exponent) << endl;
    return 0;
}
