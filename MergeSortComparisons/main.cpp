//
//  main.cpp
//  MergeSortComparisons
//
//  Created by Luis Alberto Lamadrid on 10/5/14.
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
using namespace std;


/* GLOBAL VARIABLES */
int exchanges = 0;

/*
 * (void) Join
 *
 * Method to join the values of two divisions of an array
 * into an auxiliar one, but in order.
 *
 */
void Join(int *a, int start, int mid, int end){
    
    // declaring variables
    int i = start, j = mid+1, k = start, swaps = 0;
    int aux[end+1];
    
    // make the swaps between both arrays
	 while ((i <= mid) && (j <= end)) {
        if (a[i] < a[j]) {
            aux[k] = a[i];
            i++;
        } else {
            aux[k] = a[j];
            j++;
            swaps += mid - i + 1;
        }
        k++;
    }
    
    // checks if one of both arrays
    // is empty so passes the other values directly
    if (i > mid) {
        for (int x = k; x <= end ; x++) {
            aux[x] = a[j];
            j++;
        }
    }
    else {
        for (int x = k; x <= end ; x++) {
            aux[x] = a[i];
            i++;
        }
    }
    
    // copies the auxiliar array into the original array
    for (int m = start; m <= end; m++) {
        a[m] = aux[m];
    }
    
    
    exchanges += swaps;
}


/*
 * (void) MergeSort
 *
 * Method to call the Merge Sort recursively. First makes the
 * division of the indexes, and then joins the separate arrays
 * with the Join method.
 *
 */
void MergeSort (int *a, int start, int end){
    if (start < end) {
        int mid = (start + end) / 2;
        MergeSort(a, start, mid);
        MergeSort(a, mid + 1, end);
        Join(a, start, mid, end);
    }
}

/* -----------------------------  MAIN FUNCTION ----------------------------- */
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
        
        // mergesorting the array
        MergeSort(array, 0, size-1);
        
        // printing it afterwards
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        } cout << endl;
        
        cout << "Comparisons: " << exchanges << endl;
        
        // variables get reset
        exchanges = 0;
        count = 0;
        
        // user inputs new array size
        cin >> size;
    }
    return 0;
}

