namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(list<int>  dataCopy);
    ~NAMESPACE0_FUN0();
private:
    list<int>  data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(list<int>  dataCopy)
{
    data = dataCopy;
    data.push_back(100);
    data.push_back(0);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
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
