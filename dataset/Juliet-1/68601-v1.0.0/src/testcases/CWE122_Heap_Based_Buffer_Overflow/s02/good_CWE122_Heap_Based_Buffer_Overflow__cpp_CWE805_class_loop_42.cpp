namespace NAMESPACE0
{
static TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = new TwoIntsClass[100];
    return data;
}
void FUN1()
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
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
