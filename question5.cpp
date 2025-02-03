//Question 5
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main(){
    float pa;
    float r;
    int t;
    int n;
    float A;
    float x;
    float y;
    float z;
    cout<<"principle amount:";
    cin>>pa;
    cout<<"rate of interest:";
    cin>>r;
    cout<<"time:";
    cin>>t;
    cout<<"no of times interest applied:";
    cin>>n;
    x=n*t;
    y=1+(r/n);
    z=pow(y,x);
    A=pa*z;
    cout<<A<<endl;
    return 0;
}