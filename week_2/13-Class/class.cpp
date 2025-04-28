#include<iostream>

class Student{
    private:
        
    public:
        int age;
        std::string first_name;
        std::string last_name;
        int standard;

        Student(int years, int grade, std::string name, std::string surname){
            age = years;
            standard = grade;
            first_name = name;
            last_name = surname;
        }
        void student_string(){
            std::cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
        }
};

int main(){
    int idade, nota;
    std::string nome,sobrenome;
    std::cin>>idade>>nome>>sobrenome>>nota;

    Student zeze(idade,nota,nome,sobrenome);
    std::cout<<zeze.age<<std::endl;
    std::cout<<zeze.last_name<<", "<<zeze.first_name<<std::endl;
    std::cout<<zeze.standard<<std::endl;
    std::cout<<std::endl;
    zeze.student_string();
    return 0;
}