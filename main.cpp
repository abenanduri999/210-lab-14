//COMSC-210 | Lab 14 | Abhishek Nanduri
// IDE used: VS code

#include<iostream>

using namespace std; 

class Color {
    
    private:
       //private variables only accessible by the class
        int Red; 
        int Green; 
        int Blue; 

    public: 
        // getters and setters
        void setRed(int r) { Red = r; }
        void setGreen(int g) { Green = g; }
        void setBlue(int b) { Blue = b; }
        int getRed() const { return Red; }
        int getGreen() const { return Green; }
        int getBlue() const { return Blue; }

       void print() 
        {
            cout<<"Color:"<<endl; 
            cout<<"r: "<<Red<<endl; 
            cout<<"g: "<<Green<<endl; 
            cout<<"b: "<<Blue<<endl;

        }

};

int main() {

    Color c1, c2, c3; 

    c1.setRed(32); 
    c1.setGreen(130); 
    c1.setBlue(250); 

    c2.setRed(178);
    c2.setGreen(45); 
    c2.setBlue(89); 

    c3.setRed(201); 
    c3.setGreen(240); 
    c3.setBlue(30); 




}