/*
	Assignment 3: checking students have attended the training program or not.
*/
#include<iostream>//Header file 
#include<cstring>
using namespace std;

class student
{
public:
    int rollno;
    string name,branch,div,tn;

    void accept()//Accepting th data from the user
    {
        cout << "Enter the roll no of the student: ";
        cin >> rollno;
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the branch of the student: ";
        cin >> branch;
        cout << "Enter the class of the student: ";
        cin >> div;
        cout << "Enter the name of training program which student have done: ";
        cin >> tn;
    }

    void display()//Display the data of the student
    {
        cout << "\n\nThe roll no of the student is: "<<rollno<<endl;
        cout << "The name of the student is: "<<name<<endl;
        cout << "The branch of the student is: "<<branch<<endl;
        cout << "The class of the student is: "<<div<<endl;
        cout << "The name of training program which student have attended is: "<<tn<<endl;
       
    }

    static void linearsearch(int n,int r,student s[])//Searching the student present for the training program or not using linear search
    {
        int i;
        int flag=0;
        for(int i=0;i<n;i++)
        {
           if(s[i].rollno==r)
           {
               flag=1;
               cout<<"\nThe Data of the student who attended the training program is :"<<endl;
               s[i].display();
            }
        }      
        if(flag==0)
        {
            cout<<"\nStudent was not present for the training program.\n";
        }
    }
    
    void bubblesort(int n, student s[])//code for bubble sort
    {
        int t1;
        string t2,t3,t4,t5;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (s[j].rollno > s[j + 1].rollno)
                {
                    t1 = s[j].rollno;
                    s[j].rollno = s[j + 1].rollno;
                    s[j + 1].rollno = t1;

                    t2 = s[j].name;
                    s[j].name = s[j + 1].name;
                    s[j + 1].name = t2;
                    
                    t3 = s[j].branch;
                    s[j].branch = s[j + 1].branch;
                    s[j + 1].branch = t3;
                    
                    t4 = s[j].div;
                    s[j].div = s[j + 1].div ;
                    s[j + 1].div = t4;
                    
                    t5 = s[j].tn;
                    s[j].tn = s[j + 1].tn;
                    s[j + 1].tn = t5;
                }
            }
        }
    }
    
    static void binarysearch(int n,int r,student s[])//searchin with binary search function
    {
        int low = 0, high = n - 1;
        int flag=0;
   
        while(low<=high)
        {
            int mid =(high + low)/ 2;
   
            if (s[mid].rollno == r)
            {
                cout<<"\nThe Data of the student who attended the training program is :\n"<<endl;
                s[mid].display();
                flag=1;
                break;
            }
                           
            else if (s[mid].rollno < r)
                low = mid + 1;      
            else
                high = mid - 1; 
                   
        }
        if(flag==0)
        {
            cout<<"\nStudent was not present for the training program.\n";
        }
    }
   
}s[100];

int main()//Main function
{
 
    int n;
    int r;
    int choice;

    while (true)
    {
        cout << "\n\n--- Menu ---";
        cout << "\n1. Add the data of students who attended the training program";
        cout << "\n2. Display the data of students who attended the training program";
        cout << "\n3. Search wheather the perticular student attented the training program or not with linear search";
        cout << "\n4. Search wheather the perticular student attented the training program or not with linear search";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the number of students who attended the training program:";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    s[i].accept();
                }
                break;

            case 2:
                cout<<"\nThe data of students who attended the training program is as follows:"<<endl;
                for (int i = 0; i < n; i++)
                {
                    s[i].display();
                }
                break;


            case 3:
                cout<<"\nEnter the roll no of student to check he/she attended the training program or not:";
                cin>>r;
                student::linearsearch(n,r,s);
                break;
           
            case 4:
                n = sizeof(s) / sizeof(s[0]);
                cout<<"\nEnter the roll no of student to check he/she attended the training program or not:";
                cin>>r;
                for (int i = 0; i < n; i++)
                {
                    s[i].bubblesort(n, s);
                }
                student::binarysearch(n,r,s);
                break;

            case 5 :
                cout << "\nExiting program.\n";
                return 0;

            default:
                cout << "\nInvalid choice. Please enter a number between 1 and 4.";
        }
    }
}
