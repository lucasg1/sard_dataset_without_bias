namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new TwoIntsClass[100];
        break;
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
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new TwoIntsClass[100];
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
