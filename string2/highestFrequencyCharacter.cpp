#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin, str);
    vector<int> v(26,0);
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        int value = (int)ch - 97;
        v[value]++;
    }
    char max = str[0];
    int maxCount = 0;
    for (int j = 0; j < 26; j++)
    {
        if (v[j]>maxCount)
        {
            max = (char)(j+97);
            maxCount = v[j];
        }
        
    }
    cout<<max;
    return 0;
}