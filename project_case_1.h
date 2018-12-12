// Project Case 1: Inland Empire Solar Sales Travel
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Function Prototypes
int getCity(string s);     // Return integer value of the city using String param var.
void calDistance();        // Calculate the Distance of two cities.
void calShortest();        // Determine the Shortest path for the saleman to travel.
void calLowest();          // Calculate the Lowest Cost Trip

// Cities: Each city is represented by a constant integer value.
const int RIVERSIDE     = 0;
const int MORENO_VALLEY = 1;
const int PERRIS        = 2;
const int HEMET         = 3; 


// Multidimension-Array to represent the matrix of cities.
// The cities are arranged in: Riverside, Moreno Valley, Perris, and Hemet; cols and rows.
const int graph[4][4] =  {{0, 22, 26, 33},
                          {22, 0, 20, 29},
                          {26, 20, 0, 32},
                          {33, 29, 32, 0}};


// Main Function: The application will begin here. 
int main()
{
  bool exitProgram = false;   // Determine the state of the program.
  int userInput;              // Store user input for the menu selection.

  // Menu Selection: Each selection is represented by an integer value.
  const int SELECT_DISTANCE = 1;
  const int SELECT_SHORTEST = 2;
  const int SELECT_LOWEST = 3;
  const int SELECT_EXIT = 4;

  // Continue running the program until the user selects "Exit Application".
  while (!exitProgram)
  {
    // Print Menu Selection.
    cout << " ___       _                 _   _____                 _"                << endl;           
    cout << "|_ _|_ __ | | __ _ _ __   __| | | ____|_ __ ___  _ __ (_)_ __ ___"       << endl;  
    cout << " | || '_ \\| |/ _` | '_ \\ / _` | |  _| | '_ ` _ \\| '_ \\| | '__/ _ \\" << endl;  
    cout << " | || | | | | (_| | | | | (_| | | |___| | | | | | |_) | | | |  __/ "     << endl; 
    cout << "|___|_| |_|_|\\__,_|_| |_|\\__,_| |_____|_| |_| |_| .__/|_|_|  \\___| "  << endl; 
    cout << "                                                |_|                "     << endl;
    cout << "╔═══════════════════════════════════╗"                                   << endl;
    cout << "║ Inland Empire Solar Sales Travel  ║"                                   << endl;
    cout << "╚═══════════════════════════════════╝"                                   << endl << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ 1️. Calculate the distance of two cities        ┃" << endl;
    cout << "┃ 2️. Locate the shortest path of two cities      ┃" << endl;
    cout << "┃ 3. Calculate the lowest cost trips             ┃" << endl;
    cout << "┃                                                ┃" << endl;
    cout << "┃ 4. Exit Application                            ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl << endl;


    cout << "Please enter your selection: ";     
    cin >> userInput;  // Prompt user for an integer of the menu selection.
    cin.ignore();     // Consume the whitespace from the keyboard buffer.
 

    // Start the function based on the user-input.
    switch (userInput)
    {
      case SELECT_DISTANCE: calDistance();
      break;

      case SELECT_SHORTEST: calShortest();
      break;

      case SELECT_LOWEST: calLowest();
      break;

      case SELECT_EXIT:
      exitProgram = true;
      cout << endl << endl;
      cout << "╔════════════════════════════════════════════════╗" << endl;
      cout << "║         Program has successfully closed        ║" << endl;
      cout << "╚════════════════════════════════════════════════╝" << endl << endl;

      default:
      cout << endl << endl;
      cout << "╔════════════════════════════════════════════════╗" << endl;
      cout << "║     Invalid Selection. Please try again ❗      ║" << endl;
      cout << "╚════════════════════════════════════════════════╝" << endl << endl;
    }

    // Create empty lines for the next menu selection appearance.
    for (auto i = 0; i < 10; i++)
      cout << "\n";
  }

  return 0;
}


// The function will compare the user input to determine their city in integer.
// This function requires a String city name and will return its integer.
// Return an int value of 0 if no matches could be found.
int getCity(string userString)
{
  if (userString.compare("riverside") == 0 || userString.compare("Riverside") == 0)
    return RIVERSIDE;

  else if (userString.compare("hemet") == 0 || userString.compare("Hemet") == 0)
    return HEMET;

  else if (userString.compare("perris") == 0 || userString.compare("Perris") == 0)
    return PERRIS;

  else if (userString.compare("moreno valley") == 0 || userString.compare("Moreno Valley") == 0)
    return MORENO_VALLEY;

  return 0;
}


// This function will calculate the distance between the two input cities.
// While this feature is not a requirement for the Case 1 Project, it is helpful for
// validating if our matrix adjancency in the program is portraying accurate value.
void calDistance()
{
  string userInput; // Variable for storing user keyboard input.
  int startCity;    // The city that the user will start from.
  int endCity;      // The city that the user will exit to.

  list<string> cityList = {"Riverside", "Moreno Valley", "Perris", "Hemet"};

  cout << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║    1. Calculate Distance Between Two Cities    ║" << endl;
  cout << "╚════════════════════════════════════════════════╝" << endl << endl;

  cout << "Available Cities:" << endl << endl;

  for (auto i = cityList.begin(); i != cityList.end(); i++) 
  {
    cout << " 🏡️ " << *i << endl;
  }

  cout << endl << "🚖 Enter your Starting City: ";
  getline(cin, userInput);          // Prompt the user for a String input of city name.
  startCity = getCity(userInput);   // Return an integer value of String represent.

  cout << "🚖 Enter your Destination City: ";
  getline(cin, userInput);
  endCity = getCity(userInput);

  cout << "\n🛑 Distance: " << graph[startCity][endCity] << " Miles";


  cout << endl << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║            Returning to Menu Screen            ║" << endl;
  cout << "╚════════════════════════════════════════════════╝" << endl << endl;
}

// This function will calculate the Shortest Path. 
void calShortest()
{
  cout << "\n\n[ 2. Calculate Shortest Path ]\n";
}

// This function will calculate the Lowest Cost Trips
void calLowest()
{
  cout << "\n\n[ 3. Calculate the lowest cost trips ]\n";
}
