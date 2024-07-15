namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(twoIntsStruct * data)
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
void NAMESPACE0_FUN0::action(twoIntsStruct * data)
{
    printIntLine(data->intOne);
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
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
    virtual void action(twoIntsStruct * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data);
};
}
