namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[50];
    FUN0(data);
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
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
