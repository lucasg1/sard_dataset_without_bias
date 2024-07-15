using namespace std;
static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    if(staticFive==5)
    {
        data.push_back(100);
        data.push_back(0);
    }
    if(staticFive==5)
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
