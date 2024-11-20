#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <algorithm>
#include <cctype>
#include <string>
#include <string_view>
#define y 121
#define ENTER 13
#define TAB 9
#define BKSP 8

using namespace std;




class Security
{
    string code;
    string status;

public:
    string generatecode(string name )
    {

        code = name.substr(0,3) + "psg" + "12";
        status = "out";

        return code;
    }

    string return_code()
    {
        return code;
    }


    void display()
    {
        cout<<"Status       :"<<status<<endl;
    }

    void modify_status()
    {
        if(status == "out")
        {
            status = "in";
        }
        else if(status == "in")
        {
            status = "out";
        }
    }
};

class staff : public Security
{
    string name;
    float salary;
    string profession;

public:
    string get_staff(string pro)
    {
        profession = pro;

            cin.ignore();

            do
            {

                cout << "Name: ";
                getline(cin,name);

            }while(1);


        cout<<"Salary:";
        cin>>salary;

        string password;

        password = generatecode(name);

        return password;
    }

    string get_name()
    {
        return name;
    }

    string get_code()
    {
        string code;

        code = return_code();

        return code;
    }

    void display()
    {
        cout<<"Name         :"<<name<<endl;
        cout<<"Profession   :"<<profession<<endl;

        Security :: display();
    }
};

class teacher : public staff
{
    string department;

public:
    void get_teacher()
    {
        string password;

        password = get_staff("Teacher");

        do
        {
            cout<<"Department:";
            cin>>department;

            if(department != "amcs" && department != "AMCS" )
            {
                cout<<"No department named "<<department<<endl;
            }

        }while(department != "amcs" && department != "AMCS");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember your code!!"<<endl;
        Sleep(5000);

    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Department   :"<<department<<endl;
    }
};

class works : public staff
{
    string block;

public:
    void get_works()
    {
        string password;

        password = get_staff("Worker");

        do
        {
            cout<<"Block Name:";
            cin>>block;

            if(block != "A" && block != "B" && block != "C" && block != "D")
            {
                cout<<"No Block Named "<<block<<endl;
            }
        }while(block != "A" && block != "B" && block != "C" && block != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Block        :"<<block<<endl;
    }
};

class watch_man : public staff
{
    string gate_name;

public:
    void get_watchman()
    {
        string password;

        password = get_staff("Watch Man");

        do
        {
            cout<<"Gate Name:";
            cin>>gate_name;

            if(gate_name != "A" && gate_name != "B" && gate_name != "C")
            {
                cout<<"NO Gate Named "<<gate_name<<endl;
            }
        }while(gate_name != "A" && gate_name != "B" && gate_name != "C");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Gate Name    :"<<gate_name<<endl;
    }
};

class librarian : public staff
{
    int floor_number;

public:
    void get_librarian()
    {
        string password;

        password = get_staff("Librarian");

        do
        {
            cout<<"Floor Number:";
            cin>>floor_number;

            if(floor_number != 1 && floor_number != 2 && floor_number != 3 && floor_number != 4)
            {
                cout<<"No floor numbered"<<floor_number<<endl;
            }
        }while(floor_number != 1 && floor_number != 2 && floor_number != 3 && floor_number != 4);

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Floor Number :"<<floor_number<<endl;
    }
};

class driver : public staff
{
    string bus_name;

public:
    void get_driver()
    {
        string password;

        password = get_staff("Driver");

        do
        {
            cout<<"Bus Name:";
            cin>>bus_name;

            if(bus_name != "A" && bus_name != "B" && bus_name != "C" && bus_name != "D")
            {
                cout<<"No Bus with name"<<bus_name<<endl;
            }
        }while(bus_name != "A" && bus_name != "B" && bus_name != "C" && bus_name != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Bus Name     :"<<bus_name<<endl;
    }
};

class student : public Security
{
    string name;
    string course;
    int rollnumber;


public:
    string get_student()
    {
        string password;

            cin.ignore();

            do
            {

                cout << "Name: ";
                getline(cin,name);

            }while(1);


        cout<<"Roll Number:";
        cin>>rollnumber;

        do
        {
            cout<<"Course:";
            cin>>course;

            if(course != "ds" && course != "ss" )
            {
                cout<<"No Course named "<<course<<endl;
            }

        }while(course != "ds" && course != "ss");

        cin.ignore();


        password = generatecode(name);

        return password;
    }

    string get_name()
    {
        return name;
    }

    string get_code()
    {
        string code;

        code = return_code();

        return code;
    }

    void display()
    {
        cout<<"Name         :"<<name<<endl;
        cout<<"Course       :"<<course<<endl;

        Security :: display();
    }

};

class hosteller : public student
{
    string block_name;

public:

    void get_hosteller()
    {
        string password;

        password = get_student();

        do
        {
            cout<<"Hostel Block Name:";
            cin>>block_name;

            if(block_name != "A" && block_name != "B" && block_name != "C" && block_name != "D")
            {
                cout<<"No Block Named "<<block_name<<endl;
            }
        }while(block_name != "A" && block_name != "B" && block_name != "C" && block_name != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = student :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = student :: get_code();

        return code;
    }
};

class non_hosteller : public student
{
public:
    void get_nonhosteller()
    {
        string password;

        password = get_student();

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = student :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = student :: get_code();

        return code;
    }
};






int main()
{//closed
    teacher t;
    works w;
    watch_man wm;
    librarian l;
    driver d;
    hosteller h;
    non_hosteller nh;

    while(1)
    {//closed
        int choice;
        system("color 0F0");
        system("cls");

        cout<<"Enter '0' to exit"<<endl;
        cout<<"1.Admin\n2.User\nEnter your choice:";
        cin>>choice;

        if(choice == 1)
        {//closed
            system("cls");
            string name_admin;
            string pass_admin;

            cin.ignore();

            do
            {//closed

                cout << "Admin Name : ";
                getline(cin,name_admin);
                if(isValidName(name_admin))
                {//closed
                    break;
                }
                else
                {
                    cout<<"Enter a Valid Name!!"<<endl;
                }
            }while(1);

            if(name_admin == "Partha")
            {//closed
                int i = 0;
                do
                {//closed
                    string passadmin;

                    cout<<"Password:";

                    char temp = '\0';

                    while(temp != '\r')
                    {//closed
                        temp = getch();
                        if(temp == '0')
                        {//closed
                            switch(getch())
                            {
                                default:
                                    break;
                            };
                        }
                        else if(temp == '\b')
                        {
                            if(passadmin.size() != 0)
                            {
                                cout << "\b \b";
                                passadmin.erase(passadmin.size() - 1, 1);
                            }
                            continue;
                        }
                        else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '\0')
                        {
                            passadmin += temp;
                            cout << "*";
                        }
                        else
                            continue;
                    }

                    cout<<pass_admin<<endl;


                    if(passadmin == "partha23")
                    {
                        pass_admin = passadmin;
                        system("cls");
                        cout<<"Logging";
                        Sleep(500);
                        cout << ". ";
                        Sleep(500);
                        cout << ". ";
                        Sleep(500);
                        cout << ". ";
                        Sleep(500);
                        break;
                    }
                    else
                    {
                        cout<<"\nWrong password"<<endl;
                        continue;
                    }
                }while(i < 5);

                if(i == 5)
                {
                    cout<<"Sorry, admin is locked"<<endl;
                }
                else
                {//closed

                    if(pass_admin == "partha23")
                    {

                        while(1)
                        {
                        int ch;
                        system("cls");
                        cout<<"Enter '0' to exit"<<endl;
                        cout<<"1.Staff\n2.Student"<<endl;
                        cin>>ch;

                        if(ch == 1)
                        {

                            while(1)
                            {
                                int c;

                                system("cls");
                                cout<<"Enter '0' to exit"<<endl;
                                cout<<"1.Professor\n2.Worker\n3.Watch Man\n4.Librarian\n5.Driver"<<endl;
                                cin>>c;

                                if(c == 1)
                                {

                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.View\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {
                                            system("cls");

                                            f.open("teacher.bin",ios :: out | ios :: app );

                                            t.get_teacher();
                                            f.write((char*)&t , sizeof(t));

                                            f.close();
                                        }
                                        else if(C == 2)
                                        {

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("teacher.bin" , ios :: in);
                                            ofstream fout("temp.bin");


                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&t , sizeof(t));
                                                    if(t.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&t , sizeof(t));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("teacher.bin");
                                            rename("temp.bin" , "teacher.bin");
                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cout<<"Name:";
                                            cin>>name;

                                            f.open("teacher.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&t , sizeof(t));
                                                    if(t.get_name() == name)
                                                    {
                                                        system("cls");
                                                        t.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }
                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }

                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }
                                    }
                                }

                                else if(c == 2)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {

                                            system("cls");

                                            f.open("worker.bin",ios :: out | ios :: app);

                                            w.get_works();
                                            f.write((char*)&w , sizeof(w));

                                            f.close();
                                        }

                                        else if(C == 2)
                                        {
                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("worker.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)& w, sizeof(w));
                                                    if(w.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&w , sizeof(w));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("worker.bin");
                                            rename("temp.bin" , "worker.bin");


                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("worker.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&w , sizeof(w));
                                                    if(w.get_name() == name)
                                                    {
                                                        system("cls");
                                                        w.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }
                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }
                                    }
                                }

                                else if(c == 3)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {
                                            system("cls");

                                            f.open("watch man.bin",ios :: out | ios :: app);

                                            wm.get_watchman();
                                            f.write((char*)&wm , sizeof(wm));

                                            f.close();
                                        }

                                        else if(C == 2)
                                        {

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("watch man.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&wm , sizeof(wm));
                                                    if(wm.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&wm , sizeof(wm));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("watch man.bin");
                                            rename("temp.bin" , "watch man.bin");


                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("watch man.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&wm , sizeof(wm));
                                                    if(wm.get_name() == name)
                                                    {
                                                        system("cls");
                                                        wm.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }

                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }

                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }
                                    }
                                }


                                else if(c == 4)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {
                                            system("cls");

                                            f.open("librarian.bin",ios :: out | ios :: app);

                                            l.get_librarian();
                                            f.write((char*)&l , sizeof(l));

                                            f.close();
                                        }

                                        else if(C == 2)
                                        {

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("librarian.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&l , sizeof(l));
                                                    if(l.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&l , sizeof(l));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("librarian.bin");
                                            rename("temp.bin" , "librarian.bin");

                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("librarian.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&l , sizeof(l));
                                                    if(l.get_name() == name)
                                                    {
                                                        system("cls");
                                                        l.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }

                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }

                                    }
                                }

                                else if(c == 5)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {

                                            system("cls");

                                            f.open("driver.bin",ios :: out | ios :: app);

                                            d.get_driver();
                                            f.write((char*)&d , sizeof(d));

                                            f.close();
                                        }

                                        else if(C == 2)
                                        {


                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("driver.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&d , sizeof(d));
                                                    if(d.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&d , sizeof(d));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("driver.bin");
                                            rename("temp.bin" , "driver.bin");

                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("driver.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&d , sizeof(d));
                                                    if(d.get_name() == name)
                                                    {
                                                        system("cls");
                                                        d.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }

                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }
                                    }
                                }

                                else if(c == 0)
                                {
                                    break;
                                }
                            }
                        }

                        else if(ch == 2)
                        {
                            while(1)
                            {
                                int c;

                                system("cls");
                                cout<<"Enter '0' to exit"<<endl;
                                cout<<"\n1.Hosteller\n2.Non Hosteller"<<endl;
                                cout<<"Enter the choice:";
                                cin>>c;

                                if(c == 1)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {
                                            system("cls");

                                            f.open("hosteller.bin",ios :: out | ios :: app);

                                            h.get_hosteller();

                                            f.write((char*)&h , sizeof(h));

                                            f.close();

                                        }

                                        else if(C == 2)
                                        {

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("hosteller.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&h , sizeof(h));
                                                    if(h.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&h , sizeof(h));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("hosteller.bin");
                                            rename("temp.bin" , "hosteller.bin");


                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("hosteller.bin" , ios :: in);

                                             while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&h , sizeof(h));
                                                    if(h.get_name() == name)
                                                    {
                                                        system("cls");
                                                        h.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        flag = 1;
                                                    }
                                                }
                                            }

                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {
                                            break;
                                        }
                                    }
                                }


                                else if(c == 2)
                                {
                                    while(1)
                                    {
                                        int C;

                                        system("cls");
                                        cout<<"Enter '0' to exit"<<endl;
                                        cout<<"1.Insert\n2.delete\n3.view\nEnter the choice:";
                                        cin>>C;
                                        if(C == 1)
                                        {
                                            system("cls");

                                            f.open("nonhosteller.bin",ios :: out | ios :: app);

                                            nh.get_nonhosteller();
                                            f.write((char*)&nh , sizeof(nh));

                                            f.close();
                                        }

                                        else if(C == 2)
                                        {


                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("nonhosteller.bin" , ios :: in);
                                            ofstream fout("temp.bin");

                                            while(true)
                                            {
                                                if(!f)
                                                    break;
                                                else
                                                {

                                                    f.read((char*)&nh , sizeof(nh));
                                                    if(nh.get_name() == name)
                                                    {
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        fout.write((char*)&nh , sizeof(nh));
                                                    }
                                                }

                                            }

                                            f.close();
                                            fout.close();

                                            remove("nonhosteller.bin");
                                            rename("temp.bin" , "nonhosteller.bin");


                                        }

                                        else if(C == 3)
                                        {
                                            int flag = 0;

                                            system("cls");

                                            string name;

                                            cin.ignore();

                                            do
                                            {

                                                cout << "Name: ";
                                                getline(cin,name);
                                                if(isValidName(name))
                                                {
                                                    break;
                                                }
                                                else
                                                {
                                                    cout<<"Enter a Valid Name!!";
                                                }
                                            }while(1);

                                            f.open("nonhosteller.bin" , ios :: in);

                                             while(true)
                                            {//closed
                                                if(!f)
                                                    break;
                                                else
                                                {//closed

                                                    f.read((char*)&nh , sizeof(nh));
                                                    if(nh.get_name() == name)
                                                    {//closed
                                                        system("cls");
                                                        nh.display();
                                                        Sleep(5000);
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {//closed
                                                        flag = 1;
                                                    }
                                                }
                                            }

                                            if(flag == 1)
                                            {
                                                cout<<"User not found!!"<<endl;
                                                Sleep(5000);
                                            }
                                            f.close();
                                        }

                                        else if(C == 0)
                                        {//closed
                                            break;
                                        }

                                    }
                                }


                                else if(c == 0)
                                {//closed
                                    break;
                                }
                            }
                        }
                        else if(ch == 0)
                        {//closed
                            break;
                        }
                    }
                }

            }
            }

            else
            {//closed
                system("cls");
                cout<<"Sorry ,Admin Name not found!!!"<<endl;
                Sleep(5000);
            }
        }

       else if(choice == 2)
       {
           while(1)
            {
                system("cls");
                int ch;
                cout<<"Enter '0' to exit"<<endl;
                cout<<"1.Staff\n2.Student"<<endl;
                cin>>ch;

                if(ch == 1)
                {
                    while(1)
                    {
                        int c;

                        system("cls");
                        cout<<"Enter '0' to exit"<<endl;
                        cout<<"1.Professor\n2.Worker\n3.Watch Man\n4.Librarian\n5.Driver"<<endl;
                        cin>>c;

                        if(c == 1)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("teacher.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                                if(temp == '0')
                                {
                                    switch(getch())
                                    {
                                        default:
                                            break;
                                    };
                                }
                                else if(temp == '\b')
                                {
                                    if(password.size() != 0)
                                    {
                                        cout << "\b \b";
                                        password.erase(password.size() - 1, 1);
                                    }
                                    continue;
                                }
                                else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                                {
                                    password += temp;
                                    cout << "*";
                                }
                                else
                                    continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&t , sizeof(t));
                                if(t.get_name() == name && t.get_code() == password)
                                {
                                    system("cls");
                                    t.display();
                                    Sleep(5000);
                                    t.modify_status();
                                    fout.write((char*)&t , sizeof(t));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("teacher.bin");
                            rename("temp.bin" , "teacher.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }

                        }

                        else if(c == 2)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("worker.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                            if(temp == '0')
                            {
                                switch(getch())
                                {
                                    default:
                                        break;
                                };
                            }
                            else if(temp == '\b')
                            {
                                if(password.size() != 0)
                                {
                                    cout << "\b \b";
                                    password.erase(password.size() - 1, 1);
                                }
                                continue;
                            }
                            else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                            {
                                password += temp;
                                cout << "*";
                            }
                            else
                                continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&w , sizeof(w));
                                if(w.get_name() == name && w.get_code() == password)
                                {
                                    system("cls");
                                    w.display();
                                    Sleep(5000);
                                    w.modify_status();
                                    fout.write((char*)&w , sizeof(w));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("worker.bin");
                            rename("temp.bin" , "worker.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }


                        }

                        else if(c == 3)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("watch man.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                            if(temp == '0')
                            {
                                switch(getch())
                                {
                                    default:
                                        break;
                                };
                            }
                            else if(temp == '\b')
                            {
                                if(password.size() != 0)
                                {
                                    cout << "\b \b";
                                    password.erase(password.size() - 1, 1);
                                }
                                continue;
                            }
                            else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                            {
                                password += temp;
                                cout << "*";
                            }
                            else
                                continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&wm , sizeof(wm));
                                if(wm.get_name() == name && wm.get_code() == password)
                                {
                                    system("cls");
                                    wm.display();
                                    Sleep(5000);
                                    wm.modify_status();
                                    fout.write((char*)&wm , sizeof(wm));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("watch man.bin");
                            rename("temp.bin" , "watch man.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }
                        }

                        else if(c == 4)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("librarian.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                                if(temp == '0')
                                {
                                    switch(getch())
                                    {
                                        default:
                                            break;
                                    };
                                }
                                else if(temp == '\b')
                                {
                                    if(password.size() != 0)
                                    {
                                        cout << "\b \b";
                                        password.erase(password.size() - 1, 1);
                                    }
                                    continue;
                                }
                                else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                                {
                                    password += temp;
                                    cout << "*";
                                }
                                else
                                    continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&l , sizeof(l));
                                if(l.get_name() == name && l.get_code() == password)
                                {
                                    system("cls");
                                    l.display();
                                    Sleep(5000);
                                    l.modify_status();
                                    fout.write((char*)&l , sizeof(l));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("librarian.bin");
                            rename("temp.bin" , "librarian.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }
                        }


                        else if(c == 5)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("driver.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                            if(temp == '0')
                            {
                                switch(getch())
                                {
                                    default:
                                        break;
                                };
                            }
                            else if(temp == '\b')
                            {
                                if(password.size() != 0)
                                {
                                    cout << "\b \b";
                                    password.erase(password.size() - 1, 1);
                                }
                                continue;
                            }
                            else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                            {
                                password += temp;
                                cout << "*";
                            }
                            else
                                continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&d , sizeof(d));
                                if(d.get_name() == name && d.get_code() == password)
                                {
                                    system("cls");
                                    d.display();
                                    Sleep(5000);
                                    d.modify_status();
                                    fout.write((char*)&d , sizeof(d));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("driver.bin");
                            rename("temp.bin" , "driver.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }
                        }

                        else if(c == 0)
                        {
                            break;
                        }
                    }
                }
                else if(ch == 2)
                {
                    while(1)
                    {
                        int c;

                        system("cls");
                        cout<<"Enter '0' to exit"<<endl;
                        cout<<"\n1.Hosteller\n2.Non Hosteller"<<endl;
                        cout<<"Enter the choice:";
                        cin>>c;

                        if(c == 1)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("hosteller.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                            if(temp == '0')
                            {
                                switch(getch())
                                {
                                    default:
                                        break;
                                };
                            }
                            else if(temp == '\b')
                            {
                                if(password.size() != 0)
                                {
                                    cout << "\b \b";
                                    password.erase(password.size() - 1, 1);
                                }
                                continue;
                            }
                            else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                            {
                                password += temp;
                                cout << "*";
                            }
                            else
                                continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&h , sizeof(h));
                                if(h.get_name() == name && h.get_code() == password)
                                {
                                    system("cls");
                                    h.display();
                                    Sleep(5000);
                                    h.modify_status();
                                    fout.write((char*)&h , sizeof(h));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("hosteller.bin");
                            rename("temp.bin" , "hosteller.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }

                        }


                        else if(c == 2)
                        {
                            system("cls");
                            int flag = 0;

                            f.open("nonhosteller.bin",ios :: in);

                            string name;
                            string password;

                            cin.ignore();

                            do
                            {

                                cout << "Name: ";
                                getline(cin,name);
                                if(isValidName(name))
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<"Enter a Valid Name!!";
                                }
                            }while(1);

                            cout<<"Password:";

                            char temp = '/0';
                            while(temp != '\r')
                            {
                                temp = getch();
                            if(temp == '0')
                            {
                                switch(getch())
                                {
                                    default:
                                        break;
                                };
                            }
                            else if(temp == '\b')
                            {
                                if(password.size() != 0)
                                {
                                    cout << "\b \b";
                                    password.erase(password.size() - 1, 1);
                                }
                                continue;
                            }
                            else if(temp <= '9' && temp >= '0' || temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' && temp != '/0')
                            {
                                password += temp;
                                cout << "*";
                            }
                            else
                                continue;
                            }

                            ofstream fout("temp.bin");

                            while(f)
                            {
                                f.read((char*)&nh , sizeof(nh));
                                if(nh.get_name() == name && nh.get_code() == password)
                                {
                                    system("cls");
                                    nh.display();
                                    Sleep(5000);
                                    nh.modify_status();
                                    fout.write((char*)&nh , sizeof(nh));
                                    flag = 0;
                                    break;
                                }
                                else
                                {
                                    flag = 1;
                                }
                            }

                            fout.close();
                            f.close();

                            remove("nonhosteller.bin");
                            rename("temp.bin" , "nonhosteller.bin");

                            if(flag == 1)
                            {
                                cout<<"No User Found"<<endl;
                                Sleep(5000);
                            }
                        }
                        else if(c == 0)
                        {
                            break;
                        }
                    }
                }

                else if(ch == 0)
                {
                    break;
                }
            }
       }



       else if(choice == 0)
       {
            system("cls");
            cout<<"Exiting";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);

            system("cls");
            cout<<"Exiting";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            break;
       }
    }
}


