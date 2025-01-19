#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>  // For setting precision in output

using namespace std;

double F(double x)
{
    return (-3 * x * x + x) / (x * x - x + 1);
}

double directLimit(double lambda)
{
    if (lambda >= 0 && lambda <= 1.0 / 3.0)
    {
        return 0;
    }
    else
    {
        return -2;
    }
}

void printSequenceTerms(double lambda, const vector<int>& indices)
{
    vector<int> sortedIndices = indices;
    std::sort(sortedIndices.begin(), sortedIndices.end());

    double currentTerm = lambda;
    int lastIndex = 1; 

    cout << fixed << setprecision(12);

    for (int n : sortedIndices)
    {
        while (lastIndex < n)
        {
            currentTerm = F(currentTerm);
            lastIndex++;
        }

        cout << "a_" << n << " = " << currentTerm << endl;
    }
}


int main()
{
    double lambda;
    cout << "Enter the initial value (lambda): ";
    cin >> lambda;

    double limit = directLimit(lambda);
    cout << "The limit of the sequence is: " << fixed << setprecision(12) << limit << endl;

    int numIndices;
    cout << "Enter the number of indices: ";
    cin >> numIndices;

    vector<int> indices(numIndices);
    cout << "Enter the indices: ";
    for (int i = 0; i < numIndices; ++i)
    {
        cin >> indices[i];
    }

    printSequenceTerms(lambda, indices);

    return 0;
}
