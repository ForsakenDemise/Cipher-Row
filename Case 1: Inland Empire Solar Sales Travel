// Project Case 1: Inland Empire Solar Sales Travel
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define V 4                   // The max value of the city.

using namespace std;

// Function Prototypes
int getCity(string s);             // Return integer value of the city using String param var.
int travelSim(int graph[][V], int s);      // Traveling Saleman Algorithm for Option 1.
void calVariations();            // Determine the variations of the trip to the noted cities 
void calDistance();              // Calculate the Distance of two cities.
void calShortest();              // Determine the Shortest path for the saleman to travel.
void calLowest();                // Calculate the Lowest Cost Trip
string getPathName(int k, int i);    // Return a String pathname after providing 2 int values.

// Cities: Each city is represented by a constant integer value.
const int RIVERSIDE     = 0;
const int MORENO_VALLEY = 1;
const int PERRIS        = 2;
const int HEMET         = 3; 


// Multidimension-Array to represent the matrix of cities.
// The cities are arranged in: Riverside, Moreno Valley, Perris, and Hemet; cols and rows.
int graph[4][4] =  {{0, 22, 26, 33},
                    {22, 0, 20, 29},
                    {26, 20, 0, 32},
                    {33, 29, 32, 0}};


// Main Function: The application will begin here. 
int main()
{
  bool exitProgram = false;   // Determine the state of the program.
  int userInput;              // Store user input for the menu selection.

  // Menu Selection: Each selection is represented by an integer value.
  const int SELECT_VARIATIONS = 1;
  const int SELECT_DISTANCE = 2;
  const int SELECT_SHORTEST = 3;
  const int SELECT_LOWEST = 4;
  const int SELECT_EXIT = 5;

  // Continue running the program until the user selects "Exit Application".
  while (!exitProgram)
  {
    cout << " ___       _                 _   _____                 _"                << endl;           
    cout << "|_ _|_ __ | | __ _ _ __   __| | | ____|_ __ ___  _ __ (_)_ __ ___"       << endl;  
    cout << " | || '_ \\| |/ _` | '_ \\ / _` | |  _| | '_ ` _ \\| '_ \\| | '__/ _ \\" << endl;  
    cout << " | || | | | | (_| | | | | (_| | | |___| | | | | | |_) | | | |  __/ "     << endl; 
    cout << "|___|_| |_|_|\\__,_|_| |_|\\__,_| |_____|_| |_| |_| .__/|_|_|  \\___| "  << endl; 
    cout << "                                                |_|                "     << endl;
    cout << "╔═══════════════════════════════════╗"                                   << endl;
    cout << "║ Inland Empire Solar Sales Travel  ║"                                   << endl;
    cout << "╚═══════════════════════════════════╝"                                   << endl << endl;
     cout <<"╔════════════════════════════════════════════════╗" << endl;
    cout << "║ 1. Determine the Variations of the Trip        ║" << endl;
    cout << "║ 2. Calculate the Distance of Two Cities        ║" << endl;
    cout << "║ 3️. Locate the Shortest Path                    ║" << endl;
    cout << "║ 4. Locate the Lowest Cost Trips                ║" << endl;
    cout << "║                                                ║" << endl;
    cout << "║ 5. Exit Application                            ║" << endl;
    cout << "╚════════════════════════════════════════════════╝" << endl << endl;


    cout << "Please enter your selection 👉 ";     
    cin >> userInput;  // Prompt user for an integer of the menu selection.
    cin.ignore();     // Consume the whitespace from the keyboard buffer.
 

    // Start the function based on the user-input.
    switch (userInput)
    {
      case SELECT_VARIATIONS: calVariations();
      break;

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
      break;

      default:
      cout << endl << endl;
      cout << "╔════════════════════════════════════════════════╗" << endl;
      cout << "║     Invalid Selection. Please try again ❗      ║" << endl;
      cout << "╚════════════════════════════════════════════════╝" << endl << endl;
      break;
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

/* This function will determine the variations of the trip to the noted cities  
 * that the traveling saleman must take to market the solar products. */
void calVariations()
{
  cout << endl << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║    1. Determine The Variations of The Trip     ║" << endl;
  cout << "╚════════════════════════════════════════════════╝" << endl << endl;

  cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << endl;
  cout << "║  Scenario:                                                                   ║" << endl;
  cout << "║                                                                              ║" << endl;
  cout << "║  The traveling saleman currently resides in Riverside and must journey...    ║" << endl;
  cout << "║  his way around different cities in order to sell his solar products...      ║" << endl;
  cout << "║  before finally can he then return back to his home and finish the day.      ║" << endl;
  cout << "║                                                                              ║" << endl;
  cout << "║  There are 3 different cities that he must visit:                            ║" << endl;
  cout << "║                                                                              ║" << endl;
  cout << "║  🏡️ Moreno Valley                                                            "  << endl; 
  cout << "║  🏡️ Perris                                                                   "  << endl;
  cout << "║  🏡️ Hemet                                                                    "  << endl;
  cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << endl << endl << endl; 

  cout << "Variations: \n\nHere are possible variations that the saleman could travel.\n\n";

  cout << "1. 🔵 Riverside  ➡ 🏡️ Perris         ➡ 🏡️ Hemet          ➡ 🏡️ Moreno Valley  ➡ 🔴 Riverside" << endl; 
  cout << "2. 🔵 Riverside  ➡ 🏡️ Perris         ➡ 🏡️ Moreno Valley  ➡ 🏡️ Hemet          ➡ 🔴️ Riverside" << endl; 
  cout << "3. 🔵 Riverside  ➡ 🏡️ Hemet          ➡ 🏡️ Moreno Valley  ➡ 🏡️ Perris         ➡ 🔴 Riverside" << endl; 
  cout << "4. 🔵 Riverside  ➡ 🏡️ Hemet          ➡ 🏡️ Perris         ➡ 🏡️ Moreno Valley  ➡ 🔴 Riverside" << endl; 
  cout << "5. 🔵 Riverside  ➡ 🏡️ Moreno Valley  ➡ 🏡️ Hemet          ➡ 🏡️ Perris         ➡ 🔴 Riverside" << endl; 
  cout << "6. 🔵 Riverside  ➡ 🏡️ Moreno Valley  ➡ 🏡️ Perris         ➡ 🏡️ Hemet          ➡ 🔴 Riverside" << endl;   

  cout << "\n\nQuestion:\n\nBut which route would be the shortest for the traveling saleman to travel ❓" << endl;

  cout << endl << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║    Calculating For The Most Shortest Route     ║" << endl;
  cout << "╚════════════════════════════════════════════════╝" << endl << endl;
  cout << travelSim(graph, RIVERSIDE);
  cout << " miles." << endl;

} // end of calVariations()



/* This function will calculate the distance between the two input cities.
 * While this feature is not a requirement for the Case 1 Project, it is helpful for
 * validating if our matrix adjancency in the program is portraying accurate values. */
void calDistance()
{
  string userInput; // Variable for storing user keyboard input.
  int startCity;    // The city that the user will start from.
  int endCity;      // The city that the user will exit to.

  list<string> cityList = {"Riverside", "Moreno Valley", "Perris", "Hemet"};

  cout << endl << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║    2. Calculate Distance Between Two Cities    ║" << endl;
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
  cout << endl << endl;
  cout << "╔════════════════════════════════════════════════╗" << endl;
  cout << "║          3. Located the Shortest Path          ║" << endl;
  cout << "╚════════════════════════════════════════════════╝" << endl << endl;
}



// This function will calculate the Lowest Cost Trips
void calLowest()
{
  cout << "\n\n[ 3. Calculate the lowest cost trips ]\n";
}

// This function will return a string pathname to the caller.
string getPathName(int k, int i)
{
  // Starting Point = Riverside
  if (k == RIVERSIDE && i == RIVERSIDE)
    return " Riverside: Riverside: ";
  else if (k == RIVERSIDE && i == MORENO_VALLEY)
    return "Riverside: Moreno Valley: ";
  else if (k == RIVERSIDE && i == PERRIS)
    return " Riverside: Perris: ";
  else if (k == RIVERSIDE && i == HEMET)
    return " Riverside: Hemet: ";    


 // Starting Point = Moreno Valley
  if (k == MORENO_VALLEY && i == MORENO_VALLEY)
    return " Moreno Valley: Moreno Valley: ";
  else if (k == MORENO_VALLEY && i == RIVERSIDE)
    return " Moreno Valley: Riverside: ";
  else if (k == MORENO_VALLEY && i == PERRIS)
    return " Moreno Valley: Perris: ";
  else if (k == MORENO_VALLEY && i == HEMET)
    return " Moreno Valley: Hemet: ";  


 // Starting Point = Perris
  if (k == PERRIS && i == PERRIS)
    return " Perris: Perris: ";
  else if (k == PERRIS && i == MORENO_VALLEY)
    return " Perris: Moreno Valley: ";
  else if (k == PERRIS && i == RIVERSIDE)
    return " Perris: Riverside: ";
  else if (k == PERRIS && i == HEMET)
    return " Perris: Hemet: ";  


 // Starting Point = Hemet
  if (k == HEMET && i == HEMET)
    return " Hemet: Hemet: ";
  else if (k == HEMET && i == MORENO_VALLEY)
    return " Hemet: Moreno Valley: ";
  else if (k == HEMET && i == PERRIS)
    return " Hemet: Perris: ";
  else if (k == HEMET && i == RIVERSIDE)
    return " Hemet: Riverside: ";    

  return " ";          
}


/**
/* This function will help solve the Traveling Saleman problem which Option 1 is based on.
/* The function requires a multidemnsional array of graph and a starting point(source) integer... 
/* and will then return the (shortest path) as the solution.
 */
int travelSim(int graph[][V], int source) 
{

  vector<int> cities;      // This vector will store all vertices apart from the source vertex.
  int min_path = INT_MAX;  // Store minimum weight Hamiltonian Cycle. 
  int routeNum = 1;


  // Step 1: Add all the non-source variable value to the vertex structure.
  // Run a loop to determine if the counter variable has the same integer value as the source variable.
  // If it doesn't, add it to the vertex vector; since macro 'V' is 4, only 3 elements should be added.
  // ie. If the source is 0, the vertex will contain {1, 2, 3}, if source = 1 then {0, 2, 3}, and so on.
  for (int i = 0; i < V; i++) 
  {
      if (i != source) 
      cities.push_back(i);  
  }


  // Step 2. Compute the current path weight 
  do 
  { 
    int current_pathweight = 0; // Store the weight of the current path; its cost
    int k = source;             // k value contain the source location

    // The size of the loop should be the value of (macro 'V' - 1); in this case, 3.
    // The value of i should be in a sequence of 0 - 1 - 2 during the looping process.

    for (int i = 0; i < cities.size(); i++) 
    { 
      // We can use the K-value and cities[i] value in order to find the path weight:
      // i.e First iteration  (when i is 0):  graph[k][cities[i]] = graph[0][cities[0]] = graph[0][1];  
      // i.e Second iteration (when i is 1):  graph[k][cities[i]] = graph[1][cities[1]] = graph[1][2];
      // i.e Third iteration  (when i is 2):  graph[k][cities[i]] = graph[2][cities[2]] = graph[2][3];

      // Add the sum of the two coordinates throughout each iteration: 
      // i.e First  Iteration:  graph[0][1] = 22; current_pathweight = 22;
      // i.e Second Iteration:  graph[1][2] = 20; current_pathweight = 42;
      // i.e Third  Iteration:  graph[2][3] = 32; current_pathweight = 74;
      current_pathweight += graph[k][cities[i]]; 

      // Print Path Name to the Terminal:
       cout << getPathName(k,cities[i]); 

      // The value of 'K' is now the value of the next element of the vertex cities:
      // i.e First  iteration:  cities[0] = 1, so k = 1.
      // i.e Second iteration:  cities[1] = 2, so k = 2.
      // i.e Third  iteration:  cities[2] = 3, so k = 3. <-- K-value ends here.
      k = cities[i]; 

    } // close for-loop

    // Sum up the last remaining = graph[3][0] = 33; current_weight = 74 + 33 = 107 <-- Should be our weight.
    current_pathweight += graph[k][source]; 
     cout << getPathName(k, source); 


    // Example Graph:
    //    0  1  2  3
    // 0           x  <-- Last   Iteration: graph[3][0];   Returning home  to    Riverside(0)
    // 1  x           <-- First  Iteration: graph[0][1];   Starting  home  from  Riverside(0)
    // 2     x        <-- Second Iteration: graph[1][2];
    // 3        x     <-- Third  Iteration: graph[2][3];


    // 3. Update and determine the path with minimum cost
    //
    // In order to determine the minimum path, the C++ std::min is utilized by..
    // passing both current pathweight of the iteration and the previous recorded min_path.
    // Whichever value is returned by the min function will be the lowest min_path of the white-loop.
    min_path = min(min_path, current_pathweight); 
        
    cout << endl;
    routeNum++;

  // This do-while loop is operated by the std::next_permutation, 
  // using the beginning iterator and the last iterator of the vertex as the length.      
  } while (next_permutation(cities.begin(), cities.end())); 

  return min_path; 

} // close TSP function
