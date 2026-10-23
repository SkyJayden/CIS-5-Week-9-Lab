#include <iostream>
#include <string>

// Lab 9 — Jayden MB
// CIS 5 Week 09 · Call and return

using std::cout;
using std::endl;
using std::string;

double avg(const int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) sum += a[i];
	return sum * 1.0 / n;
}

	void printSummary(double avg) {
		cout << "Average: " << avg << endl;
	}

int main() {
	const int N = 4;
	int scores[N] = { 80, 90, 70, 100 };
	double average = avg(scores, N);
	printSummary(average);
	return 0;
}		
