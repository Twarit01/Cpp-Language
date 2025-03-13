// odd index multiply by 2 and even multiple increment by 10
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={23,32,4,3,10};
//     for(int i=0;i<5;i++){
//         if(i%2==0){
//             arr[i]+=10;
//         }
//         else{
//             arr[i]*=2;
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
void modifybyval(int a){
    a+=10;
}
void modifybyref(int &b){
    b+=10;
}
void swapvalues(int &x,int y){
    int temp = x;
    x=y;
    y = temp;
}
int main(){
    int a=5;
    int b=10;
    modifybyval(a);
    modifybyref(b);
    swapvalues(a,b);
    modifybyval(a);
    modifybyref(b);
    swapvalues(a,b);
    cout<<a<<"   "<<b;
    return 0;
}