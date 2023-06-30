#include <iostream>
#include <fstream>
#include "ProjectOneHeader.h" // This header contains libraries, constants and functions
                              // declarations, and selected functions' definitions.
                              // Please make sure that you carefuly and fully read, and 
                              // complete the heading with the required information.

int main()
{
     cout << fixed << showpoint << setprecision(2);  // Format decimal values for display
     
     int selection;           // The menu selection                              
     double minTemp, maxTemp; // Minimum and maximum Celcius temperatures
     double testScore; //the test scores for students
     int studentID; //the student ids
     string recordFile; //the record file being used 
     
     displayHeading();

     do{
          displayMenu();
          selection = getMenuChoice();

          if(selection != 4)
          {
               switch(selection)
               {
                    // Celsius to Fahrenheit selection
                    case 1: 
                         cout << "+++++++++++++++++Celsius to Fahrenheit++++++++++++++++++++++\n\n";
                         cout << "Enter the minimum Celsius temperature: ";
                         cin >> minTemp;
                         cout << "Enter the maximum Celsius temperature: ";
                         cin >> maxTemp;
                         convertCelsiusToFahrenheit(minTemp, maxTemp);
                         cout << "+++++++++++++++++Celsius to Fahrenheit++++++++++++++++++++++\n\n";
                         break;
                            //test grades section
                    case 2:
                         cout << "+++++++++++++++++Test Grades++++++++++++++++++++++\n";
                         cout << "Please Enter test score (0-100) -1 to quit: ";
                         cin >> testScore;
                         diplayGradeAndAverage(testScore);
                         break;
                            //student information section
                    case 3:
                         cout << "+++++++++++++++++Student Info++++++++++++++++++++++\n";
                         cout << "Enter record File Name: ";
                         cin >> recordFile;
                         createReadRecords(recordFile);
                }
          }
          
     }while(selection != 4);     

     cout << "Thank you very much for using this program and for your cooperation\n"
          << "and professionalism.\n\n";

     // Display the date and time the program was run or executed
     time_t currentDateTime = time(0);     
     cout << "Today is " << ctime(&currentDateTime) << "\n\n";
     cout << "*******************************************************************************************\n\n";

     return 0;
}
// Prototype or declaration for the function that gets and returns the menu choice
int getMenuChoice()
{
     int selection;    
     cin >> selection;
     while(selection < 1 || selection > 4)
     {
          cout << "\n\nIncorrect choice. Valid choices are 1, 2, 3, and 4.\n"
               << "Please enter again your selection: ";
          cin >> selection;
     }
     cout << endl;
     return selection;
}

// Implementation or definition for the function that converts a range of Celsius 
// temperatures to Fahrenheit temperatures
void convertCelsiusToFahrenheit(double minTemp, double maxTemp)
{
     const double FACTOR = 9.0 / 5.0;
     const double INCREMENT = 10.0;
     const double TERM = 32;     
     double celsius, fahrenheit;

     cout << "\nCelsius        Fahrenheit\n\n";
     for(celsius = minTemp; celsius <= maxTemp; celsius += INCREMENT)
     {
          fahrenheit = FACTOR * celsius + TERM;
          cout << setw(7) << celsius << setw(18) << fahrenheit << endl;
     }
     cout << endl;
}

// Provide the implementations of the following functions

// Implementation or definition for the function that displays the grades and average
void diplayGradeAndAverage(double testScore)
{
   const int MAX_TEST_SCORE = 100; //assigning the min and max test scores and other varibles used below
    const int MIN_TEST_SCORE = 0;
    char letterGrade;
    double numOfScores = 0;
    double totalOfScores = 0;
    double daverage = 0;
    
    int     numOfAs = 0,
            numOfBs = 0,
            numOfCs = 0,
            numOfDs = 0,
            numOfFs = 0;

    while (testScore != -1)
    { //allows the user to bypass the while loop with a test score other than -1
        while (!(testScore >= MIN_TEST_SCORE && testScore <= MAX_TEST_SCORE)) //allows the user to input a test score from range 1-100 and if it fails it repeats
        {
                
                    cout << "Please Enter test score (0-100) -1 to quit: ";
                    cin >> testScore;  
                    
        }
            if(testScore >= MIN_TEST_SCORE && testScore <= MAX_TEST_SCORE)
            {
            
                numOfScores++;
                totalOfScores += testScore;
                
                if(testScore >= 90)
                {
                    numOfAs++;
                    cout << "Grade: A" << " Score: " << testScore << endl;
                }
                else if(testScore >= 80)
                {
                    numOfBs++;
                    cout << "Grade: B" << " Score: " << testScore << endl;
                }
                else if(testScore >= 70)
                {
                    numOfDs++;
                    cout << "Grade: C" << " Score: " << testScore << endl;
                }
                else if(testScore >= 60)
                {
                    numOfDs++;
                    cout << "Grade: D" << " Score: " << testScore << endl;
                }
                else if(testScore < 60)
                {
                    numOfFs++;
                    cout << "Grade: F" << " Score: " << testScore << endl;
                }
                
            cout << "Enter test score (0-100) -1 to quit: ";
            cin >> testScore;
        
        }
        
    }
     daverage = totalOfScores / numOfScores;
   
        cout << "\nNum of scores: " << numOfScores << endl; //prints out the average of scores the number of scores and letter grades
        cout << "Average Score: " << daverage << endl;
        cout << "Number of A's: " << numOfAs << endl;
        cout << "Number of B's: " << numOfBs << endl;
        cout << "Number of C's: " << numOfCs << endl;
        cout << "Number of D's: " << numOfDs << endl;
        cout << "Number of F's: " << numOfFs << endl;
        cout << "+++++++++++++++++Test Grades++++++++++++++++++++++\n\n";
     
}

// Implementation or definition for the function that creates and reads student records
void createReadRecords(string recordFile) //keeps the students data function
{
    int age, studentID; //assigning varibles a data type for the program
    double gpa;
    string firstName, lastName, classification, major; //varibles that are the input.
    char data;
    
    ofstream studentInfo(recordFile);
     
                                                    //Header for the DATABASE
      studentInfo << setw(90) << "STUDENT DATABASE" << endl;
      studentInfo << "Student ID" << setw(30) << "First Name" << setw(30) <<"Last Name" << setw(20) << "Age" << setw(30) <<"Classification" << setw(20) << "GPA" << setw(20) << "Major" <<  endl;
                        
                        
      //Enter Student ID                  
      cout << "Enter Student ID: ";
      cin >> studentID;
     
    while(studentID >= 0) //while loops that lets you put as many student ids you  need until you put a number less than 0
            {
            
            //inputs all of the student data
            
            cout << "Enter first name: ";
            cin >> firstName;
            
            cout << "Enter last name: ";
            cin >> lastName;
            
            cout << "Enter age: ";
            cin >> age;
            
            cout << "Enter classification (Freshman, Sophomore, Junior, Senior, Master, or Doctorate): ";
            cin >> classification;
            
            cout << "Enter GPA: ";
            cin >> gpa;
            
            cout << "Enter major: ";
            cin >> major;
                 
            
            studentInfo      << studentID << setw(30) //writes all of the student information in a database
        		             << firstName << setw(30)
        					 << lastName << setw(20)
        					 << age << setw(30)
                             << classification << setw(20)
                             << gpa << setw(30)
                             << major << setw(30) << endl;
            
            cout << "Enter next Student ID (enter anything below 0 to stop): "; //starts the while loop back again until you put anything below 0
        		 	cin >> studentID;
        		 	
    }
    
    studentInfo.open(recordFile);
    studentInfo << data;
    cout << data;
    studentInfo.close();
  
}

