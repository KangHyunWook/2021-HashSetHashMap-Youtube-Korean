#include <stdio.h>

int size;
int arr[10];
void insert(int item);

int main() {
    //insert elements
    insert(4);
    insert(5);
    insert(6);
    insert(12);
    insert(7);
    //search if a certain item exists.
    //complexity = amount of work done
    int target=2;
    bool exists=false;
    for(int i=0; i<size; i++) {
        if(arr[i]==target) {
            exists=true;
            break;
        }
    }
    if(exists)
        printf("%d exists in array\n", target);
    else 
        printf("%d does not exist in array\n", target);
  
    return 0;
}

void insert(int item) {
    arr[size++]=item;
}











