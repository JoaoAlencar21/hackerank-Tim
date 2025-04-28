#include <iostream>

void checagem(int a){
    if(a>9){
        if(a%2==1){
            std::cout<<"odd\n";
            return;
        }if(a%2==0){
            std::cout<<"even\n";
            return;
        }
    }else{
        if(a==1){
            std::cout<<"one\n";
            return;
        }
        if(a==2){
            std::cout<<"two\n";
            return;
        }
        if(a==3){
            std::cout<<"three\n";
            return;
        }
        if(a==4){
            std::cout<<"four\n";
            return;
        }
        if(a==5){
            std::cout<<"five\n";
            return;
        }
        if(a==6){
            std::cout<<"six\n";
            return;
        }
        if(a==7){
            std::cout<<"seven\n";
            return;
        }
        if(a==8){
            std::cout<<"eight\n";
            return;
        }
        if(a==9){
            std::cout<<"nine\n";
            return;
        }

    }
}

int main() {
    int num1,num2;
    std::cin>>num1;
    std::cin>>num2;
    for(int i=num1;i<=num2;i++){
        checagem(i);
    }
    return 0;
}