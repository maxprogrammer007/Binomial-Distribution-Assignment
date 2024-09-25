#include <bits/stdc++.h>
#define PI 3.1415
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int npr(int n, int r)
{
    return fact(n) / fact(n - r);
}

double binomialPD(int n, int r, double p)
{
    double NCR = ncr(n, r);
    double prob = NCR * pow(p, r) * pow(1 - p, n - r);
    return prob;
}

double poissonPD(double lambda, double x)
{
    double prob = pow(lambda, x) * exp(-lambda) / fact(x);
    return prob;
}

double normalPD(double sigma, double mu, double x)
{
    double prob = ((1 / sigma * sqrt(2 * PI))) * exp(-0.5 * pow((x - mu) / sigma, 2));
    return prob;
}

int main()
{
    cout << "\t\t\tPROBABILITY DISTRIBUTIONS\t\t\t" << endl;
    cout << "\t\t\t1. Binomial Distribution\t\t\t" << endl;
    cout << "\t\t\t2. Poisson Distribution\t\t\t" << endl;
    cout << "\t\t\t3. Normal Distribution\t\t\t" << endl;

    int choice;
    cout << "Enter your Choice: ";
    cin >> choice;

    switch(choice){
        case 1: {cout << "ENTER n, r and p respectively: ";
                int n, r;
                double p;
                cin >> n >> r >> p;
                cout << "PROBABILITY: " << binomialPD(n, r, p) <<endl;
                break;
        }
        case 2: {
            cout << "ENTER lambda and x respectively: ";
            double lambda;
            double x;
            cin >> lambda >> x;
            cout << "PROBABILITY: " << poissonPD(lambda, x) << endl;
            break;
        }
        case 3: {
            cout << "ENTER sigma, mu and x respectively: ";
            double sigma, mu, x;
            cin >> sigma >> mu >> x;
            cout << "PROBABILITY: " << normalPD(sigma, mu, x) << endl;
            break;
        }
        default: cout<< "KINDLY SELECT FROM THE GIVEN CHOICES :)" << endl;
    }
    

    return 0;
}