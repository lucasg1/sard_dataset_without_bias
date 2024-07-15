using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  data);
void FUN1(list<int>  data)
{
    FUN0(data);
}
void FUN2(list<int>  data);
void FUN3(list<int>  data)
{
    FUN2(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN4(list<int>  data);
void FUN5()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    FUN4(data);
}
void FUN6(list<int>  data);
void FUN7()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    FUN6(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(list<int>  data);
void FUN4(list<int>  data)
{
    FUN1(data);
}
void FUN3(list<int>  data);
void FUN6(list<int>  data)
{
    FUN3(data);
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
