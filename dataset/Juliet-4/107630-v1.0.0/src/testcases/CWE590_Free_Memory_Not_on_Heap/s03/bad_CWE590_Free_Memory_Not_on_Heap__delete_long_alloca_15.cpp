namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        long * dataBuffer = (long *)ALLOCA(sizeof(long));
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
