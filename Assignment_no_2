/*
	Assignment 2: Book Shop.
*/
#include <iostream>
#include <cstring>
using namespace std;

class bookinfo
{
public:
    int cost;
    string bookname;

    void accept()
    {
        cout << "Enter the book name: ";
        cin >> bookname;
        cout << "Enter the cost of book: ";
        cin >> cost;
    }

    void display()
    {
        cout << "\n"<<bookname<<"\t\t"<<cost;
        
    }

    void bubblesort(int n, bookinfo b[])
    {
        int t1;
        string t2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (b[j].cost < b[j + 1].cost)
                {
                    t1 = b[j].cost;
                    b[j].cost = b[j + 1].cost;
                    b[j + 1].cost = t1;

                    t2 = b[j].bookname;
                    b[j].bookname = b[j + 1].bookname;
                    b[j + 1].bookname = t2;
                }
            }
        }
    }

    static void costless(int n, bookinfo b[])
    {
        cout << "\n\nThe books whose cost is less than 500 are:" << endl;
        cout << "Bookname\tCost"<<endl;
        for (int i = 0; i < n; i++)
        {
            if (b[i].cost < 500)
            {
                b[i].display();
                cout << "\n";
            }
        }
    }
/*static void duplicate(int n, bookinfo b[], bookinfo c[])
{ int k=0,j;

     for(int i=0;i<n;i++)
     {
      for(j=0;j<k; j++)
            {
            if(b[i].bookname==c[j].bookname)
            {
            break;
            }
            }
            if(j==k)
            {
              c[k].bookname=b[i].bookname;
              c[k].cost= b[i].cost;
            k++;
            }
     }
     for(int i=0;i<k;i++)
     {
       cout<<c[i].bookname;
       cout<<c[i].cost;
     }
}
static void duplicate2(int n, bookinfo b[])
{ int k=0,j;

     for(int i=0;i<n;i++)
     {
      for(j=0;j<k; j++)
            {
            if(b[i].bookname==b[j].bookname)
            {
            break;
            }
            }
            if(j==k)
            {
              b[k].bookname=b[i].bookname;
              b[k].cost= b[i].cost;
            k++;
            }
     }
     for(int i=0;i<k;i++)
     {
       cout<<b[i].bookname;
       cout<<b[i].cost;
     }
}*/
    void delete_duplicateentry(int &n, bookinfo b[])
    {
     	if (n <= 1) return;

        bookinfo temp[10];
        int uniqueCount = 0;
        for (int i = 0; i < n; i++)
        {
            bool isDuplicate = false;
            for (int j = 0; j < uniqueCount; j++)
            {
                if (b[i].bookname == temp[j].bookname)
                {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate)
            {
                temp[uniqueCount] = b[i];
                uniqueCount++;
            }
        }
        n = uniqueCount;
        for (int i = 0; i < uniqueCount; i++)
        {
            b[i] = temp[i];
        }
    }

    void delete_duplicate_inplace(int &n, bookinfo b[])
    {
        int uniqueCount = 0;
        for (int i = 0; i < n; i++)
        {
            bool isDuplicate = false;
            for (int j = 0; j < i; j++)
            {
                if (b[i].bookname == b[j].bookname)
                {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate)
            {
                b[uniqueCount] = b[i];
                uniqueCount++;
            }
        }
        n = uniqueCount;
    }
    
    

static void duplicate(int n, bookinfo b[], bookinfo c[])
{ int k=0,j;

     for(int i=0;i<n;i++)
     {
      for(j=0;j<k; j++)
            {
            if(b[i].bookname==c[j].bookname)
            {
            break;
            }
            }
            if(j==k)
            {
              c[k].bookname=b[i].bookname;
              c[k].cost= b[i].cost;
            k++;
            }
     }
     for(int i=0;i<k;i++)
     {
       cout<<c[i].bookname;
       cout<<c[i].cost;
     }
}
static void duplicate2(int n, bookinfo b[])
{ int k=0,j;

     for(int i=0;i<n;i++)
     {
      for(j=0;j<k; j++)
            {
            if(b[i].bookname==b[j].bookname)
            {
            break;
            }
            }
            if(j==k)
            {
              b[k].bookname=b[i].bookname;
              b[k].cost= b[i].cost;
            k++;
            }
     }
     for(int i=0;i<k;i++)
     {
       cout<<b[i].bookname;
       cout<<b[i].cost;
     }
}


    static void count(int n, bookinfo b[])
    {
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i].cost < 500)
            {
                count1 += 1;
            }
            else
            {
                count2 += 1;
            }
        }
        cout << "\n\nThe number of books whose cost is less than 500 is: " << count1;
        cout << "\n\nThe number of books whose cost is greater than 500 is: " << count2 << endl;
    }
};

int main()
{
    bookinfo b[10];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n\n--- Menu ---";
        cout << "\n1. Add books";
        cout << "\n2. Display books sorted by cost";
        cout << "\n3. Display books with cost less than 500";
        cout << "\n4. Delete duplicate entries (with temporary array)";
        cout << "\n5. Delete duplicate entries (without using temparary array)";
        cout << "\n6. Display the count of books based on cost";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the number of books you want to store: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    b[i].accept();
                }
                break;

            case 2:
                for (int i = 0; i < n; i++)
                {
                    b[i].bubblesort(n, b);
                }
                cout << "\n\nThe books as per the descending order of their cost are:" << endl;
                cout << "Bookname\tCost"<<endl;
                for (int i = 0; i < n; i++)
                {
                    b[i].display();
                }
                break;

            case 3:
                bookinfo::costless(n, b);
                break;

            case 4:
                cout << "\nBooks after deleting duplicate entries (with temporary array):\n";
                b[0].delete_duplicateentry(n, b);
                cout << "Bookname\tCost"<<endl;
                for (int i = 0; i < n; i++)
                {
                    b[i].display();
                }
                break;

            case 5:
                cout << "\nBooks after deleting duplicate entries (in-place):\n";
                b[0].delete_duplicate_inplace(n, b);
                cout << "Bookname\tCost"<<endl;
                for (int i = 0; i < n; i++)
                {
                    b[i].display();
                }
                break;

            case 6:
                bookinfo::count(n, b);
                break;

            case 7:
                cout << "Exiting program.";
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 7.";
        }
    }
}
