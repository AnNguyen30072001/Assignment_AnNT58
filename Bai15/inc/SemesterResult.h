#ifndef B35E61B2_10CA_4655_821C_B4D91B7C9EDE
#define B35E61B2_10CA_4655_821C_B4D91B7C9EDE

#include "main.h"

using namespace std;

class SemesterResult {
private:
    string semesterName;
    float averageScore;
public:
    SemesterResult() = default;

    SemesterResult(string name, float score) : semesterName(name), averageScore(score) {}

    void input();

    void output() const;

    string getSemesterName() const;

    float getAverageScore() const;
};

#endif /* B35E61B2_10CA_4655_821C_B4D91B7C9EDE */
