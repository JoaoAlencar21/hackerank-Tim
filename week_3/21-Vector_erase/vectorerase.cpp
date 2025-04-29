#include<iostream>
#include<vector>



int main(){
    std::vector<int> array;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int a;std::cin>>a;
        array.push_back(a);
    }
    int x;std::cin>>x;
    array.erase(array.begin()+x-1);
    int y,z;std::cin>>y>>z;
    array.erase(array.begin()+y-1,array.begin()+z-1);
    std::cout<<array.size()<<std::endl;
    for(int i=0;i<array.size();i++){
        std::cout<<array[i]<<" ";
    }
    return 0;
}