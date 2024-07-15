namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(TwoIntsClass * dataCopy)
{
    data = dataCopy;
    data = new TwoIntsClass[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        TwoIntsClass source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        memmove(data, source, 100*sizeof(TwoIntsClass));
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(TwoIntsClass * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    TwoIntsClass * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
} 
