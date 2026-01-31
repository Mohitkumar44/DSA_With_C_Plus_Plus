#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    cin>>str;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]=='a'){
            a++;
        }
        else if(str[i]=='b'){
            b++;
        }
        else if(str[i]=='c'){
            c++;
        }
        else if(str[i]=='d'){
            d++;
        }
        else if(str[i]=='e'){
            e++;
        }
        else if(str[i]=='A'){
            A++;
        }
        else if(str[i]=='B'){
            B++;
        }
        else if(str[i]=='C'){
            C++;
        }
        else if(str[i]=='D'){
            D++;
        }
        else if(str[i]=='E'){
            E++;
        }
    }

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;
    cout<<"C = "<<C<<endl;
    cout<<"D = "<<D<<endl;
    cout<<"E = "<<E<<endl;
    return 0;
}