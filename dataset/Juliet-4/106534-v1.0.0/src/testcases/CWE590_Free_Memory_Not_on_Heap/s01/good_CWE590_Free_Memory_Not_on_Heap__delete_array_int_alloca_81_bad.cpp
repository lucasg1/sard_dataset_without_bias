namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data) const
{
    printIntLine(data[0]);
    delete [] data;
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
}
