#include <iostream>

int main() {
    int a;
    int b;
    std::cout<<"a and b";
    std::cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%3==0)
        std::cout<<"foo";
        else if(i%2==0)
        std::cout<<"Bar";
        else
        std::cout<<"Baz";
        
    }

   

    return 0;
}