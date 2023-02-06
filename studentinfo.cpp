/*Assign and print the roll number, phone number and address of two students
having names "Sam" and "John" respectively by creating two objects of the 
class 'Student'*/
#include<iostream>
using namespace std;
class Student{
    int roll_number;
    long long int phone_number;
    string address;
    string name;
    public:
        Student(int rn, long long int pn, string ad, string n){
            roll_number = rn;
            phone_number = pn;
            address = ad;
            name = n;
        }
        ~Student(){

        }
        void print(){
            cout<<name<<" roll number "<<roll_number<<" phone number  "<<phone_number<<" address  "<<address<<endl;
        }
};
int main(){
    Student first(13,9876543210,"Patna, 987654, Bihar","Sam");
    Student second(76,234567891,"Gaya, 789453, Bihar","John");
    first.print();
    second.print();

}