// Project Case 1: Inland Empire Solar Sales Travel

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function Prototype
int returnCity(string s);
void calDistance();
void calBreadth();
void calShortest();

// Cities
const int RIVERSIDE = 0;
const int MORENO_VALLEY = 1;
const int PERRIS = 2;
const int HEMET = 3; 

// Menu Selection
const int SELECT_DISTANCE = 1;
const int SELECT_BREADTH = 2;
const int SELECT_SHORTEST = 3;

// Multidimension-Array to represent the weighted graph of cities
int graph[4][4] =  {{0, 22, 26, 33},
                    {22, 0, 20, 29},
                    {26, 20, 0, 32},
                    {33, 29, 32, 0}};

int cities[4];

// Main Function
int main()
{
  // Print the Menu Selection Screen.
  cout << "*************************************"   << endl;
  cout << "* Inland Empire Solar Sales Travel  *"   << endl;
  cout << "*************************************"   << endl << endl;
  cout << "Please select your option:\n" << endl;
  cout << "1. Calculate distance between cities" << endl;
  cout << "2. Calculate Breadth First Search" << endl;
  cout << "3. Calculate Shortest Path" << endl << endl;
  
  // Prompt user for an input for Menu Selection.
  cout << "Selection: ";
  int userInput;
  cin >> userInput;
  
  // Consume the white space from the keyboard buffer.
  cin.ignore();   

  // Start the function based on the user-input.
  if (userInput == SELECT_DISTANCE)
    calDistance();
  
  else if (userInput == SELECT_BREADTH)
    calBreadth();
  
  else if (userInput == SELECT_SHORTEST)
    calShortest();

  return 0;
}

// This function will compare the user input to determine their city in integer.
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

// This function will calculate the distance between the two input cities
void calDistance()
{
  string userInput;
  int startCity;  // The city that the user will start from.
  int endCity;    // The city that the user will exit to.

  cout << "\nEnter the starting city: ";
  getline(cin, userInput);
  startCity = returnCity(userInput);
  

  cout << "Enter the ending city: ";
  getline(cin, userInput);
  endCity = returnCity(userInput);

  cout << "Distance: " << graph[startCity][endCity] << endl;
}

// This function will calculate the Breadth First Search
void calBreadth()
{

}

// This function will calculate the Shortest Path. 
void calShortest()
{
  string userInput;
  const int startCity = RIVERSIDE; // The default Starting City is Riverside;
  int endCity;                     // The city that the user will exit to.

  // This is a dynamic available pool of cities that can be used in the program.
  // For example, if the user select a city, remove that city from the pool.
  // The pool can later be used to generate a list of possible combination of city path.
  vector<int> cityPool = {RIVERSIDE, MORENO_VALLEY, PERRIS, HEMET};

  // Prompt for the ending city for the user.
  cout << "Enter the ending city: ";
  getline(cin, userInput);
  endCity = returnCity(userInput);

  // Remove the startCity and endCity from the cityPool Vector.
  cityPool.erase(cityPool.begin(), startCity + 2);
  cityPool.erase(endCity);

  // Create a city-to-travel vector for the shortest path.
  // Algorithm will use a vector to allow the swap of middle-cities; not start or end.
  vector<int> cityList;

  // Insert the Starting City to the Front of Vector
  cityList.push_back(startCity);

  // Insert the Middle-Cities
  cityList.push_back(cityPool.front());
  cityList.push_back(cityPool.last());
  
  // Insert the Ending City last.
  cityList.push_back(endCity);

  // Prompt for Ending City input
}

// A class for representing the city to be used in our case project.
// This class contains the value of its name and constant number; ex. Riverside = 1
class City 
{
  private:
  string name;
  int num;

  public:
  void setName(string n)
  {
    name = n;
  }

  string getName()
  {
    return name;
  }

};



