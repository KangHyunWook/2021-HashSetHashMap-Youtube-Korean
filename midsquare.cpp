/*
mid-square
key=key*key
take certain number of bits in the middle

i.g.
  middle bits=4
  key=13
  key squared = 10101001
  hash value =    1010
*/
#include <iostream>

#define D 10

using namespace std;
int hashing(int data) {
    int pos=4;
    int key = data*data;
    key=key/4;
    key=key%D;
    
    return key;
}

int main() {
    //below shows mid-square example  
    int data=32;
    int pos=4;
    
    int key=data*data;
    key=key>>pos; //right shift i.g. 10011101 >>4 = 1001
    key=key%D;
    
    cout<<"key: "<<key<<endl;
    
    //using function
    cout<<"key: "<<hashing(32)<<endl;
}















