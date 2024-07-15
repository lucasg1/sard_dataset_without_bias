using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, list<int> > dataMap);
void FUN1()
{
    list<int>  data;
    map<int, list<int> > dataMap;
    data.push_back(100);
    data.push_back(0);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, list<int> > dataMap)
{
    list<int>  data = dataMap[2];
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
