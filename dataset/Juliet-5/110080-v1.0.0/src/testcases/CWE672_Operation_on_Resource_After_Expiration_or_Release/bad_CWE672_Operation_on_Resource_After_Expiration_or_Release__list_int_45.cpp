using namespace std;
namespace NAMESPACE0
{
static list<int>  VAR1;
static list<int>  VAR2;
static list<int>  VAR3;
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
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    VAR1 = data;
    FUN0();
}
} 
