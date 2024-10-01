/*
	Assignment 4: checking weather the string is palindrome or not.
*/
#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class palindrome 
{
    int top;
    char arr[MAX]; 
public:
	palindrome() 
	{ 
		top = -1; 
	} 

	bool push(char c) 
	{
        	if (top >= MAX - 1) 
        	{
			cout << "Stack overflow!" << endl;
			return false;
        	} 
        	else 
        	{
            		top+=1;
			arr[top] = c;
			return true;
        	}
    	}

    	bool isEmpty() 
    	{
        	return (top < 0);
    	}
    	
    	bool ispalindrome(string str) 
	{
		top=-1;
	    	int n = str.length();


	    	for (int i = 0; i < n; i++) 
	    	{
			if(isalpha(str[i]))
			{
				str[i] = (char) tolower(str[i]);
				push(str[i]);
			}
	    	}
	    	
	    	for (int i = 0; i < n; i++) 
	    	{
            		if (isalpha(str[i])) 
            		{
                		if (arr[top] != str[i]) 
                		{
                    			return false;
                		}
                		top--; 
            		}
        	}
        	return true;
	}
	
	void reverse(string str) 
	{
		top = -1;
		int n = str.length();

	     
		for (int i = 0; i < n; i++) 
		{
		    push(str[i]);
		}

	      
		while (!isEmpty()) 
		{
		    cout << arr[top];
		    top--;
		}
		cout << endl;
	 }
};


int main() 
{
	string a;
    	int choice;
    	palindrome stack;

    	cout << "Enter a string: ";
    	getline(cin, a);

	cout << "Reversed string: ";
	stack.reverse(a);
	
	if (stack.ispalindrome(a)) 
	{
		cout << a << " is a palindrome." << endl;
	} 
	else 
	{
		cout << a << " is not a palindrome." << endl;
	}

    	return 0;
}

