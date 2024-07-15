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
    fscanf (stdin, "%hd", &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data) const
{
    {
        short result = data + 1;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(short data) const
{
    if (data < SHRT_MAX)
    {
        short result = data + 1;
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
