// Array introduction
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks[5] = {80, 75, 83, 84, 86};

//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << marks[4] << endl;
// }

// Array with loop initialization
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int marks[size];

//     // cout << sizeof(marks) << endl;               // 20
//     // cout << sizeof(marks) / sizeof(int) << endl; // 5

//     for (int i = 0; i < size; i++)
//         cin >> marks[i];

//     for (int i = 0; i < size; i++)
//         cout << marks[i] << endl;
// }

// smallest and largeest number
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int nums[] = {18, 22, 1, 4, 12, 62, 71, 80};
//     int size = sizeof(nums) / sizeof(int);

//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         // if (nums[i] < smallest)
//         //     smallest = nums[i];
//         // if (nums[i] > largest)
//         //     largest = nums[i];

//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
//     cout << smallest << endl;
//     cout << largest << endl;
// }

// smallIndex and largeIndex
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int nums[] = {18, 22, 1, 4, 12, 62, 71, 80};
//     int size = sizeof(nums) / sizeof(int);

//     int smallIdx = 0, largeIdx = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] < nums[smallIdx])
//             smallIdx = i;
//         if (nums[i] > nums[largeIdx])
//             largeIdx = i;
//     }

//     cout << smallIdx << endl;
//     cout << largeIdx << endl;
// }

// // Linear search algorithm : tc=> O(n)
// #include <bits/stdc++.h>
// using namespace std;

// int linearSearch(int arr[], int sz, int tg)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] == tg)
//             return i;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {80, 82, 84, 81, 83, 85};
//     int sz = sizeof(arr) / sizeof(int);
//     int tg = 82;

//     cout << linearSearch(arr, sz, tg) << endl;

// }

// // Reverse an array: tc=> O(n)
// #include <bits/stdc++.h>
// using namespace std;

// void reverseArr(int arr[], int sz)
// {
//     int start = 0, end = sz - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int nums[] = {80, 82, 84, 81, 83, 85};
//     int sz = sizeof(nums) / sizeof(int);

//     reverseArr(nums, sz);
//     for (int i = 0; i < sz; i++)
//         cout << nums[i] << " " << endl;

//     // cout << endl;
// }

// pass by reference
/*
 When an array is passed as a parameter, it is actually passed by pointer. This means the function receives a reference to the original array, not a copy of it. As a result, any changes made to the array inside the function directly modify the original array.
 This is referred to as "pass by reference" because no new copy of the array is created. Instead,
 original array is directly accessed and modified within the function.
*/
/*
অ্যারে প্যারামিটার হিসেবে পাস করলে এটি আসলে পয়েন্টারের মাধ্যমে পাস হয়। ফলে মূল অ্যারের সাথে সরাসরি সংযোগ থাকে এবং এর মান পরিবর্তন করা যায়।
এটি "pass by reference" হিসেবে পরিচিত কারণ অ্যারের কপি তৈরি হয় না, বরং মূল অ্যারেকেই ফাংশনে ব্যবহার করা হয়।
*/

#include <bits/stdc++.h>
using namespace std;

void changeArr(int arr[], int sz)
{
    cout << "In Function" << endl;
    for (int i = 0; i < sz; i++)
        arr[i] = 2 * arr[i];
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    changeArr(arr, 4);

    cout << "In Main" << endl;
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";

    return 0;
}