#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to assign terrain cost based on the given character 'x'
int terriancost(char x){
    if(x == 'G'){
        return 1;  // Grass terrain cost
    }
    if(x == 'D'){
        return 2;  // Dirt terrain cost
    }
    return 5;      // Rock terrain cost
}

// Define directions of movement (up, down, left, right)
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

// Function to calculate the Manhattan distance between two points.
int manhattanDistance(int r1, int c1, int r2, int c2) {
    return (abs(r1 - r2) + abs(c1 - c2));
}

// Function to perform weighted A* search algorithm
int weightedAsearch(vector<vector<char>>& grid, int start_row, int start_column, int goal_row, int goal_column, int w){
    int no_of_rows = grid.size();
    int no_of_columns = grid[0].size();

    // Create a 2D visited array to keep track of visited states
    vector<vector<int>> visited(no_of_rows, vector<int>(no_of_columns, 0));

    // Define a min heap (priority queue) to store states with priority based on f-value
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> min_heap;

    // State Representation:
    // Each state is represented as a vector<int> with the following elements:
    // 0: f value
    // 1: Cumulative cost to reach this state
    // 2: Row of the current position
    // 3: Column of the current position

    // Calculate the heuristic value using the start position, weighted by terrain cost and weighted parameter.
    int heuristic = w * terriancost(grid[start_row][start_column]) * manhattanDistance(start_row, start_column, goal_row, goal_column);

    // Push the initial state onto the min heap with priority based on heuristic and cost
    min_heap.push({heuristic, 0, start_row, start_column});

    while (!min_heap.empty()) {
        vector<int> current = min_heap.top();  // Get the state with the lowest f-value
        min_heap.pop();
        int row = current[2];
        int col = current[3];
        int cost = current[1];

        // Check if we have reached the goal
        if (row == goal_row && col == goal_column) {
            return cost;
        }

        visited[row][col] = 1;  // Mark the current state as visited

        // Explore neighboring states
        for (int dir = 0; dir < 4; ++dir) {
            int newRow = row + dx[dir];
            int newCol = col + dy[dir];

            // Check if the new position is within bounds
            if (newRow >= 0 && newRow < no_of_rows && newCol >= 0 && newCol < no_of_columns) {
                // Check if the new position is not a wall and not visited
                if (grid[newRow][newCol] != 'W' && !visited[newRow][newCol]) {
                    // Calculate the cost to reach the new state, which is the cumulative cost plus terrain cost
                    int newCost = cost + terriancost(grid[newRow][newCol]);
                    
                    // Calculate the heuristic value for the new state (unweighted Manhattan distance)
                    int heuristic = manhattanDistance(newRow, newCol, goal_row, goal_column);
                    
                    // Adjust the heuristic value based on terrain cost from the start position, weighted by 'w'
                    heuristic *= w * terriancost(grid[start_row][start_column]);
                    
                    // Calculate the total f-value for the new state
                    int f = newCost + heuristic;

                    // Push the new state onto the min heap with priority based on f value.
                    min_heap.push({f, newCost, newRow, newCol});
                }
            }
        }
    }

    // If the min_heap is empty and we haven't reached the goal, there is no path
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
   freopen("input_weighted_A_search.txt", "r", stdin);
   freopen("output_weighted_A_search.txt", "w", stdout);
#endif

    int no_of_rows, no_of_columns;
    
    // Input the number of rows and columns of the grid
    cin >> no_of_rows >> no_of_columns;
    
    int start_row, start_column;
    int goal_row, goal_column;

    // Create a 2D grid to represent the terrain
    vector<vector<char>> grid(no_of_rows, vector<char>(no_of_columns, ' '));

    // Input the terrain data and find the start and goal positions
    for(int i = 0; i < no_of_rows; i++) {
        for(int j = 0; j < no_of_columns; j++) {
            char x;
            cin >> x;
            grid[i][j] = x;

            if(x == 'S'){
                start_row = i;
                start_column = j;
            }
            else if(x == 'F'){
                goal_row = i;
                goal_column = j;
            }
        }
    }

    int weight;
    cin >> weight;  // Input the weight parameter

    // Call the weighted A* search function and print the result
    cout << "The minimum cost from S(start) to F(finish): ";
    cout << weightedAsearch(grid, start_row, start_column, goal_row, goal_column, weight) << endl;

    return 0;
}
