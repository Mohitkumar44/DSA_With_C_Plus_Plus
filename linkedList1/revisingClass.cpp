#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollNo;
    float marks;
    Student(string name, int rollNo, int marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    void show(){
        cout<<name<<endl;
        cout<<rollNo<<endl;
        cout<<marks<<endl;
    }
};
// void change(Student &s){
//     s.name = "krishna";
// }
void change(Student* s){
    s->name = "krishna";
}
int main(){
    Student s("mohit", 21, 23);
    Student* ptr = new Student("mohit", 21, 23);
    cout<<ptr->name;
    return 0;
}