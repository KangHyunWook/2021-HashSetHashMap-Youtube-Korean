/*
This program shows an example of the
division function for hashing.
*/
#include <stdio.h>

const int d=10;
int set[d]; //hashset declaration

void insert(int item);
int main() {
    
    //insert items  
    insert(4);      
    insert(5);      
    insert(6);      
    insert(12);     
    insert(7);      
    //searching if a certain item exists takes O(1) complexity
    int target=2;
    int key=target%d; 
    if(set[key]==target) // one operation to find key 
        printf("%d exists in set\n", target);
    else
        printf("%d does not exist in set\n", target);
    return 0;
}

void insert(int item) {
    int key=item%d; //division function
    set[key]=item;
}