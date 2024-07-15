static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    TwoIntsClass * data;
    data = NULL; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0].intOne);
    delete [] data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL; 
    if(FUN0())
    {
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
