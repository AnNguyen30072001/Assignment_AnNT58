#ifndef B61ABFFB_E61B_4FA4_A6DA_3BE65715992E
#define B61ABFFB_E61B_4FA4_A6DA_3BE65715992E

#include "main.h"
#include "Student.h"
#include "PartTimeStudent.h"

using namespace std;

class Department {
private:
    string departmentName;
    vector<Student*> students;
public:
    Department(string name) : departmentName(name) {}

    void addStudent(Student* student);

    Student* findStudentWithHighestEntranceScore() const;

    vector<PartTimeStudent*> getPartTimeStudentsByLocation(const string& location) const;

    vector<Student*> getStudentsWithHighAverageScore(float threshold) const;

    Student* getStudentWithHighestAverageScore() const;

    void countStudentsByEnrollmentYear() const;
};

#endif /* B61ABFFB_E61B_4FA4_A6DA_3BE65715992E */
