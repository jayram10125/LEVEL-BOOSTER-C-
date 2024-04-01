//check given array is palindrome or not
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
