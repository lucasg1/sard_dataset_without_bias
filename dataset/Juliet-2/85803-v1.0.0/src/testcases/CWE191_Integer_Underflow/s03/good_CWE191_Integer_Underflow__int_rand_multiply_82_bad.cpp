namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data)
{
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int data)
{
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    data = -2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
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
