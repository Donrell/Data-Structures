#include <iostream>
#include <iomanip>
using namespace std;

// Prototype or declaration for the function that displays the program's heading
void displayHeading();

// Prototype or declaration for the function that displays the menu
void displayMenu();

// Prototype or declaration for the function that gets and returns the menu choice
int getMenuChoice();

// Prototype or declaration for the function that displays the grades and average
void diplayGradeAndAverage(double testScore);

// Prototype or declaration for the function that converts a range of Celsius temperatures
// to their corresponding Fahrenheit temperatures
void convertCelsiusToFahrenheit(double minTemp, double maxTemp);

// Prototype or declaration for the function that creates and reads student records
void createReadRecords(string recordFile);

// Implementation or definition for the function that displays the program's heading.
// Please complete this heading with the required information.
void displayHeading()
{
    cout << "\n\n*******************************************************************************************\n\n";
    cout << "                         CMPS 201B - Data Structures - Spring 2023\n\n"
         << "        Programming Project 1: Problem Solving using Selections, Loops and Functions\n\n"
         << "Description:\n"
         << "  In this project, you write a C++ program that accomplishes the following tasks:\n"
         << "     1. Convert a series of Celsius temperatures (min to max) in the increment of 10 to\n"
         << "        Fahrenheit tmeperatures.\n\n"
         << "     2. Display the letter grades (A, B, C, D, or F) for each score entered and average of a\n"
         << "        number of students' scores provided by the user of the program. Valid scores range from\n"
         << "        0 to 100. The program prompts the user to enter the number of scores then to enter\n"
         << "        each score. If the user enters any negative score or any score greater than 100, that\n"
         << "        number should be ignored and the user should re-enter a valid score for every invalid score,\n"
         << "        but the total number of valid scores should be the same as the number of scores.\n\n"
         << "     3. Create and read a database of student records containing: ID, first name, last name, age,\n"
         << "        classification (Freshman, Sophomore, Junior, Senior, Master, or Doctorate), GPA, and Major,\n"
         << "        in this order, for a certain number of students. The input stops when any negative number\n"
         << "        or zero ID is entered.\n\n";

    cout << "Due:        Thursday, March 2, 2023\n"
         << "Author:     Donrell Mckenzie\n"
         << "Instructor: Dr. Mathieu K. Kourouma\n\n";

    cout << "Attestation or Claim:\n"
         << "  I, Donrell Mckenzie, attest or clam that I am the full author of this\n"
         << "  Programming Project 1 that is I did not cheat or plagiarize this project.\n\n";
      
    cout << "External Help Received: NONE \n"
         << "  Provide the names of the individuals NONE, including the instructor for this course, you received\n"
         << "  help from and describe the types of help you received. If you did not receive any help,\n"
         << "  please type NONE.\n\n";

    cout << "Resources Used: NONE\n"
         << "  List all the resources (books, websites, videos, etc.) you used to do the project,\n"
         << "  including the topics or programs covered in class. Otherwise, type NONE.\n\n";

    cout << "Acknowledgement:\n"
         << "  I, Donrell Mckenzie, acknowledge that this Programming Project 1 is not a\n"
         << "  a group or a collaborative project. Also, I confirm that this is my own work and\n"
         << "  that, in the event of a sign of cheating or plagiarism, the instructor, Dr. Mathieu\n"
         << "  K. Kourouma, has the rights to schedule with me an oral or written test to determine\n"
         << "  the truthness of the claim I made in the above Attestation. In addition, if necessary,\n"
         << "  Dr. Kourouma can invite a third party Computer Science Professor to witness the testing.\n\n";
         
    cout << "Approved and Dated by: Donrell Mckenzie 3/9/23.\n\n";
    cout << "*******************************************************************************************\n\n";
}

// Implementation or definition for the function that displaya the menu
void displayMenu()
{
     cout << "+++++++++++++++++++++++++MENU+++++++++++++++++++++++++++++++\n\n";
     cout << "Select from the following menu:\n\n"
         << "  1. Celsius Temperatures to Fahrenheit\n"
         << "  2. Display Letter Grades and Average\n"
         << "  3. Create and Read Student Database\n"
         << "  4. End the Program\n\n";
     cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
     cout << "Enter your selection: ";     
}
