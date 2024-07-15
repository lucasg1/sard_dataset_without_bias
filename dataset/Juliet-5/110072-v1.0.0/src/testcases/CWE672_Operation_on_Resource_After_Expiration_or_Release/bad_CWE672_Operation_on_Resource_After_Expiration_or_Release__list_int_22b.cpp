using namespace std;
namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(list<int>  data);
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR1 = 1; 
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(list<int>  data)
{
    if(VAR1)
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
}
} 
