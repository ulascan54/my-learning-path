#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student
{
private:
    int no;
    int lecture;

public:
    Student()
    {
        this->no = 1000 * (1 + rand() % 3) + rand() % 99;
        this->lecture = 1 + rand() % 4;
    }
    int getNo() const
    {
        return no;
    }

    int getLecture() const
    {
        return lecture;
    }

    friend ostream &operator<<(ostream &os, const Student &student)
    {
        os << setw(5) << student.getNo() << "-" << setw(4) << std::right << student.getLecture();
        return os;
    }
};
void clearArr(Student **arr, int studentCount)
{
    for (int i = 0; i < studentCount; i++)
    {
        arr[i] = NULL;
    }
}
void addNewStudent(Student **arr, int studentCount)
{
    cout << "Sıra girin:" << endl;
    int index;
    cin >> index;
    if (index <= studentCount && index >= 0)
    {
        if (arr[index] == NULL)
        {
            arr[index] = new Student();
        }
        else
        {
            cout << "bu adress dolu!!!" << endl;
        }
    }
    else
    {
        cout << "hata !!! sınır dışı" << endl;
    }
}
void deleteStudent(Student **arr, int studentCount)
{
    cout << "Sıra girin:" << endl;
    int index;
    cin >> index;
    if (index <= studentCount && index >= 0)
    {
        if (arr[index] != NULL)
        {
            delete arr[index];
            arr[index] = NULL;
        }
        else
        {
            cout << "bu adress zaten boşş!!!" << endl;
        }
    }
    else
    {
        cout << "hata !!! sınır dışı" << endl;
    }
}
void deleteArray(Student **arr, int studentCount)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (arr[i])
        {
            delete arr[i];
        }
    }
    delete[] arr;
}
void printArr(Student **arr, int studentCount)
{
    cout << setw(8) << std::left << "indeks" << setw(2) << "|" << setw(15) << "içerik" << setw(2) << "|" << setw(10) << "gösterilen" << setw(2) << endl;
    for (int i = 0; i < studentCount; i++)
    {

        cout << setw(5) << std::left << "dizi[" << i << "] " << setw(2) << "|" << setw(14) << arr[i] << setw(2) << "|";

        if (arr[i])
        {
            cout << setw(10) << *arr[i] << setw(2) << endl;
        }
        else
        {
            cout << setw(10) << "----------" << setw(2) << endl;
        }
    }
}

int main()
{
    int studentNo = 10;
    Student **studentArray = new Student *[studentNo];

    clearArr(studentArray, studentNo);

    while (true)
    {
        printArr(studentArray, studentNo);
        cout << "1. Öğrenci ekle" << endl;
        cout << "2. Öğrenci sil" << endl;
        cout << "3. Çıkış" << endl;

        int n;
        cin >> n;

        if (n == 1)
        {
            addNewStudent(studentArray, studentNo);
        }
        else if (n == 2)
        {
            deleteStudent(studentArray, studentNo);
        }
        else
        {
            deleteArray(studentArray, studentNo);
            break;
        }
    }
}
