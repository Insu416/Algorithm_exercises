// 달팽이
// spiral matrix using dynamic allocation(vector)

#include <iostream>
#include <vector>

using namespace std;

void generateTwoDimensionalVector(vector< vector<int> > &spiralMatrix, int size);
void generateSpiralMatrix(vector< vector<int> > &spiralMatrix, int size);
void printSpiralMatrix(vector< vector<int> > &spiralMatrix, int matrixSize);
void clearSprialMatrix(vector< vector<int> > &spiralMatrix, int matrixSize);

int main() {
	vector< vector<int> > spiralMatrix;
	int size = 0;

	cin >> size;

	generateTwoDimensionalVector(spiralMatrix, size);
	generateSpiralMatrix(spiralMatrix, size);
	printSpiralMatrix(spiralMatrix, size);
	clearSprialMatrix(spiralMatrix, size);

	return 0;
}

void generateTwoDimensionalVector(vector< vector<int> > &spiralMatrix, int size) {
	for (int i = 0; i < size; ++i) {
		vector<int> element(size);
		spiralMatrix.push_back(element);
	}
}

void generateSpiralMatrix(vector< vector<int> > &spiralMatrix, int size) {
	int num = 1, increase = 1, x = 0, y = -1;
	int i = 0;

	while (size > 0) {
		for (i = 0; i < size; ++i) {
			y += increase;
			spiralMatrix[x][y] = num++;
		}
		--size;

		for (i = 0; i < size; ++i) {
			x += increase;
			spiralMatrix[x][y] = num++;
		}
		increase *= -1;
	}
}

void printSpiralMatrix(vector< vector<int> > &spiralMatrix, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << spiralMatrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void clearSprialMatrix(vector< vector<int> > &spiralMatrix, int size) {
	for (int i = 0; i < size; ++i) {
		spiralMatrix[i].clear();
	}
	spiralMatrix.clear();
}
