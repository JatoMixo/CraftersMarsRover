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
        switch (chr){
            case 'R':
            if (coord.direction < 3) coord.direction++;
            else coord.direction = 0;
            break;

            case 'L':
            if (coord.direction > 0) coord.direction--;
            else coord.direction = 3;
            break;

            case 'M':
            if (coord.direction % 2 == 0){
                if (coord.direction == 0) coord.y++;
                else coord.y--;
            } else if (coord.direction % 2 == 1){
                if (coord.direction == 1) coord.x++;
                else coord.x--;
            }            
            break;
        }
    }
    //coord.x = floor(coord.x / 10);    
    //coord.y = floor(coord.y / 10);

    coord.direction = coord.direction % 4;
    switch (coord.direction){
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
    }    
    return coord;
}

/*int main(){
    return 0;
}*/