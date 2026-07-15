#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    string department;
    int year;
    float cgpa;
};

int main()
{
    Student s;
    bool added = false;
    int choice;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "\nEnter Student ID: ";
            cin >> s.id;
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, s.name);

            cout << "Enter Department: ";
            getline(cin, s.department);

            cout << "Enter Year: ";
            cin >> s.year;

            cout << "Enter CGPA: ";
            cin >> s.cgpa;

            added = true;

            cout << "\nStudent Added Successfully!\n";
            break;

        case 2:

            if(added)
            {
                cout << "\n========== Student Details ==========\n";
                cout << "ID         : " << s.id << endl;
                cout << "Name       : " << s.name << endl;
                cout << "Department : " << s.department << endl;
                cout << "Year       : " << s.year << endl;
                cout << "CGPA       : " << s.cgpa << endl;
            }
            else
            {
                cout << "\nNo Student Record Found!\n";
            }

            break;

        case 3:
        {
            if(!added)
            {
                cout << "\nNo Student Record Found!\n";
                break;
            }

            int searchId;

            cout << "\nEnter Student ID to Search: ";
            cin >> searchId;

            if(searchId == s.id)
            {
                cout << "\nStudent Found!\n";
                cout << "ID         : " << s.id << endl;
                cout << "Name       : " << s.name << endl;
                cout << "Department : " << s.department << endl;
                cout << "Year       : " << s.year << endl;
                cout << "CGPA       : " << s.cgpa << endl;
            }
            else
            {
                cout << "\nStudent Not Found!\n";
            }

            break;
        }

        case 4:

            if(added)
            {
                cin.ignore();

                cout << "\nEnter New Name: ";
                getline(cin, s.name);

                cout << "Enter New Department: ";
                getline(cin, s.department);

                cout << "Enter New Year: ";
                cin >> s.year;

                cout << "Enter New CGPA: ";
                cin >> s.cgpa;

                cout << "\nStudent Updated Successfully!\n";
            }
            else
            {
                cout << "\nNo Student Record Found!\n";
            }

            break;

        case 5:

            if(added)
            {
                added = false;

                s.id = 0;
                s.name = "";
                s.department = "";
                s.year = 0;
                s.cgpa = 0;

                cout << "\nStudent Deleted Successfully!\n";
            }
            else
            {
                cout << "\nNo Student Record Found!\n";
            }

            break;

        case 6:

            cout << "\n=====================================\n";
            cout << "Thank You for using Student Management System\n";
            cout << "Program Exited Successfully!\n";
            cout << "=====================================\n";

            break;

        default:

            cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
