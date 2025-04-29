#include<iostream>
#include<vector>
#include <algorithm>

int main(){
    std::vector<int> array;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int a;std::cin>>a;
        array.push_back(a);
    }
    std:sort(array.begin(),array.end());
    for(int i=0;i<n;i++){
        std::cout<<array[i]<<" ";
    }
    return 0;
}