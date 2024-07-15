namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    data = 2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data) const
{
    {
        short result = data * data;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(short data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(short data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(short data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(short data) const
{
    if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
    {
        short result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
