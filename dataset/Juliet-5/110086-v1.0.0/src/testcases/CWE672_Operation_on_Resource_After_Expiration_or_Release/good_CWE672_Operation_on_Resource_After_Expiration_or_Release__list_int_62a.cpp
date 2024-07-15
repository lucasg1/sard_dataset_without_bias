using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  &data)
{
    data.push_back(100);
    data.push_back(200);
}
void FUN1(list<int>  &data)
{
    data.push_back(100);
    data.push_back(0);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  &data);
void FUN3()
{
    list<int>  data;
    FUN0(data);
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
void FUN1(list<int>  &data);
void FUN5()
{
    list<int>  data;
    FUN1(data);
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
