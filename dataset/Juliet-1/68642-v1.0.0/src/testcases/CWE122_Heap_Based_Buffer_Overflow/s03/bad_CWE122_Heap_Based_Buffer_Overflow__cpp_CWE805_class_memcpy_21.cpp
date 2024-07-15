namespace NAMESPACE0
{
static int VAR1 = 0;
static TwoIntsClass * FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
        data = new TwoIntsClass[50];
    }
    return data;
}
void FUN1()
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
