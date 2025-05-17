#include <iostream>

using namespace std;

class Rectangle{
    public:
        int height, width;
        virtual void display(){
            std::cout<<width<<" "<<height<<std::endl;
        }
};

class RectangleArea : public Rectangle{
    public:
        void read_input(){
            std::cin>>width>>height;
        }
        void display()override{
            std::cout<<width*height<<std::endl;
        }
};


int main()
{
    
    RectangleArea r_area;
    
    r_area.read_input();
    
    r_area.Rectangle::display();
    
    r_area.display();
    
    return 0;
}