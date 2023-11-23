#include<iostream>
#include<vector>
using namespace std;
long fact(int n){
    if(n==1){
        return 1;
    }
    long f = n*fact(n-1);
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}