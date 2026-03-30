#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    float basic;

    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void display()
    {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
    }
};

class Payroll : public Employee
{
public:
    float hra, da, pf, gross, net;

    void calculateSalary()
    {
        hra = basic * 0.20;
        da = basic * 0.10;
        pf = basic * 0.05;

        gross = basic + hra + da;
        net = gross - pf;
    }

    void printSlip()
    {
        cout << "\n\n===== PAY SLIP =====";
        display();
        cout << "\nHRA (20%)   : " << hra;
        cout << "\nDA (10%)    : " << da;
        cout << "\nPF (5%)     : " << pf;
        cout << "\nGross Salary: " << gross;
        cout << "\nNet Salary  : " << net;
        cout << "\n====================\n";
    }

    void writeToFile()
    {
        ifstream fin("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");

        bool fileExists = fin.good();
        fin.close();

        fstream fout;
        fout.open("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv", ios::app);

        if (!fileExists)
        {
            fout << "EmpID,Name,Basic,HRA,DA,PF,Gross,Net\n";
        }

        fout << empId << "," << name << "," << basic << "," << hra << "," << da << "," << pf << "," << gross << "," << net << endl;

        fout.close();
    }

    void deleteEmployee()
    {
        int deleteId;
        cout << "\nEnter employee ID to delete: ";
        cin >> deleteId;

        ifstream fin("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");
        ofstream temp("D:\\CUTM\\Sem-1\\c++ programming\\project\\temp.csv");

        string line;
        bool isDeleted = false;

        while (getline(fin, line))
        {

            if (line.substr(0, line.find(',')) == to_string(deleteId))
            {
                isDeleted = true;
                continue;
            }

            temp << line << endl;
        }

        fin.close();
        temp.close();

        remove("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");

        rename("D:\\CUTM\\Sem-1\\c++ programming\\project\\temp.csv",
               "D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");

        if (isDeleted)
            cout << "\nEmployee Removed Successfully! ";
        else
            cout << "\nEmployee ID Not Found!";
    }

    void updateEmployee()
    {
        string updateId;
        cout << "\nEnter Employee ID to update: ";
        cin >> updateId;

        ifstream fin("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");
        ofstream temp("D:\\CUTM\\Sem-1\\c++ programming\\project\\temp.csv");

        string line;
        bool found = false;

        while (getline(fin, line))
        {
            if (line.size() == 0)
                continue;

            if (line.substr(0, line.find(",")) == updateId)
            {
                found = true;

                cout << "\nEnter New Name: ";
                cin >> name;

                cout << "Enter New Basic Salary: ";
                cin >> basic;

                calculateSalary();

                temp << updateId << "," << name << "," << basic << "," << hra << "," << da << "," << pf << "," << gross << "," << net << "\n";
            }
            else
            {
                temp << line << "\n";
            }
        }

        fin.close();
        temp.close();

        remove("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");
        rename("D:\\CUTM\\Sem-1\\c++ programming\\project\\temp.csv",
               "D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");

        if (found)
            cout << "\nEmployee updated successfully!\n";
        else
            cout << "\nEmployee ID not found!\n";
    }

    void searchEmployee()
    {
        string searchId;
        cout << "\nEnter Employee ID to search: ";
        cin >> searchId;

        ifstream fin("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");

        string line;
        bool found = false;

        while (getline(fin, line))
        {
            if (line.size() == 0)
                continue;

            stringstream ss(line);
            string id, name, basic, hra, da, pf, gross, net;

            getline(ss, id, ',');
            getline(ss, name, ',');
            getline(ss, basic, ',');
            getline(ss, hra, ',');
            getline(ss, da, ',');
            getline(ss, pf, ',');
            getline(ss, gross, ',');
            getline(ss, net, ',');

            if (line.substr(0, line.find(",")) == searchId)
            {
                found = true;

                cout << "\n===== Employee Found =====";
                cout << "\nEmployee ID : " << id;
                cout << "\nName        : " << name;
                cout << "\nBasic Salary: " << basic;
                cout << "\nHRA         : " << hra;
                cout << "\nDA          : " << da;
                cout << "\nPF          : " << pf;
                cout << "\nGross Salary: " << gross;
                cout << "\nNet Salary  : " << net;
                cout << "\n==========================\n";

                break;
            }
        }

        fin.close();

        if (!found)
            cout << "\nEmployee ID not found!";
    }

    void displayAll()
    {
        ifstream fin("D:\\CUTM\\Sem-1\\c++ programming\\project\\employees.csv");
        if (!fin)
        {
            cout << "\nNo employee records found!\n";
            return;
        }

        string line;

        while (getline(fin, line))
        {
            stringstream ss(line);
            string id, name, salary, hra, da, pf, gross, net;

            getline(ss, id, ',');
            getline(ss, name, ',');
            getline(ss, salary, ',');
            getline(ss, hra, ',');
            getline(ss, da, ',');
            getline(ss, pf, ',');
            getline(ss, gross, ',');
            getline(ss, net, ',');

            cout << id << "\t" << name << "\t" << salary << "\t" << hra << "\t" << da << "\t" << pf << "\t" << gross << "\t" << net << endl;
        }

        fin.close();
    }
};

int main()
{

    Payroll emp;
    int choice;

    do
    {
        cout << "\n===== PAYROLL MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Delete Employee";
        cout << "\n3. Update Employee";
        cout << "\n4. Search Employee";
        cout << "\n5. Display All Employees";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.getData();
            emp.calculateSalary();
            emp.printSlip();
            emp.writeToFile();
            break;

        case 2:
            emp.deleteEmployee();
            break;
        case 3:
            emp.updateEmployee();
            break;
        case 4:
            emp.searchEmployee();
            break;
        case 5:
            emp.displayAll();
            break;
        case 6:
            cout << "Thank you!";
            break;

        default:
            cout << "Invalid!";
        }

    } while (choice != 6);

    return 0;
}