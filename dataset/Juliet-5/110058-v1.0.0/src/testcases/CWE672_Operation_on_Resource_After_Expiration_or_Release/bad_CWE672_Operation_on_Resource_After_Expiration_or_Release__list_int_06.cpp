using namespace std;
static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    if(STATIC_CONST_FIVE==5)
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(STATIC_CONST_FIVE==5)
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
