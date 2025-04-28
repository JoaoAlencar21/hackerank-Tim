#include<iostream>

struct Student{
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

int main(){
    Student zeze;
    std::cin>>zeze.age>>zeze.first_name>>zeze.last_name>>zeze.standard;
    std::cout<<zeze.age<<" "<<zeze.first_name<<" "<<zeze.last_name<<" "<<zeze.standard;

    return 0;
}