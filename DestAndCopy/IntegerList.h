// Specification file for the the IntegerList class.
#pragma once
#include <iostream>
using namespace std;

class IntegerList
{
private:
   int *list;                 // Pointer to the array.
   int numElements;           // Number of elements.
   bool isValid(int) const;   // Validates subscripts.
public:
   IntegerList(int); // Constructor
  ~ IntegerList()
   {
	  delete[] list;
   }
  IntegerList( IntegerList& other)
  {
	  numElements = other.numElements;
	  list = new int[other.numElements];
	  for (int i = 0; i <other.numElements; i++)
	  {
		  list[i] = other.list[i];
	  }

}
  const IntegerList operator =(const IntegerList &other)
  {
	  delete[]list;
	  numElements = other.numElements;
	  
	  list = new int[numElements];
	  for (int i = 0; i < numElements; i++)
	  {
		  list[i] = other.list[i];
	  }
		  return *this;
	  

  }
	void setElement(int, int); // Sets an element to a value
   int getElement(int) const; // Returns an element
   int getNumElements() const;
};
