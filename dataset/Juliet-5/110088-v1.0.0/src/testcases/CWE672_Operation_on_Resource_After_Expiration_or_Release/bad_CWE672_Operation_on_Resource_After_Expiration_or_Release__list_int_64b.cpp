using namespace std;
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    FUN0(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    list<int>  * dataPtr = (list<int>  *)dataVoidPtr;
    list<int>  data = (*dataPtr);
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
