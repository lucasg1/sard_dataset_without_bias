using namespace std;
namespace NAMESPACE0
{
list<int>  VAR1;
list<int>  VAR2;
list<int>  VAR3;
void FUN0();
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR1 = data;
    FUN0();
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
    list<int>  data = VAR1;
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
