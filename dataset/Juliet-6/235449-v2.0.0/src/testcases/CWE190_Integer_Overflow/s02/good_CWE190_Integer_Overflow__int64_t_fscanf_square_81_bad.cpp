namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int64_t data) const
{
    if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
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
void NAMESPACE0_FUN0::action(int64_t data) const
{
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int64_t data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
