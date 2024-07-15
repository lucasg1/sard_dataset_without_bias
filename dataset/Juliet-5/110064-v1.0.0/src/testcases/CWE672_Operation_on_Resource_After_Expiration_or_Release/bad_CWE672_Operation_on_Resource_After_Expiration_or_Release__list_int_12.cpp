using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    if(globalReturnsTrueOrFalse())
    {
        data.push_back(100);
        data.push_back(0);
    }
    else
    {
        data.push_back(100);
        data.push_back(200);
    }
    if(globalReturnsTrueOrFalse())
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
<START>
                cout << " " << *i;
<END>
            }
            cout << endl;
        }
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
} 
