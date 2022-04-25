#include <iostream>
#include <vector>
using namespace std;

/*first
struct Point {
    int x, y;
};

void displayPoint(Point& p) {
    cout << p.x << " " << p.y << endl;
}

int main() {
    Point test{5, 4};
    Point* pointerT{&test};
    (*pointerT).x = 3;
    displayPoint(test);
    return 0;
}*/
/* second
struct Employee {
    string name;
    int id, salary, hours;
};

void takeEmployeeArray(Employee* emp, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter Name: ";
        cin >> emp[i].name;
        cout << "Enter id: ";
        cin >> emp[i].id;
        cout << "Enter salary: ";
        cin >> emp[i].salary;
        cout << "Enter hours: ";
        cin >> emp[i].hours;
        cout << endl;
    }
}

void displayEmployeeArray(Employee* emp, int n) {
    for (int i = 0; i < n; i++) {
        cout << emp[i].name;
        cout << endl;
        cout << emp[i].id;
        cout << endl;
        cout << emp[i].salary;
        cout << endl;
        cout << emp[i].hours;
        cout << endl;
        cout << endl;
    }
}

void takeEmployeeInformation(vector<Employee>& emp) {
    for (auto&& i : emp) {
        cout << "Enter Name: ";
        cin >> i.name;
        cout << "Enter id: ";
        cin >> i.id;
        cout << "Enter salary: ";
        cin >> i.salary;
        cout << "Enter hours: ";
        cin >> i.hours;
        cout << endl;
    }
}

void displayEmployeeInfo(vector<Employee> emp) {
    for (auto&& i : emp) {
        cout << i.name;
        cout << endl;
        cout << i.id;
        cout << endl;
        cout << i.salary;
        cout << endl;
        cout << i.hours;
        cout << endl;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << endl;
    // as an C array
    //  Employee emps2[4];
    Employee* emps2 = new Employee[n];  // assign heap

    takeEmployeeArray(emps2, n);
    displayEmployeeArray(emps2, n);
    //with vectors
    //vector<Employee> emps(n);
    //takeEmployeeInformation(emps);
    //displayEmployeeInfo(emps);

    delete[] emps2;  // delete heap
    return 0;
}*/
/* third
template <typename T, typename U>

U sum(T a, U b) {
    return a + b;
}
int main() {
    cout << sum<int>(5, 5) << endl;
    cout << sum<double>(1.8, 9.7) << endl;
    cout << sum<int, float>(1, 9.7) << endl;
    cout << sum<string, string>("a", "b") << endl;
    return 0;
}*/

template <typename T>
class Point {
   private:
    T x, y;

   public:
    Point(T a, T b) : x(a), y(b) {}
    T getX() { return x; }
    void setX(T a) { x = a; }
    T getY() { return y; }
    void setY(T a) { y = a; }
};
int main() {
    Point<float> point(2.9, 1.3);
    cout << point.getX() << " " << point.getY() << endl;
    point.setX(4.2);
    cout << point.getX() << " " << point.getY() << endl;
    return 0;
}