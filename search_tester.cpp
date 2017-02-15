//----- search_tester.cpp -----
#include <iostream>
#include <regex>
#include <sstream>

using namespace std;
/**
 * Title: Lab 6 Submission : Linear/Binary Search
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a driver program to test binary and linear
 * search functions in C++
 *
 * @author Mariya Eggensperger
*/
bool LinearSearch(int A[], int size_of_A, int search_key_A);
bool IterBinarySearch(int B[], int size_of_B, int search_key_B);
bool RecursiveBinarySearch(int C[], int size_of_C, int search_key_C);

int main() {

   int user_input_for_A = 0;
   int user_input_for_B = 0;
   int user_input_for_C = 0;
   string temp_str = "";

   bool is_found = false;
   cout << boolalpha;
   // Express patterns to be matched
   // against sequences of characters
   regex integer("-?[[:digit:]]+");

   cout << endl;
   cout << "-------------------Linear Search-------------------";
   cout << endl;
   int A[] = { 1, 2, 3, 4, 6, 8, 20, 11, -9, -2 };					// Initialize array A.
   int size_arra_A = sizeof(A) / sizeof(A[0]);								// Get size of array A.

   do {
      cout << "Enter an integer for its Linear Search: ";
      getline(cin, temp_str);
      stringstream myStream(temp_str);
      if (regex_match(temp_str, integer))	{
         myStream >> user_input_for_A;
         is_found = true;
      }
      else {
         is_found = false;
      }
      if (!is_found) {
         cerr << "Invalid" << endl;
      }
      else {
         cout << LinearSearch(A, size_arra_A, user_input_for_A) << endl;		// Linear Search function call.
      }
   } while (!is_found);

   return 0;
}
/*
 * Definition for LinearSearch() which searches the function
 * linearly and determines if a particular element is in
 * the array. The function returns true if the element
 * is in the array, otherwise it returns false.
 * Call the LinearSearch() function from the main.
 *
 * @param int [], linear_search_arr
 * @return bool return
 */
bool LinearSearch(int A[], int size, int search_key) {
   for(int i=0; i<size;i++){
      if(search_key==A[i]){
         return true; // Search key is found
      }
   }
   return false; // Search key is not found

}
