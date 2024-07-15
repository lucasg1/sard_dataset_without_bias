namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
    printIntLine(data[0]);
    delete [] data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(data[0]);
    delete [] data;
}
} 
