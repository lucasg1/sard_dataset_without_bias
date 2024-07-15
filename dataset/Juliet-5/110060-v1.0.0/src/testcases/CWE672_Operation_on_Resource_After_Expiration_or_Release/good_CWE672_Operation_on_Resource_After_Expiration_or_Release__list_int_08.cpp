using namespace std;
static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    list<int>  data;
    if(FUN0())
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(FUN1())
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
void FUN3()
{
    list<int>  data;
    if(FUN0())
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(FUN0())
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
void FUN4()
{
    list<int>  data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.push_back(100);
        data.push_back(200);
    }
    if(FUN0())
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
    if(FUN0())
    {
        data.push_back(100);
        data.push_back(200);
    }
    if(FUN0())
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
} 
