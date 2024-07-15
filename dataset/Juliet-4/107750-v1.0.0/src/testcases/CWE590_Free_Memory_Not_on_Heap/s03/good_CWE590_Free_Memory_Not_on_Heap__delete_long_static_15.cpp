namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    break;
    }
    printLongLine(*data);
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLine(*data);
    delete data;
}
} 
