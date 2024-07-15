namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(long data)
{
    printLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long data;
    data = 5L;
    printLongLine(data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    long data;
    data = 5L;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long data)
{
    data = 10L;
    printLongLine(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(long data);
};
}
