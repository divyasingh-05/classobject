/*Create a class named 'Student' with a string variable 'name' and an
 integer variable 'roll_no'. Assign the value of roll_no as '2' and that 
 of name as "John" by creating an object of the class Student.*/
 #include<iostream>
 using namespace std;
 class Student{
    string name;
    int roll_no;
    public:
        Student(string n, int r){
            name= n;
            roll_no = r;
        }
        void print(){
            cout<<"Name and roll of the Student is "<<name<<endl;
            cout<<"Roll number of the student is "<<roll_no<<endl;  
        }
        ~Student(){
        }
        
 };
 int main(){
    Student one("Pradesh",1);
    Student two("Priya",2);
    one.print();
    two.print();
    return 0;
 }