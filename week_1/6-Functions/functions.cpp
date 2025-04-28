#include <iostream>
#include <limits.h>

int max_number= INT_MIN;

void compare(int a){
    if(a>=max_number){
        max_number = a;
    }
}

int main() {
    int n = 4;
    for(int i = 0;i<n;i++){
        int j; std::cin>>j;
        compare(j);
    }
    std::cout<<max_number;
}