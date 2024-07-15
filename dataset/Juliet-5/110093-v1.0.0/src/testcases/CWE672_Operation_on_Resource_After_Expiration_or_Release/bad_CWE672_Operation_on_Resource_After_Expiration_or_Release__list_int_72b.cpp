using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<list<int> > dataVector);
void FUN1()
{
    list<int>  data;
    vector<list<int> > dataVector;
    data.push_back(100);
    data.push_back(0);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<list<int> > dataVector)
{
    list<int>  data = dataVector[2];
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
