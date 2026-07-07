#What is C++ STL?
STL stands for standard template library which contains a lot of pre-defined templates in terms of containers and classes which makes it very easy for developers or programmers to implement different data structures easily without having to write complete code and worry about space-time complexities.

## 1. Unordered-set in C++ STL
**What is an unordered set?**
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

## Functions in unordered set:
>insert() - to insert an element in the unordered set.
>begin() - return an iterator pointing to the first element in the unordered set.
>end() - returns an iterator to the theoretical element after the last element.
>count() - it returns 1 if the element is present in the container otherwise 0.
>clear() - deletes all the elements in unordered set.
>find() - to search an element in the unordered set.
>size() - returns the size of the unordered set.

## *Example*
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set s;

    // Insert elements from 1 to 10 into the unordered_set
    for (int i = 1; i <= 10; i++) {
        s.insert(i); // insert() adds a new element to the set
    }

    // Display all elements present in the unordered_set
    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " "; // Dereference iterator to access the element
    }
    cout << endl;

    int n = 2;
    // Check if element 2 exists in the set using find()
    if (s.find(2) != s.end()) // find() returns an iterator to element if found, else s.end()
        cout << n << " is present in unordered set" << endl;

    // Erase the first element from the set using iterator
    s.erase(s.begin()); // erase() removes element at given iterator position

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display size of the unordered set
    cout << "The size of the unordered set is: " << s.size() << endl;

    // Check if the unordered set is empty
    if (s.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear all elements from the unordered set
    s.clear(); // clear() removes all elements

    // Display size after clearing
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}

## *Other functions:*
`cbegin()` – it refers to the first element of the unordered set.
`cend()` – it refers to the theoretical element after the last element of the unordered set.
`bucket_size()` - gives the total number of elements present in a specific bucket in an unordered set.
`emplace()` - to insert an element in the unordered set.
`max_size()` - the maximum elements an unordered_set can hold.
`max_bucket_count()` - to check the maximum number of buckets an unordered set can hold.

# 2. Vector in C++ STL

## What is a Vector?
Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.

## Most used functions in Vector:
`begin()` - it returns an iterator pointing to the first element of the vector.
auto iterator = itr;

itr = v1.begin();
`end()`- it returns an iterator pointing to the element theoretically after the last element of the vector.
auto iterator = itr;

itr = v1.end();
`push_back()` - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
vector<int> v1;

>v1.push_back(1);
>v1.push_back(2);

`insert()` - it is used to insert an element at a specified position.
auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning

`erase()` - it is used to delete a specific element
vector<int> v1;
auto it= v1.begin();
v1.erase(it);// erasing the first element

`pop_back()` - it deletes the last element and returns it to the calling function.
v1.pop_back();

`front()` - it returns a reference to the first element of the vector.
v1.front();

`back()` - it returns a reference to the last element of the vector.
v1.back();

`clear()` - deletes all the elements from the vector.
v1.clear();

`empty()` - to check if the vector is empty or not.
v1.empty();

`size()` - returns the size of the vector
v1.size();


## *Example*
#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();  //The front element of the vector
  cout << "\nThe last element of the vector: " << v.back(); //The last element of the vector
  cout << "\nThe size of the vector: " << v.size();  //The size of the vector
  cout << "\nDeleting element from the end: " << v[v.size() - 1];  //Deleting element from the end
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());  //Erasing the elements 
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";  //If empty then print empty else print not empty
  else
    cout << "\nvector is not empty" << endl;  //vector is not empty

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();  //Return the size of the vector

}

## *Other Functions:*

cbegin() - it refers to the first element of the vector.
cend() - it refers to the theoretical element after the last element of the vector.
rbegin() - it points to the last element of the vector.
rend() - it points to the theoretical element before the first element of the vector.
crbegin() - it refers to the last element of the vector.
crend() - it refers to the theoretical element before the first element of the vector.
max_size() - returns the maximum size the vector can hold.
capacity() - it returns the current capacity of the vector.

# 3. Set in C++ STL

## What is a set?
A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.

## Functions in set:
`insert()` – to insert an element in the set.
set<int> s;
s.insert(1);
s.insert(2);

`begin()` – return an iterator pointing to the first element in the set.
s.begin();

`end()` – returns an iterator to the theoretical element after the last element.
s.end();

`count()` – returns true or false based on whether the element is present in the set or not.
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true

`clear()` – deletes all the elements in the set.
s.clear();

`find()` – to search an element in the set.
set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;

`erase()` – to delete a single element or elements between a particular range.
s.erase();

`size()` – returns the size of the set.
s.size();

`empty()` – to check if the set is empty or not.
s.empty();

## *Example*

#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {  //Iterate through 10 and insert the value of i in the set
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";  //If element is found print it
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;  //Print the element

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

  if (s.empty() == false)
    cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
  else
    cout << "The set is empty" << endl;  //If set is empty
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}

## *Other functions:*
cbegin() – it refers to the first element of the set.
cend() – it refers to the theoretical element after the last element of the set.
rbegin() – it points to the last element of the set.
rend() – it points to the theoretical element before the first element of the set.
bucket_size() – gives the total number of elements present in a specific bucket in a set.
emplace() – to insert an element in the set.
max_size() – the maximum elements a set can hold.
max_bucket_count() – to check the maximum number of buckets a set can hold.