#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
typedef struct studentdetails
{
    string name;
    string college_id;
    char section;
    string department;
    long long mobile_number;
    long long aadhar_number;
    string father_name;
    string mother_name;
    long long parent_mobile_number;
    string address;
    int eamcet_rank;
    int ipe_marks;
    float total_fees;
    float fees_paid;
} Sd;
int main()
{
    int stud, sec, i, j, n;
    string college_name, search_id, search_name;
    cout << endl
         << "-----------------------------------------------------------------" << endl
         << endl;
    cout << "\t\t    CAMPUS FLOW" << endl
         << endl;
    cout << "--->> Hi there! I'm Campus flow I manage Student details of any college. " << endl;
    cout << "--->> You can store details like College id, Section, Department, Mobile numbers Etc..." << endl
         << endl;
    cout << "\t\t    "
         << "College Name : " << endl
         << "\t\t    ";
    getline(cin, college_name);
    cout << endl
         << endl;
    cout << "->> Sections : ";
    cin >> sec;
    cout << "->> Students in each section : ";
    cin >> stud;
    cout << endl;
    Sd arr[sec][stud];
    for (int i = 0; i < sec; i++)
    {
        cout << "********************************************************" << endl;
        cout << "\t\t"
             << " Section " << i + 1 << endl
             << endl;
        for (int j = 0; j < stud; j++)
        {
            cout << "->> "
                 << "Student " << j + 1 << " Details : " << endl;
            cout << "->> Student name : ";
            cin.ignore();
            getline(cin, arr[i][j].name);

            cout << "->> College Id : ";
            cin >> arr[i][j].college_id;

            cout << "->> Section : ";
            cin >> arr[i][j].section;

            cout << "->> Department : ";
            cin >> arr[i][j].department;

            cout << "->> Mobile number : ";
            cin >> arr[i][j].mobile_number;

            cout << "->> Aadhaar number : ";
            cin >> arr[i][j].aadhar_number;

            cout << "->> Father name : ";
            cin.ignore();
            getline(cin, arr[i][j].father_name);

            cout << "->> Mother name : ";
            cin.ignore();
            getline(cin, arr[i][j].mother_name);

            cout << "->> Parent mobile number : ";
            cin >> arr[i][j].parent_mobile_number;

            cout << "->> Address of the student : ";
            cin.ignore();
            getline(cin, arr[i][j].address);

            cout << "->> EAMCET rank : ";
            cin >> arr[i][j].eamcet_rank;

            cout << "->> Ipe marks : ";
            cin >> arr[i][j].ipe_marks;

            cout << "->> Total fees : ";
            cin >> arr[i][j].total_fees;

            cout << "->> Fees paid : ";
            cin >> arr[i][j].fees_paid;
            cout << endl 
                 << endl;
        }
    }
    cout << "-------------------------------------------------------------------" << endl;
    cout << "->> SEARCH : " << endl;
    cout << "->> Press 1 To Search by Name : " << endl;
    cout << "->> Press 2 To Search by ID : " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "->> NAME : ";
        cin.ignore();
        getline(cin, search_name);
        for (i = 0; i < sec; i++)
        {
            for (j = 0; j < stud; j++)
            {
                if (arr[i][j].name == search_name)
                {
                    cout << "***********************************************************" << endl;
                    cout << "\t\t  " << college_name << endl;
                    cout << "Name : " << arr[i][j].name << endl;
                    cout << "College id : " << arr[i][j].college_id << endl;
                    cout << "Section : " << arr[i][j].section << endl;
                    cout << "Department : " << arr[i][j].department << endl;
                    cout << "Mobile number : " << arr[i][j].mobile_number << endl;
                    cout << "Aadhar number : " << arr[i][j].aadhar_number << endl;
                    cout << "Father name : " << arr[i][j].father_name << endl;
                    cout << "Mother name : " << arr[i][j].mother_name << endl;
                    cout << "Parent mobile number : " << arr[i][j].parent_mobile_number << endl;
                    cout << "Address : " << arr[i][j].address << endl;
                    cout << "EAMCET Rank : " << arr[i][j].eamcet_rank << endl;
                    cout << "IPE Marks : " << arr[i][j].ipe_marks << endl;
                    cout << "Fee due : " << (arr[i][j].total_fees - arr[i][j].fees_paid) << endl;
                    break;
                }
            }
        }
        if (i == sec && j == stud)
        {
            cout << endl
                 << "\t\t  "
                 << "No details found with " << search_name << endl;
        }
        break;
    case 2:
        cout << "->> College ID : ";
        cin.ignore();
        getline(cin, search_id);
        for (i = 0; i < sec; i++)
        {
            for (j = 0; j < stud; j++)
            {
                if (arr[i][j].college_id == search_id)
                {
                    cout << "***********************************************************" << endl;
                    cout << "\t\t  " << college_name << endl;
                    cout << "Name : " << arr[i][j].name << endl;
                    cout << "College id : " << arr[i][j].college_id << endl;
                    cout << "Section : " << arr[i][j].section << endl;
                    cout << "Department : " << arr[i][j].department << endl;
                    cout << "Mobile number : " << arr[i][j].mobile_number << endl;
                    cout << "Aadhar number : " << arr[i][j].aadhar_number << endl;
                    cout << "Father name : " << arr[i][j].father_name << endl;
                    cout << "Mother name : " << arr[i][j].mother_name << endl;
                    cout << "Parent mobile number : " << arr[i][j].parent_mobile_number << endl;
                    cout << "Address : " << arr[i][j].address << endl;
                    cout << "EAMCET Rank : " << arr[i][j].eamcet_rank << endl;
                    cout << "IPE Marks : " << arr[i][j].ipe_marks << endl;
                    cout << "Fee due : " << (arr[i][j].total_fees - arr[i][j].fees_paid) << endl;
                    break;
                }
            }
        }
        if (i == sec && j == stud)
        {
            cout << endl
                 << "\t\t  "
                 << "No details found with " << search_id << endl;
        }
        break;
    default:
        cout << "-->> QUITTING...";
        break;
    }
    return 0;
}