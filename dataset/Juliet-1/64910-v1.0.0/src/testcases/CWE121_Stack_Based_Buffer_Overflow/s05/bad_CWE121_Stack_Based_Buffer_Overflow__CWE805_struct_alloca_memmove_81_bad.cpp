namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * VAR1 = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * VAR2 = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data = VAR1;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(twoIntsStruct * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(twoIntsStruct * data) const
{
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intOne = 0;
            }
        }
<START>
        memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
    }
}
}
