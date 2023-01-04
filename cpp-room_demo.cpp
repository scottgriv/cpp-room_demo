#include <iostream>
#include <stdio.h>

//Get the Square Footage of a Room

int main(void) {
    
    //Room 1
    int room1L = 12;
    int room1W = 10;
    int room1A;
    
    //Room 2
    int room2L = 9;
    int room2W = 7;
    int room2A;
    
    //Room 3
    int room3L = 12;
    int room3W = 12;
    int room3A;
    
    //Final Output
    int finalA;
    char room[] = "The Sum of the Square Footage =";
    
    room1A = room1L + room1W;
    room2A = room2L + room2W;
    room3A = room3L + room3W;
    
    finalA = room1A + room2A + room3A;
    
    //This is the final output
    printf("%s %d\n", room, finalA); //This is also a comment
    
    return 0;
}
