namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data)
{
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * VAR3 = (int *)ALLOCA(50*sizeof(int));
    int * VAR4 = (int *)ALLOCA(100*sizeof(int));
    data = VAR4;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
