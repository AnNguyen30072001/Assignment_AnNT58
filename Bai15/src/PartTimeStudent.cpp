#include "main.h"

using namespace std;

PartTimeStudent::PartTimeStudent(const PartTimeStudent& other) : Student(other) {
    trainingLocation = other.trainingLocation;
}

string PartTimeStudent::getTrainingLocation() {
    return trainingLocation;
}