using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  data);
void FUN1()
{
    list<int>  data;
    void (*funcPtr) (list<int> ) = FUN0;
    data.push_back(100);
    data.push_back(200);
    funcPtr(data);
}
void FUN2(list<int>  data);
void FUN3()
{
    list<int>  data;
    void (*funcPtr) (list<int> ) = FUN2;
    data.push_back(100);
    data.push_back(0);
    funcPtr(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  data)
{
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
void FUN2(list<int>  data)
{
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
