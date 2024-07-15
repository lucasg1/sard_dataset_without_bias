namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int64_t data)
{
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    data = -2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data)
{
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
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
