namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = new TwoIntsClass[50];
    return data;
}
} 
namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
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
<START>
        memcpy(data, source, 100*sizeof(TwoIntsClass));
<END>
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
} 
