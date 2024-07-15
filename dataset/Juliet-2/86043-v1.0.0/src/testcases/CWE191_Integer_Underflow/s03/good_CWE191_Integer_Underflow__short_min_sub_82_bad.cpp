namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(short data)
{
    if (data > SHRT_MIN)
    {
        short result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data)
{
    {
        short result = data - 1;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(short data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(short data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(short data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    data = -2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MIN;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
