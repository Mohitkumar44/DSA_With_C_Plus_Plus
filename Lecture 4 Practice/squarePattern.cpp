#include<iostream>
using namespace std;
int main(){
    int n=5;






    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << ch;
    //         ch = ch+1;
    //     }
    //     cout << endl;
        
    // }






    // char ch='A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout <<endl;

    // }


    // char ch='A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    //     ch++;
    // }
    
    
    
    // for (int i = 0; i < n; i++)
    // {
        //     for (int j = i+1; j > 0; j--)
        //     {
            //         cout << j << " ";
            //     }
            //     cout << endl;
            // }
            


            
            // for (int i = 0; i < n; i++)
            // {
            //     char ch='A';
            //     for (int j = i+1; j >0; j--)
            //     {
            //         char temp = ch+j-1;
            //         cout << temp << " ";
            //     }
            //     cout << endl;
            //     ch++;
            // }



            
            // char ch='A';
            // for (int i = 0; i < n; i++)
            // {
            //     for (int j = i+1; j >0; j--)
            //     {
            //         cout << ch << " ";
            //         ch++;
            //     }
            //     cout << endl;
            // }
            


            
            char ch='A';
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << " ";
                }
                
                for (int j = n-i; j >0; j--)
                {
                    cout << ch;
                }
                cout << endl;
                ch++;
            }
            
            
            
            
            return 0;
        }