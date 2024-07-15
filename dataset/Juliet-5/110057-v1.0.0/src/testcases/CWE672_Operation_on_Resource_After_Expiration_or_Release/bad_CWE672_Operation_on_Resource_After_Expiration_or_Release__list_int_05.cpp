using namespace std;
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    if(staticTrue)
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(staticTrue)
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
