#include<iostream>
using namespace std;
int tower(int n,char a='A',char b='B',char c='C'){
    if(n==0){return 0;}
    tower(n-1,a,c,b);
    cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
    tower(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    tower(n);
}