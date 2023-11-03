#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// вариант 17: вывести значение составной функции в точках с определенным шагом (цикл и функция, шаг целочисленный)

double CompositeFunction(int xf)
{
    double yf;
    if (xf < -3)
    {
        yf = 1;
    }
    if ((xf >= -3) && (xf < -1))
    {
        yf = -pow((4 - pow((xf + 1), 2)), 0.5);
        // y=-sqrt(4-(x+1)*(x+1));
    }
    if ((xf >= -1) && (xf < 2))
    {
        yf = -2;
    }
    if (xf >= 2)
    {
        yf = xf - 4;
    }
    return (yf);
}
double y;
int i;
double massiv_y[21];
int main()

{
    ifstream fin("Baza.txt");
    ofstream fout("Baza.txt");

    for (int i = -10; i <= 10; i++)
    {
        y = CompositeFunction(i);
        fout << y << endl;
    }

for (int i = -10; i <= 10; i++)
    {
        fin >> massiv_y[i+10];
        cout << "y(" << i << ")=" << massiv_y[i+10] << endl;
    }

    fin.close();
    fout.close();
}