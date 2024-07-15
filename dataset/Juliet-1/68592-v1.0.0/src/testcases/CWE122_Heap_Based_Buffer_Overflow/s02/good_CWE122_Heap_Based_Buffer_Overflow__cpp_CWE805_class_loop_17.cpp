namespace NAMESPACE0
{
void FUN0()
{
    int h;
    TwoIntsClass * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new TwoIntsClass[100];
    }
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
