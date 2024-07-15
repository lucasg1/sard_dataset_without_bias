namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    data = 2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int data)
{
    if (data < INT_MAX)
    {
        int result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int data);
};
}
