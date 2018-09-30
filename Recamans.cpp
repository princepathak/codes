// C++ program to print n-th number in Recaman's  
// sequence 
#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
  
// Prints first n terms of Recaman sequence 
void recaman(int n) 
{ 
    if (n <= 0) 
      return; 
  
    // Print first term and store it in a hash  
    printf("%d, ", 0); 
    unordered_map<int> s; 
    s.insert(0); 
  
    // Print remaining terms using recursive 
    // formula. 
    int prev = 0; 
    for (int i=1; i< n; i++) 
    { 
        int curr = prev - i; 
  
        // If arr[i-1] - i is negative or 
        // already exists. 
        if (curr < 0 || s.find(curr) != s.end()) 
           curr = prev + i; 
  
        s.insert(curr); 
  
        printf("%d, ", curr); 
        prev = curr; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 17; 
    recaman(n); 
    return 0; 
} 