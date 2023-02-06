/*Write a program to print the area of two rectangles having sides (4,5) and 
(5,8) respectively by creating a class named 'Rectangle' with a function named 
'Area' which returns the area. Length and breadth are passed as parameters to 
its constructor.*/
#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        ~Rectangle(){}
};
int main(){
    Rectangle r1(4,5);
    Rectangle r2(5,8);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;

}