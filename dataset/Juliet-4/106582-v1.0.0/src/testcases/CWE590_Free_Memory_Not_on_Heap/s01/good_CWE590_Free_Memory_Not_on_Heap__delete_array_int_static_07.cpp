static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * dataBuffer = new int[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0]);
    delete [] data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            int * dataBuffer = new int[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0]);
    delete [] data;
}
} 
