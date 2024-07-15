namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(twoIntsStruct * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(twoIntsStruct * data) const
{
    if (data != NULL)
    {
        printIntLine(data->intOne);
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
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(twoIntsStruct * data) const
{
    printIntLine(data->intOne);
}
}
