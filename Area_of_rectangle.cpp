//Print area of rectangle through function 
#include <iostream>
using namespace std;
int area(int x,int y=25){
    return x*y;
}
int main(){
    int answer,l,b;
    cout<<"Enter the length and bredth of number"<<endl;
    cin>>l>>b;
    answer=area(l);
    cout<<"Area is "<<answer;
    return 0;
}
 