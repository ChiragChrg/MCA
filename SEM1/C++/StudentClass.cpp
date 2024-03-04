# include <iostream>
using namespace std;

class Student {
    int regno,m1,m2,m3,total,avg;
    char name[20];

    public:
        void insert(int i){
            cout<<"\n---Enter details for Stundent "<<i<<"---"<<endl;
            cout<<"Enter RegNo : ";
            cin>>regno;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Marks for 3 subject : ";
            cin>>m1>>m2>>m3;
        }

        void calculate(){
            total = m1+m2+m3;
            avg = total / 3;
        }

        void display(){
            cout<<regno<<"\t\t"<<name<<"\t\t"<<m1<<"\t\t"<<m2<<"\t\t"<<m3<<"\t\t"<<total<<"\t\t"<<avg<<endl;
        }
};

int main(){
    int i,N;

    cout<<"Enter the No. of Students : ";
    cin>>N;

    Student s[N];
    for(i=0; i<N; i++){
        s[i].insert(i+1);
        s[i].calculate();
    }
    
    cout<<"\n-------------------------------------------------------------------------------------------------------\n";
    cout<<"RegNo"<<"\t\t"<<"Name"<<"\t\t"<<"Mark 1"<<"\t\t"<<"Mark 2"<<"\t\t"<<"Mark 3"<<"\t\t"<<"Total"<<"\t\t"<<"Average";
    cout<<"\n-------------------------------------------------------------------------------------------------------\n";
    for(i=0; i<N; i++)
        s[i].display();
}