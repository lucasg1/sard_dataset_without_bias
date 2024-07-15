using namespace std;
namespace NAMESPACE0
{
static list<int>  FUN0(list<int>  data)
{
    data.push_back(100);
    data.push_back(0);
    return data;
}
void FUN1()
{
    list<int>  data;
    data = FUN0(data);
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
