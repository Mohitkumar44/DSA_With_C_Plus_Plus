#include<iostream>
#include<vector>
class Cricketer{
    private:
    char name;
    int age;
    int noOfTestMatches;
    int averageRuns;
    public:
    void setName(char name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setNoOfTestMatches(int noOfTestMatches){
        this->noOfTestMatches = noOfTestMatches;
    }
    void setAverageRuns(int averageRuns){
        this->averageRuns = averageRuns;
    }
    char getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getNoOfTestMatches(){
        return noOfTestMatches;
    }
    int getAverageRuns(){
        return averageRuns;
    }
};
using namespace std;
int main(){
    int n = 20;
    

    // allocating memory dynamically.
    
    // Cricketer cricketers;
    vector<Cricketer> cricketers;
    for(int i = 1; i <= n; i++){
        Cricketer *cricketer = new Cricketer;
        char n;
        cout<<i<<". Enter Name of cricketer "<<i<<" : ";
        cin>>n;
        cricketer->setName(n);

        int k;
        cout<<"Enter age "<<i<<" : ";
        cin>>k;
        cricketer->setAge(k);

        cout<<"Enter no of test matches"<<i<<" : ";
        cin>>k;
        cricketer->setNoOfTestMatches(k);

        cout<<"Enter Average Runs "<<i<<" : ";
        cin>>k;
        cricketer->setAverageRuns(k);
        cricketers.push_back(*cricketer);
        delete cricketer;
    }
    for(int i = 0; i < n; i++){
        cout<<i+1<<". cricketer's name : "<<cricketers[i].getName()<<endl;
        cout<<"cricketer's age : "<<cricketers[i].getAge()<<endl;
        cout<<"cricketer's no of test matches : "<<cricketers[i].getNoOfTestMatches()<<endl;
        cout<<"cricketer's average runs : "<<cricketers[i].getAverageRuns()<<endl;
    }
    
    
    // allocating memory statically.
    
    // Cricketer cricketers[n];
    // for(int i = 1; i <= n; i++){
    //     char n;
    //     cout<<"Enter Name of cricketer "<<i<<" : ";
    //     cin>>n;
    //     cricketers[i].setName(n);

    //     int k;
    //     cout<<"Enter age "<<i<<" : ";
    //     cin>>k;
    //     cricketers[i].setAge(k);

    //     cout<<"Enter no of test matches"<<i<<" : ";
    //     cin>>k;
    //     cricketers[i].setNoOfTestMatches(k);

    //     cout<<"Enter Average Runs "<<i<<" : ";
    //     cin>>k;
    //     cricketers[i].setAverageRuns(k);
    // }
    // for(int i = 1; i <= n; i++){
    //     cout<<i<<". cricketer's name : "<<cricketers[i].getName()<<endl;
    //     cout<<"cricketer's age : "<<cricketers[i].getAge()<<endl;
    //     cout<<"cricketer's no of test matches : "<<cricketers[i].getNoOfTestMatches()<<endl;
    //     cout<<"cricketer's average runs : "<<cricketers[i].getAverageRuns()<<endl;
    // }

    return 0;
}