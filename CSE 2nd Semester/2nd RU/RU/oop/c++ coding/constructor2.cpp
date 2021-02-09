#include<iostream>

using namespace std;
class devit
{
    private:
    int roll_no;
    //long int reg = 1117549427;

    public:
    void setRollno( int number );
    int getRollno( void );
    devit( int number );// This is the constructor declaration;
};
devit::devit( int number )
{
    cout << "my roll is being created and my registration is: " <<number <<endl;
    roll_no = number;
}
void devit::setRollno( int number)
{
    roll_no = number;
}
int devit::getRollno(void)
{
    return roll_no;
}
int main()
{
    // get initially set roll.
    devit Devit(1710776108);

    cout << "my roll number is : " << Devit.getRollno() <<endl;
     Devit.setRollno(1117549427);
      cout << "my registration number is : " << Devit.getRollno() <<endl;

    return 0;
}
