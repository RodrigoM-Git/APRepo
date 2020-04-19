#include <iostream>

#define ROWS   4
#define COLS   5

//Location of S is (4,1)
//Location of E is (2,4)

//S would be found with maze[1][4]
//E would be found with maze[4][2]

void readMaze(char maze[ROWS][COLS]);

int main (void) {
   char maze[ROWS][COLS] = {};


   std::cout << maze[0][0] << std::endl;
   return EXIT_SUCCESS;
}

void readMaze(char maze[ROWS][COLS]){
    //??
}