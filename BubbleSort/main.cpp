//
//  main.cpp
//  BubbleSort
//
//  Created by chentao on 17/2/7.
//  Copyright © 2017年 . All rights reserved.
//

#include <iostream>
#include"BubbleSort.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[] = {1, 3, 5, 2, 99, 56, 3};
    size_t size = sizeof(array)/sizeof(int);
    
    cout<<"source array:\n";
    for (size_t index = 0; index<size; index++) {
        cout<<array[index]<<"\t";
    }
    
    BubbleSort(array, size);
    cout<<"\nbubbled array:\n";
    for (size_t index = 0; index<size; index++) {
        cout<<array[index]<<"\t";
    }
    cout<<"\n";
    return 0;
}
