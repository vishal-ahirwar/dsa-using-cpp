#ifndef BUBBLE_HXX
#define BUBBLE_HXX
#include <cassert>
#include <cstddef>
#include <iostream>
#include <utility>
template <typename T>
void bubbleSort(T& data, size_t size,size_t number_of_sorts=0)
{
    if(!number_of_sorts)number_of_sorts=size;
    for (size_t i = 0; i < size - 1 && number_of_sorts>0; ++i,--number_of_sorts)
    {
        bool is_sorted{true};
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (data[j] > data[j+1])
            {
                std::swap(data[j], data[j+1]);
                is_sorted=false;
            }
        }
        if(is_sorted)
        {
            break;
        }
    }
}
#endif