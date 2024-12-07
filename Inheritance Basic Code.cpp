#include <iostream>
#include <string>
using namespace std;

class Education {
  public: 
    string degree = "BSc";
    void course() {
      cout << "Data Structure \n" ;
    }
};

class University : public Education {
  public: 
    string faculty = "CSE";
};

int main() {
  University myUniversity;
  myUniversity.course();
  cout << myUniversity.degree + " " + myUniversity.faculty;
  return 0;
}

