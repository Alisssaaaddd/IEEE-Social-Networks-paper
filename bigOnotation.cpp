#include <iostream>
#include <vector>

using namespace std;

// a simple example of algorithm of O(m+n) in time comlexity

int sum(vector<int> n, vector<int> m){
    int sum = 0;

    for(int i : n){
        sum += i;
    }

    for(int i : m){
        sum += i;
    }

    return sum;
} 

// to calculate the sum you need to go through elements of m and n, so the overall complexity is O(m+n)

// here is an example of algorithm of O(m*n) in time complexity

int trace(vector<vector<int>> matrix){
    int trace = 0;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            if(i==j)
                trace += matrix[i][j];
        }
    }
    return trace;
}
