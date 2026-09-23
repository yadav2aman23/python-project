#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int num;
    cout << "Enter the total number of student : ";
    cin >> num;

    float *ptr;
    ptr = new float[num];
    cout << "Enter the GPA of student." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << ":";
        cin >> *(ptr + i);
    }
    {
        cout << "\nDisplay GPA of students." << endl;
    }
    delete[] ptr;
    return 0;
}