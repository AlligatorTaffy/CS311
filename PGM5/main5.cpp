/*
 Program #5 - Converting arrayDb to a template class
 
*/

#include <iostream>
#include <string>
#include "arraydb.cpp"
using namespace std;


 int main()
 {
     unsigned int size;
     cout << "Enter how large you want ALL the arrays?";
     cin >> size;
 
     // Create a double type array of that size
     ArrayDb<double> arrayDBL(size);
     cout << "This first array is a 'double'!" << endl;
     cout << "Enter a double number::" << endl;
     for(int i = 0; i < size; i++)
     {
         cout << "Slot " << (i+1) << ":  ";
         cin >> arrayDBL[i];
     }
     cout << "Here are the contents of the array" << endl;
     cout << arrayDBL;
     
     // Create a int type array of that size
     ArrayDb<int> arrayINT(size);
     cout << "/nThis second array is a 'int'!" << endl;
     cout << "Enter a int number::" << endl;
     for(int i = 0; i < size; i++)
     {
         cout << "Slot " << (i+1) << ":  ";
         cin >> arrayINT[i];
     }
     cout << "Here are the contents of the array" << endl;
     cout << arrayINT;
     
     // Create a float type array of that size
     ArrayDb<float> arrayFLT(size);
     cout << "/nThis third array is a 'float'!" << endl;
     cout << "Enter a float number::" << endl;
     for(int i = 0; i < size; i++)
     {
         cout << "Slot " << (i+1) << ":  ";
         cin >> arrayFLT[i];
     }
     cout << "Here are the contents of the array" << endl;
     cout << arrayFLT;
     
     // Create a string type array of that size
     ArrayDb<double> arraySTR(size);
     cout << "/nThis fourth array is a 'string'!" << endl;
     cout << "Enter a string::" << endl;
     for(int i = 0; i < size; i++)
     {
         cout << "Slot " << (i+1) << ":  ";
         cin >> arraySTR[i];
         //getline(cin,arraySTR[i]);
     }
     cout << "Here are the contents of the array" << endl;
     cout << arraySTR;
 
 return 0;
 }
 

