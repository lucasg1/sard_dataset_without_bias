namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(long * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long * data) const
{
    printLongLine(*data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(long * data) const
{
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
}
