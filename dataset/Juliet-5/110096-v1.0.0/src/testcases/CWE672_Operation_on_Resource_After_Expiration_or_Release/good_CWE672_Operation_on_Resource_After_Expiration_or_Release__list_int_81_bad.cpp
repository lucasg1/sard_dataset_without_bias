using namespace std;
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(list<int>  data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(list<int>  data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(list<int>  data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(list<int>  data) const
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
    data.push_back(100);
    data.push_back(200);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    list<int>  data;
    data.push_back(100);
    data.push_back(0);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(list<int>  data) const
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
