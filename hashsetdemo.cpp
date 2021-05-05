/*
    Programmer: HYUN WOOK KANG
    Description: This program shows an example of Division
                function for hashing.
*/
#include <iostream>
using namespace std;

class HashSet {
    private:
        int d;
        int *set;
    public:
        HashSet(int capacity);
        void insert(int item);
        int hashing(int item);
        int find(int item);
};

HashSet::HashSet(int capacity) {
    d=capacity;
    set=new int[d];
    for(int i=0; i<d; i++) 
        set[i]=0;
}

void HashSet::insert(int item) {
    int key=hashing(item);
    set[key]=item;
}

int HashSet::hashing(int item) {
    return item%d;
}

int HashSet::find(int item) {
    int key= hashing(item);
    if(set[key]==item)
        return true;
    return false;
}

int main() {
    HashSet set(10);
    //insert elements
    set.insert(4);
    set.insert(5);
    set.insert(6);
    set.insert(12);
    set.insert(7);
    
    //find if target exists in set
    int target=12;
    if(set.find(target))
        cout<<target<<" exists"<<endl;
    else
        cout<<target<<" does not exist"<<endl;
    return 0;
}













