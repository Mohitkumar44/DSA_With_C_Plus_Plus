#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin, str);
    char maxTime = str[0];
    int len = str.length();
    int maxCount = 0;
    for (int i = 0; i < len; i++)
    {
        int count = 1;
        for (int j = i+1; j < len; j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }
        }
        if (maxCount<count)
        {
            maxTime = str[i];
            maxCount = count;
        }
        
    }
    cout<<maxTime<<endl;
    return 0;
}