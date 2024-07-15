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
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(list<int>  dataCopy);
    ~NAMESPACE0_FUN1();
private:
    list<int>  data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(list<int>  dataCopy)
{
    data = dataCopy;
    data.push_back(100);
    data.push_back(0);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
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
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(list<int>  dataCopy)
{
    data = dataCopy;
    data.push_back(100);
    data.push_back(200);
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
            cout << " " << *i;
        }
        cout << endl;
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    list<int>  data;
    NAMESPACE0_FUN0 * VAR4 = new NAMESPACE0_FUN0(data);
    delete VAR4;
}
void FUN1()
{
    list<int>  data;
    NAMESPACE0_FUN1 * VAR5 = new NAMESPACE0_FUN1(data);
    delete VAR5;
}
} 
