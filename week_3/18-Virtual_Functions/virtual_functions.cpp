// referencias utilizadas 
//https://www.geeksforgeeks.org/cpp-static-data-members/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
    private:
    public:
        int age;
        string name;
        virtual void getdata(){};
        virtual void putdata(){};
};


class Professor : public Person{
    public:
        int publications,cur_id;
        static int id_prof;
        Professor(){
            cur_id = id_prof;
            id_prof++;
        }
        void getdata(){
            int input_age,input_publications;
            string input_name;
            cin>>input_name>>input_age>>input_publications;
            this-> age = input_age;
            this-> name = input_name;
            this-> publications = input_publications;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        }
};

class Student : public Person{
    public:
        int grades[6],cur_id,sum=0;
        static int id_stud;
        Student(){
            cur_id = id_stud;
            id_stud++;
        }
        void getdata(){
            int input_age;
            string input_name;
            cin>>input_name>>input_age;
            for(int i=0;i<6;i++){
                cin>>grades[i];
                sum+=grades[i];
            }
            this-> age = input_age;
            this-> name = input_name;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
        }
};

int Professor::id_prof = 1;
int Student::id_stud = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
