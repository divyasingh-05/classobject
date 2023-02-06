/*Write a program to print the area and perimeter of a triangle having sides of 
3, 4 and 5 units by creating a class named 'Triangle' with the constructor 
having the three sides as its parameters.*/
#include<iostream>
using namespace std;
class Triangle{
    int side1;
    int side2;
    int side3;
    public:
        Triangle(int a, int b, int c){
            int side1= a;
            int side2 = b;
            int side3 = c;
        }
        void print(){
            int perimeter = side1 +side2 + side3;
            double area = perimeter/2;
            cout<<"Perimeter of the triangle is "<<perimeter<<endl;
            cout<<"Area of the triangle is "<<area<<endl;
        }
       /* ~Triangle(){

        }*/
};
int main(){
    Triangle tri=Triangle(8,9,6);
    tri.print();
}