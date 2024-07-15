using namespace std;
namespace NAMESPACE0
{
static list<int>  VAR1;
static list<int>  VAR2;
static list<int>  VAR3;
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
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    VAR2 = data;
    FUN0();
}
void FUN2()
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
void FUN3()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR3 = data;
    FUN2();
}
} 
