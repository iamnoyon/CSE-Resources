#include<iostream>

using namespace std;

class school
{
    protected:
    double Tstudent;
};
class Smallschool:school
{
    public:
    //double age;
    //double id;
    void setschool( double stu );
    double getschool();

};
double Smallschool::getschool()
{
    return Tstudent;
}
void Smallschool::setschool( double stu )
{
 Tstudent = stu;
}
int main()
{
    Smallschool school;
    school.setschool(100);

    cout << "Total student: " << school.getschool() <<endl;
    return 0;
}


