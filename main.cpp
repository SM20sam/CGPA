#include "studentClass.hpp"
#include <string>
#include <iostream>
#include <vector>
int main()
{

    Student a;

    std::cout << "Hey what is your name?: "; //prompts user to enter their name
    std::getline (std::cin, a.name); //stores user's name as the object a's name attribute 

    //std::cout << a.name <<"\n";

    
    Semester b;

   std::cout << "Current semester: " ;//prompts user to ask for the current semester
    std::getline (std::cin, b.currentSemester);

    std::cout << "How many courses do you want to enter: " ;
    std::cin >> b.numCourseTaken;

     
    
   std::vector <std::string> allCourses(b.numCourseTaken);

    std::cout << "Enter name of courses: " << "\n";

    

   for (int i =0;i<b.numCourseTaken;i++)
   {
    std::getline(std::cin>>std::ws,allCourses[i]);
    }
    
    b.allCourses = allCourses;



    std::vector<double> allGrades(b.numCourseTaken);



    std::cout << "Enter grade for each course: " << "\n";

    
    
    for (int i = 0; i<allCourses.size();i++)
    {
       std::cout << allCourses[i] << " : " ;
       std::cin >> allGrades[i];
       
    }

  
    


std::vector <double> courseHours(allCourses.size());

std::cout << "Enter number of semester hours for each course: " << "\n";

for (int i = 0; i<allCourses.size();i++)
{

    std::cout << allCourses [i] << " : " ;
    std::cin >> courseHours[i];
    b.totalHours += courseHours[i];
}

   double totalQualityQP {b.totalQualityPoints(allGrades,courseHours)};

    //std::cout << totalQualityQP;

    std::cout << "                 " << "\n";
    b.print(a.name);
    std::cout << "Grades for Each Course : " << "\n";
   for (int i = 0; i<allCourses.size();i++)
        {
          std::cout << allCourses[i] << " : " << allGrades[i] << "\n";
            
            
        }
    
    std::cout << "Cumulative GPA : " << b.CGPA(totalQualityQP, b.totalHours);
    





    



}