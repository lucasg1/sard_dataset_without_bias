using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<list<int> > dataList);
void FUN1()
{
    list<int>  data;
    list<list<int> > dataList;
    data.push_back(100);
    data.push_back(0);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<list<int> > dataList)
{
    list<int>  data = dataList.back();
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
