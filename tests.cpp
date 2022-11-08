#include <stdexcept>
#include </home/jatomixo/Code/Crafters/KataSimpleMarsRover/main.cpp>

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);

int main(){
    Coordinate test;
    test.x = 2;
    test.y = 3;
    test.dirValue = "N";
    
    std::cout << Execute("MMRMMLM").x;
    std::cout << Execute("MMRMMLM").y;
    //IS_TRUE(Execute("MMRMMLM").x == test.x, "Wrong returned x value.");
    //IS_TRUE(Execute("MMRMMLM").y == test.y, "Wrong returned y value.");
    //IS_TRUE(Execute("MMRMMLM").dirValue == test.dirValue, "Wrong returned direction value.");
    return 0;
}

void IS_TRUE(bool condition, std::string exception){
    if (condition) return;
    throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
    IS_TRUE(!condition, exception);
}