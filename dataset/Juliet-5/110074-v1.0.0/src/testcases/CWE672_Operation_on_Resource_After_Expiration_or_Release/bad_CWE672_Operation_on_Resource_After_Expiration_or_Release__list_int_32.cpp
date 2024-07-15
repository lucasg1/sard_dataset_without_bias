using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    list<int>  *dataPtr1 = &data;
    list<int>  *dataPtr2 = &data;
    {
        list<int>  data = *dataPtr1;
        data.push_back(100);
        data.push_back(0);
        *dataPtr1 = data;
    }
    {
        list<int>  data = *dataPtr2;
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
