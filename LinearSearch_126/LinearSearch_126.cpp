#include <iostream>
using namespace std;

int arr[20];       //Array to be searched
int n;            //Number of element
int i;            //Index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minumum 1 and maximum 20 elements. \n\n";
    }
   
    
    //Accept array elements
    cout << "\n----------------\n";
    cout << " Enter array elements \n";
    cout << "----------------------\n";
    for (i = 0; 1 < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}



void LineSearch()
{
    char ch;
    int ctr;   //Number of comparisons

    do
    {
        //Accept the number to br searched
        cout << "\nEnter the element you want to search: "; //Langkah no 1 algoritma
        int item;
        cin >> item;

        ctr = 0;
        for (i = 0; 1 < n; i++)      //Langkah no 2 & 3 & 4 algoritma
        {
            ctr++;
            if (arr[1] == item)      //Langkah no 5 algoritma
            {
                cout << "\n" << item << "found at position " << (i + 1) << endl;
                break;
            }
        }
    }
    if (i == n)               //Langkah no 5 algoritma
        cout << "\n" << item << "not found in the array\n";
    cout << "\nNumber of comparisons: " << ctr << endl;

    cout << "\ncontinue search (y/n): ";
    cin >> ch;
  } while ((ch == 'y') || (ch == 'y'));
}


int main()
{
    input();
    LinearSearch();
}