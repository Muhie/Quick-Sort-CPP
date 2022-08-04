#include <iostream>
using namespace std; // this means that you do not need to start the line with std

void quick_sort(int quick_array[], int index_low, int index_high){
    int temp_swap = 0;
    int temp_low = 0;
    int temp_high = 0;
    temp_low = index_low;
    temp_high = index_high;
    int pivot = quick_array[(index_low+index_high)/2];
    while(temp_low <= temp_high){
        while (quick_array[temp_low] < pivot and temp_low < index_high){
        temp_low = temp_low + 1;
        }
        while (pivot < quick_array[temp_high] and temp_high > index_high){
            temp_high = temp_high - 1;
        }
            if (temp_low <= temp_high){
                temp_swap = quick_array[temp_low];
                quick_array[temp_low] = quick_array[temp_high];
                quick_array[temp_high] = temp_swap;
                
            }
        temp_low = temp_low + 1;
        temp_high = temp_high - 1;
    }
    if (index_low < temp_high){
        quick_sort(quick_array,index_low, temp_high);
    }
    else if (temp_low < index_high){
        quick_sort(quick_array, temp_low, index_high);
    }
            
            
            
}



int main(int argc, char** argv)
{
    unsigned int n = 0;
    cout << "Hello this is a test of the bubble sort in c++! please enter the size of the unordered array: ";
    cin >> n;
    cout << "You have chosen for the array to be: " << n << "\n";
    int* quick_array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Please enter the: " << i + 1 << " item in the list ";
        int x = 0;
        cin >> x;
        quick_array[i] = x;
    }
    quick_sort(quick_array, n/2, (n/2)+n);//getting all user inputs! quick sort starts here!




    cout << "The sorted array is: "; //outputting the sorted array
    for (int i = 0; i < n; i++) {
        if (i + 1 == n) {
            cout << quick_array[i];
        }
        else {
            cout << quick_array[i] << ",";
        }
    }

}

