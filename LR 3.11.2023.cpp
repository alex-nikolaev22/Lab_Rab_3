#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// вариант 17: вывести значения составной функции в точках с определенным шагом (цикл и функция, шаг целочисленный)
// в текстовый файл, затем считать данные из текстового файла, записать их в массив и вывести массив в консоль

double CompositeFunction(int xf)//функция для вычисления значений на разных участках
{
    double yf;
    if (xf < -3)
    {
        yf = 1;
    }
    if ((xf >= -3) && (xf < -1))
    {
        yf = -pow((4 - pow((xf + 1), 2)), 0.5);
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
int i;
double massiv_y[21];
int main()

{
    ifstream fin("Baza.txt");
    ofstream fout("Baza.txt");

    for ( i = -10; i <= 10; i++)
    {
        fout << CompositeFunction(i) << endl;
    }

for ( i = -10; i <= 10; i++)
    {
        fin >> massiv_y[i+10];
        cout << "y(" << i << ")=" << massiv_y[i+10] << endl;
    }

    fin.close();
    fout.close();
}