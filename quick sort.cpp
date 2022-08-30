
#include <iostream>
using namespace std; // this means that you do not need to start the line with std

void quick_sort(int quick_array[], int index_low, int index_high){
    if (index_low >= index_high){
        return;
    }
    int temp_swap;
    int temp_low;
    int temp_high;
    temp_low = index_low + 1;
    temp_high = index_high;
    int pivot = quick_array[index_low];
    bool finished = 0;
    while(finished == 0){
        while (temp_low <= temp_high and quick_array[temp_low] <= pivot){
            temp_low = temp_low + 1;
        }
        while (temp_low <= temp_high and quick_array[temp_high] >= pivot){
            temp_high = temp_high - 1;
        }
    
        if (temp_low < temp_high){
            temp_swap = quick_array[temp_low];
            quick_array[temp_low] = quick_array[temp_high];
            quick_array[temp_high] = temp_swap;
        }
        else{
            finished = 1;
            
        }
        
        


    }
    temp_swap = quick_array[index_low];
    quick_array[index_low] = quick_array[temp_high];
    quick_array[temp_high] = temp_swap;
    quick_sort(quick_array,index_low, temp_high - 1);
    quick_sort(quick_array, temp_high + 1, index_high);
            
            
            
}



int main(int argc, char** argv)
{
    unsigned int n = 0;
    cout << "Hello this is a test of the quick sort in c++! please enter the size of the unordered array: ";
    cin >> n;
    cout << "You have chosen for the array to be: " << n << "\n";
    int* quick_array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Please enter the: " << i + 1 << " item in the list ";
        int x = 0;
        cin >> x;
        quick_array[i] = x;
    }
    quick_sort(quick_array, 0, n-1);//getting all user inputs! quick sort starts here!




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






