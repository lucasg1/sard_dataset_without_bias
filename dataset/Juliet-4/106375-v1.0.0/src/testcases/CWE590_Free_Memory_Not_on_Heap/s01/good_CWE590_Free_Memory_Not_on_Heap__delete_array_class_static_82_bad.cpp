namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data)
{
    printIntLine(data[0].intOne);
    delete [] data;
}
}
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = new TwoIntsClass[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
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
    virtual void action(TwoIntsClass * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
}
