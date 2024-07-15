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
        int64_t * dataBuffer = new int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    break;
    }
    printLongLongLine(*data);
    delete data;
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        int64_t * dataBuffer = new int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLongLine(*data);
    delete data;
}
} 
