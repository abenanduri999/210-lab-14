//COMSC-210 | Lab 14 | Abhishek Nanduri
// IDE used: VS code

#include<iostream>

using namespace std; 

class Color {
    
    public:
       //private variables only accessible by the class
        int Red; 
        int Green; 
        int Blue; 

    private: 
        // getters and setters
        void setRed(int r) { Red = r; }
        void setGreen(int g) { Green = g; }
        void setBlue(int b) { Blue = b; }
        int getRed()   { return Red; }
        int getGreen() { return Green; }
        int getBlue()  { return Blue; }

       

};