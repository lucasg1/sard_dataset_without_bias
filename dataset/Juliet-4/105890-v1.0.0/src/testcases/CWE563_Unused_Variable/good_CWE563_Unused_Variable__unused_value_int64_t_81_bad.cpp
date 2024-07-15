namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data) const
{
    data = 10LL;
    printLongLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 5LL;
    printLongLongLine(data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int64_t data;
    data = 5LL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
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
void NAMESPACE0_FUN1::action(int64_t data) const
{
    printLongLongLine(data);
}
}
