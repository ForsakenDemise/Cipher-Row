// Project Case 1: Inland Empire Solar Sales Travel
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function Prototypes
int returnCity(string s); // Return integer value of the city using String param var.
void calDistance();       // Calculate the distance between two cities.
void calBreadth();        // Calculate the Breadth First Search of cities.
void calShortest();       // Determine the Shortest path for the saleman to travel.
void calLowest();         // Calculate the Lowest Cost Trip

// Cities: Each city is represented by a constant integer value.
const int RIVERSIDE     = 0;
const int MORENO_VALLEY = 1;
const int PERRIS        = 2;
const int HEMET         = 3; 


// Multidimension-Array to represent the matrix of cities.
const int graph[4][4] =  {{0, 22, 26, 33},
                          {22, 0, 20, 29},
                          {26, 20, 0, 32},
                          {33, 29, 32, 0}};


// Main Function: The Program will begin here. 
int main()
{
  bool exitProgram = false;

  // Continue running the program until the user choose "Exit Application".
  while (!exitProgram)
  {
    // Print Menu Selection.
    cout << " ___       _                 _   _____                 _"                << endl;           
    cout << "|_ _|_ __ | | __ _ _ __   __| | | ____|_ __ ___  _ __ (_)_ __ ___"       << endl;  
    cout << " | || '_ \\| |/ _` | '_ \\ / _` | |  _| | '_ ` _ \\| '_ \\| | '__/ _ \\" << endl;  
    cout << " | || | | | | (_| | | | | (_| | | |___| | | | | | |_) | | | |  __/ "     << endl; 
    cout << "|___|_| |_|_|\\__,_|_| |_|\\__,_| |_____|_| |_| |_| .__/|_|_|  \\___| "  << endl; 
    cout << "                                                |_|                "     << endl;
    cout << "*************************************"             << endl;
    cout << "* Inland Empire Solar Sales Travel  *"             << endl;
    cout << "*************************************"     << endl << endl;
    cout << "Please select your option:"                << endl << endl;
    cout << "1. Calculate Distance between two cities"          << endl;
    cout << "2. Calculate Breadth First Search"                 << endl;
    cout << "3. Calculate Shortest Path"                        << endl;
    cout << "4. Calculate the lowest cost trips"        << endl << endl;
    cout << "5. Exit Application."                      << endl << endl;


    // Menu Selection: Each selection is represented by an integer value.
    const int SELECT_DISTANCE = 1;
    const int SELECT_BREADTH  = 2;
    const int SELECT_SHORTEST = 3;
    const int SELECT_LOWEST = 4;
    const int SELECT_EXIT = 5;
    
    // Prompt user for an integer input for the Menu Selection.
    cout << "Selection: ";
    int userInput;
    cin >> userInput;
    cin.ignore();     // Consume the white space from the keyboard buffer.

    // Start the function based on the user-input.
    if (userInput == SELECT_DISTANCE)
      calDistance();
    
    else if (userInput == SELECT_BREADTH)
      calBreadth();
    
    else if (userInput == SELECT_SHORTEST)
      calShortest();

    else if (userInput == SELECT_LOWEST)
      calLowest();

    else if (userInput == SELECT_EXIT)
    {
      exitProgram = true;
      cout << "Program has successfully closed.";
    }

    // Create empty lines for the next menu selection appearance.
    for (auto i=0;i<10;i++)
      cout << "\n";
  }

  return 0;
}

// The function will compare the user input to determine their city in integer.
// This function requires a String city name and will return its integer.
int returnCity(string userString)
{
  if (userString.compare("riverside") == 0)
    return RIVERSIDE;

  else if (userString.compare("hemet") == 0)
    return HEMET;

  else if (userString.compare("perris") == 0)
    return PERRIS;

  else if (userString.compare("moreno valley") == 0)
    return MORENO_VALLEY;

  return 0;
}

// This function will calculate the distance between the two input cities.
// This feature is not a requirement for the Case 1 Project, but it is helpful
// to validate if our matrix adjancency in the program is portraying accurate value.
void calDistance()
{
  string userInput;
  int startCity;  // The city that the user will start from.
  int endCity;    // The city that the user will exit to.

  cout << "\n\n[ 1. Calculate Distance between two cities ]\n";

  cout << "\nEnter the Starting city: ";
  getline(cin, userInput);
  startCity = returnCity(userInput);

  cout << "Enter the Ending city: ";
  getline(cin, userInput);
  endCity = returnCity(userInput);

  cout << "\nDistance: " << graph[startCity][endCity] << " miles." << "\t <--- Your Answer\n";
}

// This function will calculate the Breadth First Search
void calBreadth()
{
  cout << "\n\n[ 2. Calculate Breadth First Search ]\n";
}

// This function will calculate the Shortest Path. 
void calShortest()
{
  cout << "\n\n[ 3. Calculate Shortest Path ]\n";
}

// This function will calculate the Lowest Cost Trips
void calLowest()
{
  cout << "\n\n[ 4. Calculate the lowest cost trips ]\n";
}

