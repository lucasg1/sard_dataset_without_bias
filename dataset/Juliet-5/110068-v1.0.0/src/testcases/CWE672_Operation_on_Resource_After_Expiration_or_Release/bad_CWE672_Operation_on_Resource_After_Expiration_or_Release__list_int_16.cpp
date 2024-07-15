using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    while(1)
    {
        data.push_back(100);
        data.push_back(0);
        break;
    }
    while(1)
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
        break;
    }
}
} 
