#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const int size_ = 100000;

int ids[size_];
string names[size_];
int ages[size_];
double salarys[size_];
char gender[size_];

int added = 0;

void remove_employee(){
    int id;
    cout << "Enter ID: ";
    cin >> id;
    for(int i=0;i<added;i++)
    if(ids[i] == id){
        ids[i]=-1;
    }

}
void change_salary(){
    int n_salary,id;
    cout << "Enter ID and new salary: ";
    cin >> id >> n_salary;
    cout << "\n";

    for(int i=0;i<added;i++){
        if(ids[i]== id){
            salarys[i]= n_salary;
        }
    }
}
void read_employee(){

    for(int i=0;i<added;i++){
        if(ids[i] != -1)
        cout <<"***************************\n" <<"ID: "<<ids[i]<<"\n"<<"Name: "<<names[i]<<"\n"<<"Age: "<<ages[i]<<"\n"<<"Salary: "<<salarys[i]<<"\n"<<"Gender: "<<gender[i]<<"\n***************************\n";
    }

}

void add_employee(){

    cout << "Enter ID: ";
    cin >> ids[added];
    cout << "Enter name: ";
    cin >> names[added];
    cout << "Enter age: ";
    cin >> ages[added];
    cout << "Enter salary: ";
    cin >> salarys[added];
    cout << "Enter gender (M/F): ";
    cin >> gender[added];
    cout << "\n";

    added++;

}

int menu(){
    int choice = -1;
    while(choice == -1){
        cout << "Enter your choice: \n";
        cout << "1) Add an employee \n";
        cout << "2) Read employees \n";
        cout << "3) Remove an employee \n";
        cout << "4) Change employee's salary \n";
        cout << "5) Exit \n";

        cin >> choice;

        if(!(choice >= 1 && choice <= 5)){
            cout << "Wrong choice, please enter you choice: \n";
            choice = -1;
        }
    }
    return choice;
}

void employee_system(){

    while(true){
       int choice = menu();
       if(choice == 1){
            add_employee();
       }else if(choice == 2){
            read_employee();
       }else if(choice == 3){
            remove_employee();
       }else if(choice == 4){
            change_salary();
       }else{
            break;
       }
    }
}


int main()
{
    employee_system();
    return 0;
}
