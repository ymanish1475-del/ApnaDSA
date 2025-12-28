  #include <iostream>
  #include<string>
  using namespace std;

    class Teacher{
    //propertirs /attributes
    private:
           double salary;
    public:
    string name;
    string subject;
    string dept;
  

    //methods /meber function
    void changeDept(string newDept){
        dept = newDept;
    }
    //
    //setter

    void setSalary( double s){
        salary =s;
    }
    //getter

    double getSalary(){
        return salary ;
    }


  };
  class Student{
    private: 
          int rollNumber;
    public:
            string name;
            string branch;
            float cgpa;
          
            int pakage;
    void setrollNumber(int r){
        rollNumber = r;

    }
    int getrollNumber(){
        return rollNumber;
    }
    
    //    int cgpa = ""



    //    string name=" sofi";
    //    string branch="cse";
    //    int cgpa = ""

  };

  int main (){
    Teacher t1;



    t1.name = "manish";
    t1.subject ="javascript";
    t1.dept = "cse";
    t1.setSalary (80000);

    cout<< t1.name << endl;
    cout<< t1.getSalary()<<endl;

    Student s1;
    s1.name="sofi";
    s1.branch="cse";
    s1.cgpa=8.5;
    s1.setrollNumber(111);
    s1.pakage=1800000;

    cout<< "name="<<s1.name<<endl;
     cout<< "branch="<<s1.branch<<endl;
      cout<< "rollNumber="<<s1.getrollNumber()<<endl;
       cout<< "cgpa="<<s1.cgpa<<endl;
        cout<< "pakage="<<s1.pakage<<endl;



    Teacher t2;
    Teacher t3;
    Teacher t4;
    Teacher t5;
    return 0;
  }
