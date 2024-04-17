// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream fp;
//     fp.open("output.txt",ios::out);
//     if(fp)
//     {
//         fp<<"Iamneo.ai";
//         fp<<"Lovely Professional University"<<endl;
//         fp<<"C++ Tutorial"<<endl;
//         fp<<"Object Oriented Programing"<<endl;
//     }
//     else{
//         cout<<"Error Occured while Opening File"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream myfile;
//     ifstream myfile;
//     char ch[30];
//     char text;
//     cout<<"Enter some Text here: "<<endl;
//     cin.getline(ch,30);
//     myfile.open("output.txt",ios::out);
//     if(myfile)
//     {
//         myfile<<ch;
//         cout<<"Data store sucessfull"<<endl;
//     }
//     else cout<<"Error while opening file."<<endl;
//     myfile.close();
//     myfile.open()
//     return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    private:
    char name[30];
    char emp_id[20];
    char join_dt[20];
    char position[20];
    char maririal_st[20];
    char age[10];
    char salary[20];
    char comment[80];
    public:
    void getEmp_data()
    {
        cout<<"Welcome to InfoBrother:"<<endl;
        cout<<"======================"<<endl;
        cout<<"\nEmployee Name: ";
        cin.getline(name,30);
        cout<<"Employee ID: ";
        cin.getline(emp_id,20);
        cout<<"Joining Date: (DD/MM/YYYY) ";
        cin.getline(join_dt,20);
        cout<<"Position: ";
        cin.getline(position,20);
        cout<<"Single/Married: ";
        cin.getline(maririal_st,20);
        cout<<"Employee Age: ";
        cin.getline(age,20);
        cout<<"Comment: ";
        cin.getline(age,80);
    }
    void showemp_data()
    {
        cout<<"\n\n***Empoyee Data***"<<endl;
        cout<<"======================="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Posiiton: "<<position<<endl;
        cout<<"Date of Joining: "<<join_dt<<endl;
        cout<<"Age of Employee: "<<age<<endl;
        cout<<"Total Salary: ₹ "<<salary<<endl;
        cout<<"Maririal Status: "<<maririal_st<<endl;
        cout<<"Comment: "<<comment<<endl;
    }
};
class Library
{
    public:
    Employee Emp;
    fstream fp, fp1;
    void writeEmployee()
    {
        fp.open("Employee.txt",ios::out);
        if(fp)
        {
            Emp.getEmp_data();
            fp.write((char*)&Emp, sizeof(Emp));
            cout<<"Record Store Sucessfully!"<<endl;
        }
        fp.close();
    }
    void W_displayEmp()
    {
        fp.open("Employee.txt",ios::in);
        if(fp)
        {
            while(fp.read((char*)&Emp, sizeof(Emp)))
            {
                Emp.showemp_data();
            }
        }
    }
};
int main()
{
    Library lib;
    lib.writeEmployee();
    lib.W_displayEmp();
    return  0;
}