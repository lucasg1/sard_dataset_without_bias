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
    twoIntsStruct * data;
    data = NULL; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct[100];
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
    printStructLine(&data[0]);
    delete [] data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL; 
    if(FUN0())
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct[100];
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
    printStructLine(&data[0]);
    delete [] data;
}
} 
