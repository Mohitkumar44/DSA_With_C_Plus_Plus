#include<iostream>
int maxReturn(int a , int b, int c){
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else {
        return c;
    }
    
}
using namespace std;
int main(){
    int a = 7 , b = 6 , c = 9;
    cout<<maxReturn(a,b,c);
    return 0;
}