//Print area of rectangle through function 
#include <iostream>
using namespace std;
int area(int,int);

int main(){
    int answer,l,b;
    cout<<"Enter the length and bredth of number"<<endl;
    cin>>l>>b;
    answer=area(l,b);
    cout<<"Area is "<<answer;
    return 0;
}
int area(int x,int y)
{
    return x*y;
}