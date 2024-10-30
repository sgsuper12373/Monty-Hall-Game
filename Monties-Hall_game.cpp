#include <iostream>
#include <random>
#include <vector>
#include <algorithm> // Include for std::remove

using namespace std;

int main() {
    // Generate random integer in range [1, 3] for prize door
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 3);
    int prize = dist(gen); // Door with the prize

    // Ask player to choose a door
    int guess;
    cout << "Enter the door number (1, 2, or 3) you want to bet on for the car: ";
    cin >> guess;

    // Set up doors and remove player's guess from doors vector
    vector<int> doors = {1, 2, 3};
    doors.erase(std::remove(doors.begin(), doors.end(), guess), doors.end()); // Use std::remove

    // Monty reveals a door without the prize
    if (doors[0] != prize) {
        cout << "Oops, there was nothing behind door " << doors[0] << endl;
        doors.erase(doors.begin()); 
    } else {
        cout << "Oops, there was nothing behind door " << doors[1] << endl;
        doors.erase(doors.begin() + 1); 
    }

    // Ask if the player wants to switch
    char choice;
    cout << "Do you want to change your chosen door? (Y/N): ";
    cin >> choice;

    // Swap guess if player chose to switch
    if (choice == 'y' || choice == 'Y') guess = doors[0]; 

//DID player won?
    if (guess == prize) cout << "You won!!" << endl;
   else  cout << "You lost, better luck next time!" << endl;

    return 0;
}

