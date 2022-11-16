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
        /*switch (chr){
            case 'R':
            if (coord.direction < 3) coord.direction++;
            else coord.direction = 0;
            break;

            case 'L':
            if (coord.direction > 0) coord.direction--;
            else coord.direction = 3;
            break;

            case 'M':
            if (coord.direction == 0){
                coord.y++;
                if (coord.y > 9) coord.y = 0;
            } 
            if (coord.direction == 2){
                coord.y--;
                if (coord.y < 0) coord.y = 9;
            }
            if (coord.direction == 1){
                coord.x++;
                if (coord.x > 9) coord.x = 0;    
            } 
            if (coord.direction == 3){
                coord.x--;
                if (coord.x < 0) coord.x = 9;
            } 
            break;
        }*/
    }

    

    coord.direction = coord.direction % 4;

    if (coord.direction == 0) {
        coord.dirValue = "N";
    } else if (coord.direction == 1){
        coord.dirValue = "E";
    } else if (coord.direction == 2){
        coord.dirValue = "S";
    } else if (coord.direction == 3){
        coord.dirValue = "W";
    }
    /*switch (coord.direction){
        case 0:
        coord.dirValue = "N";
        break;
        case 1:
        coord.dirValue = "E";
        break;
        case 2:
        coord.dirValue = "S";
        break;
        case 3:
        coord.dirValue = "W";
        break;
    }*/    
    return coord;
}