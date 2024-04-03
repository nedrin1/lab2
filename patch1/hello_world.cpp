#include <iostream>

int main(){
    char* username;//переменная для имени
    std::cout << "Enter your name\n";
    std::cin << username;//записывает имя пользователя
    std::cout << "Hello world " << username << std::endl;
}
