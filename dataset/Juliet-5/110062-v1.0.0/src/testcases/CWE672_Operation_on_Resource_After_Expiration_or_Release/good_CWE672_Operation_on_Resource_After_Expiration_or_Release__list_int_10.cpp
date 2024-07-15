using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    if(globalTrue)
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(globalTrue)
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
void FUN2()
{
    list<int>  data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.push_back(100);
        data.push_back(200);
    }
    if(globalTrue)
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
void FUN3()
{
    list<int>  data;
    if(globalTrue)
    {
        data.push_back(100);
        data.push_back(200);
    }
    if(globalTrue)
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
