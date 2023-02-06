/*Write a program to print the area and perimeter of a triangle having sides of
 3, 4 and 5 units by creating a class named 'Triangle' with a function to print
  the area and perimeter.*/
#include<iostream>
using namespace std;
class Triangle{
    int side1 = 3;
    int side2 = 4;
    int side3 = 5;
    public:
        void print(){
            int perimeter;
            float area;
            perimeter=side1+side2+side3;
            area=perimeter/2;
            cout<<"Perimeter of the traingle is "<<perimeter<<endl;
            cout<<"Area of the traingle is "<<area<<endl;
        }
};

int main(){
    Triangle t;
    t.print();
}