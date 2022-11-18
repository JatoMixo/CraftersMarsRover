#include <iostream>
#include <math.h>

using std::string;

struct Coordinate{
    int x = 0;
    int y = 0;
    int direction = 0;
    string dirValue = "N";
};

Coordinate Execute (string move){
    Coordinate coord;
    for (int i = 0; i < move.length(); i++){
        char chr = move[i];
        if (chr == 'R'){
            coord.direction++;
        } else if (chr == 'L'){
            coord.direction--;
        } else if (chr == 'M'){
            if (coord.direction % 2 == 0){
                if (coord.direction % 4 == 0){
                    coord.y++;
                } else {
                    coord.y--;
                }
            } else {
                if ((coord.direction - 1) % 4 == 0){
                    coord.x++;
                } else {
                    coord.x--;
                }
            }
        } else {
            throw std::invalid_argument("Invalid input character");
        }
    }

    coord.x = coord.x % 10;
    coord.y = coord.y % 10;

    if (coord.direction == 0) {
        coord.dirValue = "N";
    } else if (coord.direction == 1){
        coord.dirValue = "E";
    } else if (coord.direction == 2){
        coord.dirValue = "S";
    } else if (coord.direction == 3){
        coord.dirValue = "W";
    }
        
    return coord;
}