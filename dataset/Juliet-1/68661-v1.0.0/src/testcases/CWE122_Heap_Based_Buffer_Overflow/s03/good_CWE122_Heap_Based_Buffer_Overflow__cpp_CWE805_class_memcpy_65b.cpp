namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = new TwoIntsClass[100];
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
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
        memcpy(data, source, 100*sizeof(TwoIntsClass));
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
} 
