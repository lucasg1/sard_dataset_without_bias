namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int * data);
};
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int * data;
    data = NULL;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data)
{
    printIntLine(*data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int * data)
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
