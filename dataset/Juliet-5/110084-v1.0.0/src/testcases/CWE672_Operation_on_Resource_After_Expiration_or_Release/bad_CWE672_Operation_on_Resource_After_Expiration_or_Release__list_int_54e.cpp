using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int>  data);
void FUN1(list<int>  data)
{
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(list<int>  data);
void FUN3(list<int>  data)
{
    FUN2(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(list<int>  data);
void FUN5()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN3(list<int>  data);
void FUN0(list<int>  data)
{
    FUN3(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(list<int>  data)
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
