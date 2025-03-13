// print n to 1
// #include <iostream>
// using namespace std;
// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     print(n);
//     return 0;
// }

// print 1 to n
// #include <iostream>
// using namespace std;
// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     print(n);
//     return 0;
// }

//print sum from 1 to n
// #include <iostream>
// using namespace std;
// static int sum=0;
// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     print(n-1);
//     sum+=n;
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     print(n);
//     cout<<sum<<endl;
//     return 0;
// }

//fnc which calculate the factorial of n using recursin
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

//fnc which calculates a raised to power b using recursion
#include <iostream>
using namespace std;
static int ans=1;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    power(a,b-1);
    ans*=a;
}
int main(){
    int a,b;
    cout<<"Enter the number and its power";
    cin>>a>>b;
    cout<<ans;
    return 0;
}