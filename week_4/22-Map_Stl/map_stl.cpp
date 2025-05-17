#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q_num;cin>>q_num;
    map<string,int>students;
    for(int i=0;i<q_num;i++){
        int type;cin>>type;
        switch (type) {
            case 1:{
                int grade;
                string name;
                cin>>name>>grade;
                map<string,int>::iterator itr = students.find(name);
                if(itr!=students.end()){
                    students[name]+=grade;
                }else{
                    students.insert(make_pair(name,grade));
                }
                break;
            } 
            case 2:{
                string name;
                cin>>name;
                students.erase(name);
                break;
            }
                
            case 3:{
                string name;
                cin>>name;
                map<string,int>::iterator itr = students.find(name);
                if(itr!=students.end()){
                    cout<<students[name]<<endl;
                }else{
                    cout<<"0"<<endl;
                }
                break;
            }
                
        }
    }
    return 0;
}
