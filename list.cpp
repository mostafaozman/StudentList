#include <iostream> 
#include <cstdlib>

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
  Mo.id = 403569; 
  Mo.gpa = 4.5; 
  
  cout << "Would you like to ADD, PRINT, or DELETE?" << endl;  
  cin >> input;
  if (input[0] == 'A' && input[1] == 'D' && input[2] == 'D')
    {
      cout << "Add function" << endl;

      Student aStudent;
      Student *pstudent;
      pstudent = &aStudent;

      cout << "Please enter the sudents first name: "  << endl;
      cin.get (pstudent->FirstName);
      cout << "Please enter the students last name: " << endl; 
      cin.get (pstudent->LastName); 

      cout << "\nYou entered:\n" << endl; 
      cout << pstudent->FirstName; 
      cout << pstudent->LastName; 
      
      
   }
  
  if (input[0] == 'P' && input[1] == 'R' && input[2] == 'I')
    {
      /* cout << "Print Function";
      cout << "Please enter the first name." << endl;
      cin >> Mo.FirstName;
      cout << "Enter the last name." << endl;
      cin >> Mo.LastName;
      cout << Mo.FirstName << Mo.LastName <<  ", " << Mo.id << ", ";
      cout << Mo.gpa << endl;
      */ 
      
      
      
    }

  if (input[0] == 'D' && input[1] == 'E' && input[2] == 'L')
    {
      cout << "Print Funtion";
    }

  else
    {
      cout << "Please enter a vaild command it is case sensitive"<< endl; 
    }

  return 0; 
}
