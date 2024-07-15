namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t VAR2[50];
    int64_t VAR3[100];
    data = VAR3;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
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
}
