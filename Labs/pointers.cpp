#include <iostream>
using namespace std;
int main(){
	// #############---1---###########
	int num = 42;
    int* ptr = &num;
    cout << "Address of num: " << ptr <<endl;
    
	// #############---2---###########
	int num = 42;
    int* ptr = &num;
    cout << "Value of num: " << *ptr <<endl;
    
	// #############---3---###########
	int num = 42;
    int* ptr = &num;
    *ptr = 30;
    cout << "Value of num: " << num <<endl;
    
    // #############---4---###########
    int num1 = 5, num2 = 10;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    cout << "num1: " << num1 << ", num2: " << num2 <<endl;
    
    // #############---5---###########
    int num = 5;
    int* ptr = &num;
    (*ptr)++; // Increment
    cout << "Incremented value: " << *ptr <<endl;
    
    // #############---6---###########
    int num = 5;
    int* ptr = &num;
    (*ptr)--; // Decrement
    std::cout << "Decremented value: " << *ptr <<endl;
    
    // #############---7---###########
    int numbers[] = {3, 7, 1, 9, 4};
    int* ptr = numbers;
    int sum = 0;
    
    // Calculate the sum of array elements using pointers
    for (int i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }
    
    cout << "Sum of array elements: " << sum <<endl;
    
    // #############---8---###########
    int numbers[] = {1, 2, 3, 4, 5};
    int* ptr = numbers;
    
    // Display array elements using pointers
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *ptr <<endl;
        ptr++;
    }
    
    // #############---9---###########
    float value = 3.14;
    float* ptr = &value;
    cout << "Value: " << *ptr <<endl;
    
	// #############---10---###########
	int num = 42;
    int* ptr = &num;
    int** doublePtr = &ptr;
    
    cout << "Value of num: " << **doublePtr <<endl;
    
    // #############---11---###########
    int numbers[] = {3, 7, 1, 9, 4};
    int* ptr = numbers;
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }
    
    cout << "Sum of array elements: " << sum <<endl;
    
    // #############---12---###########
    int num = 5;
    int* ptr = &num;

    *ptr = (*ptr) * 2;

    cout << "Doubled value: " << *ptr <<endl;
    
	// #############---13---###########
	int num1, num2, *ptr1, *ptr2, sum=0;
    cout<<"Enter the two number :";
    cin>>num1>>num2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    cout<<"Sum of the two number is "<<sum;
    
    // #############---14---###########
    char text[] = "Hello";
    char* ptr = text;

    std::cout << "Characters in the text: ";
    while (*ptr != '\0') {
        std::cout << *ptr << " ";
        ptr++;
    }
    cout <<endl;
    
	// #############---15---###########
	int numbers[] = {3, 7, 1, 9, 4};
    int* ptr = numbers;
    int max = *ptr;
    
    // Find the maximum number using pointers
    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
    cout << "Maximum number: " << max <<endl;
    return 0;

}
