#include <iostream>

/*
 * 1. create a 2d array, populate
 * 2. create the loops to tarverse over the graph
 * 3. run through the rules on the array.
 * 4. update array.
 *
 *
 */

void printArray(char a[][30]);
void runGameTurn(char a[][30]);
int countNeighbors(char a[][30], int i, int j );


int main() {

     char field[30][30];

     for(int i = 0; i < 30; i++){
         for(int j = 0; j < 30; j++){
             // non life is _
             // life is     O
             // make an x
             if(j == i || j == 29 - i ){
                 field[i][j] = 'O';
             } else {
                 field[i][j] = '_';
             }

         }
     }

     for(int i = 0; i < 3; i++) {
         printArray(field);
         runGameTurn(field);
         //sleep for .5 seconds.
        std::cout << std::endl;
     }

}

void runGameTurn(char a[][30]){
    //variable holds of life
    char alive[30][30];
    //copy the array
    for(int i = 0; i < 30 ;  i++){
        for(int j = 0; j <30; j++){
            alive[i][j] = a[i][j];
        }
    }
    //Loop again

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            int neighbors = countNeighbors(alive, i, j);
            //decide if cell is alive or dead, and update array that we're updating.
            a[i][j] = 'O';
        }
    }



}


int countNeighbors(char a[][30], int i, int j ){
    return 0;
}

void printArray(char a[][30]){

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
           std::cout <<  a[i][j] << " ";
        }
        std::cout << std::endl;
    }

}