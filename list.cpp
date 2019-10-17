#include <iostream> 
#include <cstdlib>
#include <iomanip>
#include <iterator>
#include <vector> 
#include <string.h>

using namespace std; 

struct Student
{
  char FirstName[10];
  char LastName[10]; 
  int id; 
  float gpa; 
};

int i = 1;

void Print(vector<Student*> pstudent); 
Student* Add();  

int main()
{
  char input[7]; 
  Student Mo; 
  //gpa.setprecision(1);  
  // Mo.id = 403569; 
  // Mo.gpa = 4.5; 
  
  vector<Student*> pstudent; 

  while (int i = 1)
    {
      cout << "Would you like to ADD, PRINT, or DELETE?" << endl;
      cin >> input;
  if (strcmp(input, "ADD") == 0)
    { 
      cout << "Add function" << endl;
      
      // Student aStudent;
      // Student *pstudent;
      // pstudent = &aStudent;
      /*Student* pstudent = new Student(); 

      cout << "Please enter the students first name: "  << endl;
      cin >> pstudent->FirstName;
      cout << "Please enter the students last name: " << endl; 
      cin >> pstudent->LastName;
      cout << "Please enter the students ID: " << endl; 
      cin >> pstudent->id; 
      cout << "Please enter the students GPA:" << endl;
      cin >> pstudent->gpa;  

      cout << "\nYou entered:" << endl; 
      cout << pstudent -> FirstName << "\n"; 
      cout << pstudent -> LastName << "\n";
      cout << "ID: " << pstudent -> id << "\n"; 
      cout << "GPA: " << fixed << setprecision(2) << pstudent -> gpa << "\n"; 
      */

      Add(pstudent); 
      
   }
  
  if (strcmp(input, "PRINT") == 0)
    {
      /*
      cout << "Print Function";
      
      vector<Student*>::iterator ptr;

      for (ptr = pstudent.begin(); ptr < pstudent.end(); ++ptr)
	{
	  cout << (*ptr) -> FirstName << "n " << (*ptr) -> LastName << ", " << (*ptr) <<
	    (*ptr) -> id << " " << (*ptr) -> gpa << endl; 
	    }*/
      pstudent.push_back(Add()); 
    }

  if (strcmp(input, "DELETE") == 0)
    {
      cout << "Delete Funtion";
    }

  else if ((!(strcmp(input, "ADD") == 0)) || (!(strcmp(input, "PRINT") == 0)) || (!(strcmp(input, "DELETE") == 0)))
    {
      cout << "\nPlease enter a vaild command it is case sensitive"<< endl; 
    }
    }

  return 0; 
}


void Print(vector<Student*> pstudent)
{
  cout << "Print Function";

  vector<Student*>::iterator ptr;

  for (ptr = pstudent.begin(); ptr !=  pstudent.end(); ++ptr)
    {
      cout << (*ptr) -> FirstName << " " << (*ptr) -> LastName << ", " << (*ptr) <<
	(*ptr) -> id << " " << (*ptr) -> gpa << endl;
    }
  cin.ignore(1000000, '\n'); 
}

Student* Add()
{
  Student* pstudent = new Student();

  cout << "Please enter the students first name: "  << endl;
  cin >> pstudent->FirstName;
  cout << "Please enter the students last name: " << endl;
  cin >> pstudent->LastName;
  cout << "Please enter the students ID: " << endl;
  cin >> pstudent->id;
  cout << "Please enter the students GPA:" << endl;
  cin >> pstudent->gpa;

  cout << "\nYou entered:" << endl;
  cout << pstudent -> FirstName << "\n";
  cout << pstudent -> LastName << "\n";
  cout << "ID: " << pstudent -> id << "\n";
  cout << "GPA: " << fixed << setprecision(2) << pstudent -> gpa << "\n";
  
  return pstudent; 
}
