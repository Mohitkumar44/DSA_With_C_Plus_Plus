#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int noOfPages;
    int countBooks(int p){
        if(p < price) return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(book == name) return true;
        else return false;
    }
};
int main(){
    book harryPotter;
    harryPotter.name = 'H';
    harryPotter.price = 1900;
    harryPotter.noOfPages = 200;
    cout<<harryPotter.countBooks(50)<<endl;
    cout<<harryPotter.isBookPresent('H')<<endl;
    return 0;
}