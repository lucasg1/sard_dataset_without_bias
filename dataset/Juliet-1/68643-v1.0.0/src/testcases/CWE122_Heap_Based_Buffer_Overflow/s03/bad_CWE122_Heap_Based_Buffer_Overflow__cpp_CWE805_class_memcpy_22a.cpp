namespace NAMESPACE0
{
extern int VAR1;
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
        data = new TwoIntsClass[50];
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
TwoIntsClass * FUN0(TwoIntsClass * data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = 1; 
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
    ;
}
} 
