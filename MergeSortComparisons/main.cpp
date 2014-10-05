//
//  main.cpp
//  MergeSortComparisons
//
//  Created by Luis Alberto Lamadrid on 10/5/14.
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    int size, num, count = 0;
    cin >> size;
    
    // cases array
    while (size) {
        
        // declaring array
        int array[size];
        
        // introducing data to array
        while (count < size) {
            cin >> num;
            array[count] = num;
            count++;
        }
        
        // insert mergesort code
        // here
        
        // variable gets reset
        count = 0;
        
        // user inputs new array size
        cin >> size;
    }
    return 0;
}

