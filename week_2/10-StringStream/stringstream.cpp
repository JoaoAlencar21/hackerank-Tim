#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::stringstream ss(str);
	char ch;
    int input;
    std::vector<int> temporario;
    
    while(ss>>input){
        temporario.push_back(input);
        ss>>ch;
    }
    
    return temporario;
}
int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i<integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    return 0;
}