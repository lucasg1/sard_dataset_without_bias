namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long[100];
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    delete [] data;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long * data)
{
    delete [] data;
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(long * data)
{
    ; 
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
