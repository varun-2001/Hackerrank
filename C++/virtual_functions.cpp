// https://www.hackerrank.com/challenges/virtual-functions/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
protected:
    string name;
    int age, cur_id;
    static int next_id;

public:
    virtual void getData(){};
    virtual void putData(){};
};

class Professor:public Person{
    public :
    int publications;
    static int cur_id;

    Professor(){
        cur_id+=1;
    }

    void getData(){
        cin>>name>>age>>publications;
    }
    void putData(){
        cout<<name<<age<<publications<<cur_id;
    }
};

class Student:public Person{
    public:
    int marks[6];
    static int cur_id;

    Student(){
        cur_id+=1;
    }

    void getData(){
        cin>>name>>age;
        for (int i=0;i<6;i++)
        cin>>marks[i];
    }

    void putData(){
        int tot=0;
        for (int i=0;i<6;i++)
        tot+=marks[i];
        cout<<name<<age<<tot<<cur_id;
    }
};

int main()
{
    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getData(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putData(); // Print the required output for each object.

    return 0;
}
