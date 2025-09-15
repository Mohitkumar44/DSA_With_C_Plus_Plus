#include<iostream>
using namespace std;
int main(){
    int n,p;
    float result=1;
    cout<<"Enter number and power : ";
    cin>>n>>p;
    bool flag=true;
    if (p<0)
    {
        flag=false;
        p=-p;
    }
    
    for (int i = 0; i < p; i++)
    {
        result*=n;
    }
    if(flag==false){
        result = 1/result;
        p=-p;
    }
    if (n==0&&p==0)
    {
        cout<<"Not Defined"<<endl;
    }
    else
    {
        cout<<p<<"th power of "<<n<<" : "<<result;
    }    
    return 0;
}