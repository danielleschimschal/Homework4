#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0; 
	this->courseName = courseName; 
	this->capacity = capacity; 
	students = new string[capacity]; 
}

Course::~Course()					/// deconstructor
{
	delete[] students; 
}

Course::Course(const Course& course)	//// copy constuctor
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}

string Course::GetCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name; 
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents--; 
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

int Course::clear(){
	numberOfStudents = 0;
	return numberOfStudents; 
}

int* alloc_array(int size)
{
	int* pintarray = new int[size];
	for (int i = 0; i < size; i++)
		pintarray[i] = 42;
	return pintarray;
}

int* doubleCapacity(const int* list, int size){
	int* pintarray = new int[size * 2];
	for (int i = 0; i < size * 2; i++)
		pintarray[i] = 42;
	return pintarray;
}

int main(){
	Course c1("Graph Theory", 10);

	c1.addStudent("John Smith"); 
	c1.addStudent("John Johnson");
	c1.addStudent("John Scott"); 
	c1.dropStudent("John Scott"); 

	cout << "Number of students in " << c1.GetCourseName() << ": " << c1.getNumberOfStudents() << endl;
	string* students = c1.getStudents();
	for (int i = 0; i < c1.getNumberOfStudents(); i++){
		cout << students[i] << ", ";
	}



		int* array = alloc_array(10);	/// I copied this from my other program to try to include it but I'm not totally sure how to make it work in this program
		for (int i = 0; i < 10; ++i)
			cout << array[i] << endl;
		delete[] array;

		int* largerarray = doubleCapacity(alloc_array(10), 20);
		for (int i = 0; i < 20; i++)
			cout << largerarray[i] << endl;
		delete[] largerarray;
	
}