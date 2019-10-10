#include <iostream> 
#include <cstdlib>
#include <iomanip>
#include <iterator>
#include <vector> 

using namespace std; 

struct Student
{
  char FirstName[10];
  char LastName[10]; 
  int id; 
  float gpa; 
};

int main()
{
  char input[3]; 
  Student Mo; 
  //gpa.setprecision(1);  
  // Mo.id = 403569; 
  // Mo.gpa = 4.5; 
  
  cout << "Would you like to ADD, PRINT, or DELETE?" << endl;  
  cin >> input;
  if (input[0] == 'A' && input[1] == 'D' && input[2] == 'D')
    {
      cout << "Add function" << endl;

      Student aStudent;
      Student *pstudent;
      pstudent = &aStudent;

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
      
      
   }
  
  if (input[0] == 'P' && input[1] == 'R' && input[2] == 'I')
    {
      cout << "Print Function";
      
      
      
    }

  if (input[0] == 'D' && input[1] == 'E' && input[2] == 'L')
    {
      cout << "Delete Funtion";
    }

  else
    {
      cout << "Please enter a vaild command it is case sensitive"<< endl; 
    }

  return 0; 
}
