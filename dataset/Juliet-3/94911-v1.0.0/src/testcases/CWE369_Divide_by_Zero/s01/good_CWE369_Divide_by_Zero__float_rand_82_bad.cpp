namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(float data)
{
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
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
    virtual void action(float data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(float data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(float data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(float data)
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
}
