#include <iostream>
using namespace std;
void hospital(int noOfDays);
main()
{
    int noOfDays;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> noOfDays;
    hospital(noOfDays);
}
void hospital(int noOfDays)
{
    int doctors = 7;
    int treated = 0;
    int untreated = 0;
    int treated1 = 0;
    int untreated1 = 0;
    int patients;
    for (int n = 1; n <= noOfDays; n++)
    {

        cout << "Number of patients who visited Hospital on Day " << n << ": ";
        cin >> patients;

        untreated = patients;
        if (n % 3 == 0) 
        {
            doctors = doctors + 1;
        }
        if (untreated <= doctors)
        {
            treated = untreated;
            untreated = untreated - treated;
        }
        if (untreated > doctors)
        {
            treated = doctors;
            untreated = untreated - treated;
        }
        untreated1 = untreated1 + untreated;
        treated1 = treated1 + treated;
    }
    cout << "Treated Patients: " << treated1 << endl;
    cout << "Untreated Patients: " << untreated1;
}
