#include <stdexcept>
#include </home/jatomixo/Code/Crafters/KataSimpleMarsRover/main.cpp>

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);

int main(){
    
    return 0;
}

void IS_TRUE(bool condition, std::string exception){
    if (condition) return;
    throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
    IS_TRUE(!condition, exception);
}