#include <iostream>

// Function prototypes

// pass array pointer and array size.  const makes it read only
void print(const int *arr, int size);

int *apply_all(int *arr1, int size1, int *arr2, int size2);


int main() {

    int arr1[5] {1,2,3,4,5};
    int arr2[3] {10,20,30};

    int *arr_ptr {arr1};
    int *arr_ptr2 {arr2};

    // //print pointer address
    // std::cout << arr_ptr << std::endl;
    // //print dereferenced pointer value at address
    // std::cout << *arr_ptr << std::endl;
    // //print address on intial block of memory of array
    // std::cout << &arr1 << std::endl;

    std::cout << "Array 1" << std::endl;
    print(arr_ptr, 3);
    std::cout << "-----------------" << std::endl;

    std::cout << "Array 2" << std::endl;
     print(arr_ptr2, 5);
     std::cout << "-----------------" << std::endl;

    std::cout << "Array All" << std::endl;

    // assigning new array which is multiplication of both arrays above 
    // to results pointer
    int *results = apply_all(arr1, 5, arr2, 3);
    
    print(results, 15);
    //deleting pointer to release from memory
    delete[] results;
    std::cout << "-----------------" << std::endl;

    return 0;
}

// pass array bt pointer, iterate through and print value starting from intial
// pointer to first position in memroy of array
void print(const int *arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// pass both arrays by pointer
int *apply_all(int *arr, int size, int *arr2, int size2) {

    //creater counter for created array to increment correctly
    int count = 0;
    //create pointer to new array in heap storage and initialise
    int *arr_all {nullptr};
    //create new array in heao storage and assign to pointer
    arr_all = new int[size*size2];

    //iterate through 1st array
    for(int i = 0; i < size; i++) {
        //iterate through 2nd array
        for(int j = 0; j < size2; j++) {
            // multiply each value at each index of both arrays and assign them to new 
            // array created in heap storage which has been assigned the correct amount of space
            // [size*size2]
            arr_all[count] = arr[i] * arr2[j];
            
            //iterate count to add each value to corresponding space in memory of new array
            count++;
        }
    }

    //return address of 1st item in array on heap storage
    return arr_all;
}