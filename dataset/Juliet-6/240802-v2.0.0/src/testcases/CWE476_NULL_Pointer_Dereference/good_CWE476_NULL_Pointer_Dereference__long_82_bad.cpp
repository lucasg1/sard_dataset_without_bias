namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(long * data)
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
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long * data)
{
    printLongLine(*data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(long * data);
};
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    long * data;
    data = NULL;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
