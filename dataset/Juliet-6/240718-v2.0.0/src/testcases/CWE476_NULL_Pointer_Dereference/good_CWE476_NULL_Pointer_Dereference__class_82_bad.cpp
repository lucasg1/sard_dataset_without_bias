namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(TwoIntsClass * data)
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
    virtual void action(TwoIntsClass * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data)
{
    printIntLine(data->intOne);
    delete data;
}
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
