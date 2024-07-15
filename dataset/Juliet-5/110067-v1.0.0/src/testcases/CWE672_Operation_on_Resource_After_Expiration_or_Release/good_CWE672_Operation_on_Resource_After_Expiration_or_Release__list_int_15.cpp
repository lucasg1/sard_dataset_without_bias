using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    switch(6)
    {
    case 6:
        data.push_back(100);
        data.push_back(0);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
    break;
    }
}
void FUN1()
{
    list<int>  data;
    switch(6)
    {
    case 6:
        data.push_back(100);
        data.push_back(0);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    list<int>  data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data.push_back(100);
        data.push_back(200);
        break;
    }
    switch(7)
    {
    case 7:
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            cout << " " << *i;
        }
        cout << endl;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    list<int>  data;
    switch(6)
    {
    case 6:
        data.push_back(100);
        data.push_back(200);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            cout << " " << *i;
        }
        cout << endl;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
