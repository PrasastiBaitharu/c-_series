#include <iostream>
using namespace std;

class vehicle
{
public:
    virtual void speed()
    {
        cout << "Vehicle Speed" << endl;
    }
};

class alto : public vehicle
{
public:
    void speed()override
    {
        cout << "120km/h" << endl;
    }
};

class mercedes : public vehicle
{
public:
    void speed()
    {
        cout << "250km/h" << endl;
    }
};

int main()
{
    vehicle v;
    v.speed();

    alto a;
    a.speed();

    mercedes m;
    m.speed();
}