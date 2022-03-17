#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char *str) {
  studentId = id;
  strcpy (name, str);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentId << endl;
  cout << "Student Name : " << name << endl;
}
