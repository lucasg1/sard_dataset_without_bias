namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int * data) const
{
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data) const
{
    printIntLine(*data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
}
