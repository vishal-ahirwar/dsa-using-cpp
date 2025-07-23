// Auto Genrated C++ file by Flick CLI
// None
#include <dsa-using-cppconfig.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>

#include "comparison_base_sorting/bubble.hxx"
#include "comparison_base_sorting/heap.hxx"
#include "comparison_base_sorting/insertion.hxx"
#include "comparison_base_sorting/merge.hxx"
#include "comparison_base_sorting/quick.hxx"
#include "comparison_base_sorting/selection.hxx"
#include "comparison_base_sorting/shell.hxx"
#include "comparison_base_sorting/tree.hxx"
#include "index_based_sorting/bucket.hxx"
#include "index_based_sorting/count.hxx"
#include "index_based_sorting/radix.hxx"

int main(int argc, char* argv[])
{
    srand(time(NULL));
    // Bublesort
    std::array<int, 10> array;
    std::generate_n(array.begin(), array.size(), []() { return rand() % 100; });
    std::copy_n(array.begin(), array.size(), std::ostream_iterator<int>(std::cout, " "));

    /*You can use number_of_sort arg to only sorts till particular elements for example
        to get first two highest element from array you can use bubbleSort(array, array.size(),2)
       and get the last 2 elements of array you will see you have first two highest element
    */

    bubbleSort(array, array.size());
    std::cout << std::endl;
    std::copy_n(array.begin(), array.size(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
