#include <iostream>
#include <cmath>
#include <vector>
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
    double x = lambda;

    cout << fixed << setprecision(12);

    for (int n : indices)
    {
        double term = x;
        for (int i = 1; i < n; ++i)
        {
            term = F(term);
        }
        cout << "a_" << n << " = " << term << endl;
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
