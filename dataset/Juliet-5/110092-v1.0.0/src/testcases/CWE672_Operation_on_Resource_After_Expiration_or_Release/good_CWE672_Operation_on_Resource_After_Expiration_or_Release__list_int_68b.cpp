using namespace std;
namespace NAMESPACE0
{
list<int>  VAR1;
list<int>  VAR2;
list<int>  VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR3 = data;
    FUN1();
}
} 
using namespace std;
namespace NAMESPACE0
{
extern list<int>  VAR1;
extern list<int>  VAR2;
extern list<int>  VAR3;
void FUN0()
{
    list<int>  data = VAR2;
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
void FUN1()
{
    list<int>  data = VAR3;
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
