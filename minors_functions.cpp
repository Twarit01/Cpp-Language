#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp;
    cout<<a<<endl;
    cout<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){
    swap(13,15);
    return 0;
}