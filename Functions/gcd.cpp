#include<iostream>
using namespace std;
int gcd(int x,int y){
    int gcd=1;
    for (int i = 1; i <= min(x,y)/2; i++)
    {
        if (x%i==0&&y%i==0)
        {
            gcd=i;
        }
        
    }
    return gcd;

}
int main(){
    int n1,n2;
    cout<<"Enter n1 and n2 : ";
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}