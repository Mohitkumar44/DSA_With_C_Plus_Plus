#include<iostream>
using namespace std;
int power(int a,  int b){
    if (a==0)
    {
        if(b==0){
            cout<<"Not defined"<<endl;
            return -1;
        }
        return 0;
    }
    
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;    
    cout<<power(a,b);
    return 0;
}