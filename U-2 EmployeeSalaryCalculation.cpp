#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    float salary;
    static int count;
public:
    Employee() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
        count++; 
    }
    void display() const {
        cout << "\nName: " << name;
        cout << "\nSalary: $" << salary << endl;
    }
    float getSalary() const {
        return salary;
    }
    static void showCount() {
        cout << "\nTotal number of employees created: " << count << endl;
    }
    static void compareSalaries(const Employee &e1, const Employee &e2) {
        cout << "\n--- Comparing Salaries ---";
        if (e1.salary > e2.salary) {
            cout << "\n" << e1.name << " has a higher salary ($" << e1.salary << ") than " << e2.name << ".";
        } else if (e2.salary > e1.salary) {
            cout << "\n" << e2.name << " has a higher salary ($" << e2.salary << ") than " << e1.name << ".";
        } else {
            cout << "\nBoth " << e1.name << " and " << e2.name << " have equal salaries ($" << e1.salary << ").";
        }
        cout << endl;
    }
};
int Employee::count = 0;
int main() {
    cout << "Enter details for Employee 1:\n";
    Employee e1;
    cout << "\nEnter details for Employee 2:\n";
    Employee e2;
    Employee::showCount();
    Employee::compareSalaries(e1, e2);
    return 0;
}
