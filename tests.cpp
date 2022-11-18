#include <stdexcept>
#include <D:/Miguel/Programas/_CraftersVigo/CraftersMarsRover/main.cpp>

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);
void TestMove(string move, Coordinate correct);

int main(){
    Coordinate test;
    test.x = 0;
    test.y = 0;
    test.dirValue = "N";
    
    // TestMove("MMRMMLM", test);
    TestMove("MMMMMMMMMM", test);
    
    return 0;
}

void TestMove (string move, Coordinate correct){
    IS_TRUE(Execute(move).x == correct.x, "Wrong returned x value.");
    IS_TRUE(Execute(move).y == correct.y, "Wrong returned y value.");
    IS_TRUE(Execute(move).dirValue == correct.dirValue, "Wrong returned direction value.");
}

void IS_TRUE(bool condition, std::string exception){
    if (condition) return;
    throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
    IS_TRUE(!condition, exception);
}