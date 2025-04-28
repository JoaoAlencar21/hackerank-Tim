#include <iostream>

void checagem(int a){
    if(a>9){
        std::cout<<"Greater than 9";
        return;
    }else{
        if(a==1){
            std::cout<<"one";
            return;
        }
        if(a==2){
            std::cout<<"two";
            return;
        }
        if(a==3){
            std::cout<<"three";
            return;
        }
        if(a==4){
            std::cout<<"four";
            return;
        }
        if(a==5){
            std::cout<<"five";
            return;
        }
        if(a==6){
            std::cout<<"six";
            return;
        }
        if(a==7){
            std::cout<<"seven";
            return;
        }
        if(a==8){
            std::cout<<"eight";
            return;
        }
        if(a==9){
            std::cout<<"nine";
            return;
        }

    }
}

int main() {
    int num;
    std::cin>>num;
    checagem(num);
    return 0;
}