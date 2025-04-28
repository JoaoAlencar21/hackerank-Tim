#include <iostream>
#include <cstdio>
#include <algorithm>

int main() {
    std::string a,b;
    std::cin>>a>>b;

    int size_a = a.size();
    int size_b = b.size();
    printf("%d %d\n",size_a,size_b);

    std::cout<<a+b<<std::endl;

    std::swap(a[0],b[0]);
    
    std::cout<<a<<" "<<b;
    return 0;
}