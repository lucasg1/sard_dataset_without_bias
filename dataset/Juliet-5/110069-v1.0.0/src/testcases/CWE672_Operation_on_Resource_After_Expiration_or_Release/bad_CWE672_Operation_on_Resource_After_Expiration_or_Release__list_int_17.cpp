using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    list<int>  data;
    for(i = 0; i < 1; i++)
    {
        data.push_back(100);
        data.push_back(0);
    }
    for(j = 0; j < 1; j++)
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
