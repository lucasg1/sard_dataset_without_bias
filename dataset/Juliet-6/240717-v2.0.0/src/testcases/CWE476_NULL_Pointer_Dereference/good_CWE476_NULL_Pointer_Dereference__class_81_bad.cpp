namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(TwoIntsClass * data) const
{
    if (data != NULL)
    {
        printIntLine(data->intOne);
        delete data;
    }
    else
    {
        printLine("data is NULL");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(TwoIntsClass * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data) const
{
    printIntLine(data->intOne);
    delete data;
}
}
