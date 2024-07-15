using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  dataArray[]);
void FUN1()
{
    list<int>  data;
    list<int>  dataArray[5];
    data.push_back(100);
    data.push_back(200);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(list<int>  dataArray[]);
void FUN3()
{
    list<int>  data;
    list<int>  dataArray[5];
    data.push_back(100);
    data.push_back(0);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  dataArray[])
{
    list<int>  data = dataArray[2];
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            cout << " " << *i;
        }
        cout << endl;
    }
}
void FUN2(list<int>  dataArray[])
{
    list<int>  data = dataArray[2];
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
}
} 
