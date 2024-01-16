#include <string>

#ifndef Student_H
#define Student_H

#include <string>
#include <vector>
#include <iostream>


class Student{

    public:

    std::string name{};
    
    //float runningCGPA{};
   



};

class Semester : public Student
{

    public:

     int numCourseTaken {};
    
    std::vector <std::string> allCourses {};
    std::vector <double> allGrades{};
    
    std::vector <double> courseHours{};

    std::string currentSemester; 

    double totalHours{};
     //total semester hours of all courses

    double totalQualityPoints (std::vector<double> allGrades, std::vector<double> courseHours)
    {
        double total {};
        for (int i = 0;i<allGrades.size();i++)
        {
            total += allGrades[i] * courseHours[i];
        }
        return total ;
    }

    double CGPA (double totalQualityPoints, double totalHours)
    {
        return totalQualityPoints/totalHours;
    }
     void print(std::string name)
    {
        std::cout << "Student Name: " << name <<"\n";
        std::cout << "Current Semester: " << currentSemester << "\n";

        std::cout << "Number of Courses Taken: " << numCourseTaken << "\n";
        
        
     }

};
#endif
