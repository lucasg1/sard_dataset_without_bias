namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            long * dataBuffer = new long;
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            long * dataBuffer = new long;
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
    delete data;
}
} 
