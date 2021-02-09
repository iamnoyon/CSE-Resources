#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;

    double t1,t2,t3,t4,t5,average;
    string firstname,lastname;

    infile.open("inData.txt");
    outfile.open("outData.txt");
   // outfile << fixed << showpoint << setprecission(2);
    cout << "processing ,,,,,,,," << endl;
    infile >> firstname >> lastname;
    while(infile)
    {
        cout << "student name: " << firstname << " " << lastname << endl;
        infile >> t1 >> t2 >> t3 >> t4 >> t5;
        outfile << "Test score: " << setw(6) << t1 << setw(6) << t2 << setw(6) << t3 << setw(6) << t4 << setw(6) << t5 << endl;
        average = (t1+t2+t3+t4+t5)/5.0;
        outfile << "Average test score: " << setw(6) << average << endl << endl;
        infile >> firstname >> lastname;
    }
    infile.close();
    outfile.close();
    //system("PAUSE");
    return 0;
}



