namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int64_t data)
{
    if (abs((long)data) <= (long)sqrt((double)LLONG_MAX))
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
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
    virtual void action(int64_t data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int64_t data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data)
{
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
}