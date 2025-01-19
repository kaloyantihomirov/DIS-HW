# Sequence Limit Calculator

This program calculates the limit of a sequence defined by the recurrence relation:

![Formula](https://latex.codecogs.com/png.latex?a_%7Bn%2B1%7D%20%3D%20F%28a_n%29%2C%20%5Cquad%20F%28x%29%20%3D%20%5Cfrac%7B-3x%5E2%20%2B%20x%7D%7Bx%5E2%20-%20x%20%2B%201%7D)

The sequence starts with an initial value ![Lambda](https://latex.codecogs.com/png.latex?%5Clambda), and the program calculates both the limit of the sequence and specific terms with high precision.

## How the Program Works

- If the initial value ![Lambda](https://latex.codecogs.com/png.latex?%5Clambda) is in the interval [0, 1/3], the program determines the limit as **0**.
- For all other values of ![Lambda](https://latex.codecogs.com/png.latex?%5Clambda), the program determines the limit as **-2**.
- Additionally, the program calculates and prints specific terms of the sequence, based on user input.

## Example Output


## Comparing Results with Wolfram Alpha

The accuracy of this program can be validated by comparing its results with Wolfram Alpha. Below are two screenshots illustrating the comparison:

1. **Screenshot 1** 
   ![Program Results](https://i.imgur.com/zbRBJqr.png)

2. **Screenshot 2**
   ![Wolfram Alpha Results](https://i.imgur.com/1JTLqL5.png)

