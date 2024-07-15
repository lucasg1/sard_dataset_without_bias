namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int64_t * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    {
        data = &tmpData;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int64_t * data)
{
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data)
{
    printLongLongLine(*data);
}
}
