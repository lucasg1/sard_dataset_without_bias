using namespace std;
namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(list<int>  data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(list<int>  data)
{
    if(VAR2)
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
void FUN3()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(list<int>  data)
{
    if(VAR3)
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
}
void FUN5()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    VAR3 = 1; 
    FUN4(data);
}
} 
