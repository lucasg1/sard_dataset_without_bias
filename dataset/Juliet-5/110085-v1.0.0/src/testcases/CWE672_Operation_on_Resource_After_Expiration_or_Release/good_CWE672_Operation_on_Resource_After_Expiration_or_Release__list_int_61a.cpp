using namespace std;
namespace NAMESPACE0
{
list<int>  FUN0(list<int>  data)
{
    data.push_back(100);
    data.push_back(200);
    return data;
}
list<int>  FUN1(list<int>  data)
{
    data.push_back(100);
    data.push_back(0);
    return data;
}
} 
using namespace std;
namespace NAMESPACE0
{
list<int>  FUN0(list<int>  data);
void FUN3()
{
    list<int>  data;
    data = FUN0(data);
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
list<int>  FUN1(list<int>  data);
void FUN5()
{
    list<int>  data;
    data = FUN1(data);
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
