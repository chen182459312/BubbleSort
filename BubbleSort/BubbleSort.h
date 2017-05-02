//
//  BubbleSort.h
//
//  Created by chentao on 17/2/7.
//  Copyright © 2017年. All rights reserved.
//

#ifndef BubbleSort_h
#define BubbleSort_h

template<class T>
void Swap(T &first, T &second) {
    T tmp(first);
    first = second;
    second = tmp;
}

template<class T>
void BubbleSort(T array[], size_t size) {
    bool flag = true;
    for(size_t index = 0; index < size && flag; index++) {
        flag = false;
        for (size_t course = size-1; course>0; course--) {
            if (array[course-1] > array[course]) {
                flag = true;
                Swap(array[course-1], array[course]);
            }
        }
    }
}

#endif
