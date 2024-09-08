#include <iostream>
#include <vector>

using namespace std;

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Function to check if a matrix is lower triangular
bool isLowerTriangular(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;

    // Input size of the matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    // Initialize the matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
    cout << "The matrix is:" << endl;
    printMatrix(matrix);

    // Check if the matrix is lower triangular
    if (isLowerTriangular(matrix)) {
        cout << "The matrix is a lower triangular matrix." << endl;
    } else {
        cout << "The matrix is not a lower triangular matrix." << endl;
    }

    return 0;
}
''