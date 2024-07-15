namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int64_t * dataBuffer = new int64_t[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    break;
    }
    printLongLongLine(data[0]);
    delete [] data;
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        int64_t * dataBuffer = new int64_t[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLongLine(data[0]);
    delete [] data;
}
} 
