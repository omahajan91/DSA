// #include <iostream>

// using namespace std;

// int main() {
//     char arr[] = "HeLLo WoRLd!"; // Example array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Convert each character to lowercase manually
//     for (int i = 0; i < n; i++) {
//         // Check if the character is an uppercase letter
//         if (arr[i] >= 'A' && arr[i] <= 'Z') {
//             arr[i] = arr[i] + 32; // Convert to lowercase
//         }
//     }

//     cout << "Lowercase array: " << arr << endl;

//     return 0;
// }

// this is different code 

// #include <iostream>
// using namespace std;

// int main() {
//     char arr[100]; 

   
//     cout << "Enter a string: ";
//     cin.getline(arr, 100); // Use getline to allow spaces in the input

//     // Convert each character to lowercase manually
//     for (int i = 0; arr[i] != '\0'; i++) { // Loop until the null terminator
//         if (arr[i] >= 'A' && arr[i] <= 'Z') {
//             arr[i] = arr[i] + 32; // Convert to lowercase
//         }
//     }

//     // Output the result
//     cout << "Lowercase string: " << arr << endl;

//     return 0;
// }

// new 

#include <iostream>
using namespace std;

int main() {
    char arr[100]; 
    cout << "Enter a string: ";

    cin.getline(arr, 100); 
    cout << "Filtered and lowercase string: ";
    
    for (int i = 0; arr[i] != '\0'; i++) {
       
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] + 32;
        }

        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= '0' && arr[i] <= '9')) {
            cout << arr[i];
        }
    }

    cout << endl;
    return 0;
}

// new

int start = 0; 
    int end = 0;

    // Find the length of the character array (excluding null terminator)
    while (arr[end] != '\0') {
        end++;
    }
    end--; // Set `end` to the last valid character index

    // Check for palindrome
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }

    return true; // If all characters match
}