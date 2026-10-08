/*CT101/G/26640/25 MURIUKI DONATUS */
#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int main() {
    
    double revenue[7];
    double totalRevenue = 0, averageRevenue;

    cout << "Enter revenue for 7 days:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    cout << "\n--- Weekly Revenue Report ---\n";
    cout << "Total Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;

    
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); 

    cout << "\n--- Room Occupancy Report (One Branch) ---\n";
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << (floor + 1) << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    
    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\n--- Occupancy Report (All Branches) ---\n";
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "Total Occupied Rooms Across All Branches: " << totalOccupied << endl;

    return 0;
}
