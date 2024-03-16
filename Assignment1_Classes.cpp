#include <iostream>

class Person
{
private:
    std::string name;
    std::string gender;
    int age;

public:
    Person(std:: string n, std::string g, int a) : name(n), gender(g), age(a)
    {

    }

    void setName(std::string n)
    {
        name = n;
    }

    void setGender(std::string g)
    {
        gender = g;
    }

    void setAge(int a)
    {
        age = a;

    }

    std::string getName()
    {
        
        return name;
    }

    std::string getGender()
    {
        
        return gender;
    }

    int getAge()
    {
        return age;
    }
};

class Employee : public Person
{

private:
    float salary;
    std::string Rank;
    std::string Job;

public:
Employee(std::string n, std::string g, int a, float sal, std::string rk, std::string job) : Person(n, g, a), salary(sal), Rank(rk), Job(job)
{
    std::cout << "Constructor Created" << std::endl;
}

    void setSalary(float sal)
    {
        salary = sal;
    }

    void setRank(std::string rk)
    {
        Rank = rk;
    }

    void setJob(std::string job)
    {
        Job = job;
    }

    float getSalary()
    {
        return salary;
    }

    std::string getRank()
    {
        return Rank;
    }

    std::string getJob()
    {
        return Job;
    }

};

int main()
{

    Employee E1("Youssef Ahmed", "Male", 20, 25000, "Senior Engineer at Valeo", "Mechatronics & Robotics Engineer");

    std::string  name = E1.getName();
   int age = E1.getAge();
    std::string gender = E1.getGender();
    float salary = E1.getSalary();
    std::string rank = E1.getRank();
    std::string job = E1.getJob();
    
    std::cout << name << std::endl << age << std::endl << gender << std::endl;
    std::cout << salary << std::endl << rank << std::endl << job << std::endl; 

    
    return 0;
}