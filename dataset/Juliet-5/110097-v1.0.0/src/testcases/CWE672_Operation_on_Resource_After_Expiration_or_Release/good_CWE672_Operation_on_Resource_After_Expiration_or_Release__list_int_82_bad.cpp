namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(list<int>  data)
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
void NAMESPACE0_FUN1::action(list<int>  data)
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
void FUN0()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(200);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
using namespace std;
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(list<int>  data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(list<int>  data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(list<int>  data);
};
}
