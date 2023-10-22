#include <iostream>
#include <iomanip>
using namespace std;
void cargo(int num);
main()
{
    int num;
    cout << "Enter the count of cargo for transportation: ";
    cin >> num;
    cargo(num);
}
void cargo(int num)
{
    float n1 = 0, n2 = 0, n3 = 0;
    float n;
    float price = 0, average1 = 1, average2 = 1, average3 = 1;
    for (int c = 1;  c<= num; c++)
    {

        int n = 0;
        cout << "Enter the tonnage of cargo " << c << ": ";
        cin >> n;
        if (n >= 1 && n <= 3)
        {
            n1 = n1 + n;
        }
        if (n >= 4 && n <= 11)
        {
            n2 = n2 + n;
        }
        if (n >= 12 && n <= 1000)
        {
            n3 = n3 + n;
        }
    }
    n = n1 + n2 + n3;
    price = ((n1 * 200) + (n2 * 175) + (n3 * 120)) / n;
    average1 = (n1 / n) * 100;
    average2 = (n2 / n) * 100;
    average3 = (n3 / n) * 100;
    cout << fixed;
    cout << setprecision(2);
    cout << price << endl;
    cout << average1 << "%" << endl;
    cout << average2 << "%" << endl;
    cout << average3 << "%" << endl;
}