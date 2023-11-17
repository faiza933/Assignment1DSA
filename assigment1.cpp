#include <iostream>
using namespace std;

class Student {
  private:
    string studentName;
    string matrixNumber;
    float courseworkMark;
    float finalexamMark;
  public:
    Student(string sn, string mn, float cm, float fm) {
      studentName = sm;
      matrixNumber = mn;
      courseworkMark = cm;
      finalexamMark = fm;
    }
    ~Student() {
      
    }
    float getTotalMark() {
      
    }
    string getGrade() {
      float totalMark = getTotalMark();
      if(totalMark >= 75) {
        return "A";
      } else if(totalMark >= 65) {
        return "B";
      } else if(totalMark >= 55) {
        return "C";
      } else if(totalMark >= 45) {
        return "D";
      } else {
        return "E";
      }
    }
    void printResult() {
      cout<<"Name: "<<studentName<<endl;
      cout<<"Matrix Number: "<<matrixNumber<<endl;
      cout<<"Total Mark: "<<getTotalMark()<<endl;
      cout<<"Grade: "<<getGrade()<<endl;
    }
    
}

int main() {
}
