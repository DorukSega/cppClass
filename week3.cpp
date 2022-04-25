#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
   private:
    string id;
    string name;

   public:
    Student(string sid, string names) : name(names), id(sid) {}
    Student() {
        cout << "Enter ID and NAME" << endl;
        cin >> id >> name;
        cout << endl;
    }
    string getId() { return id; }
    void setId(string set) { id = set; }
    string getName() { return name; }
    void setName(string set) { name = set; }
};

/*void swapStudentIds(Student& a, Student& b) {
    int temp = a.getId();
    a.setId(b.getId());
    b.setId(temp);
}

int main() {
    Student D(123, "Student_D"), R(789, "Student_R");
    cout << D.getName() << ": " << D.getId() << "  ,  " << R.getName() << ": "
         << R.getId() << endl;
    swapStudentIds(D, R);
    cout << D.getName() << ": " << D.getId() << "  ,  " << R.getName() << ": "
         << R.getId() << endl;
    return 0;
}*/
void printAll(Student* test, int size) {
    for (int i = 0; i < size; i++) {
        cout << test[i].getName() << ": " << test[i].getId() << endl;
    }
}

Student* findStudent(Student* test, int size, string key) {
    for (int i = 0; i < size; i++) {
        if (test[i].getId() == key)
            return &test[i];
    }
    return NULL;
}
int main() {
    Student* students = new Student[5];
    printAll(students, 5);
    cout << "Give key: ";
    string key;
    cin >> key;

    if (findStudent(students, 5, key) == NULL)
        cout << "test1";
    else
        cout << findStudent(students, 5, key);
    delete[] students;
    return 0;
}