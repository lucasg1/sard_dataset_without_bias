using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  * data);
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    FUN0(&data);
}
void FUN2(list<int>  * data);
void FUN3()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    FUN2(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  * dataPtr)
{
    list<int>  data = *dataPtr;
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
}
void FUN2(list<int>  * dataPtr)
{
    list<int>  data = *dataPtr;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
}
} 
