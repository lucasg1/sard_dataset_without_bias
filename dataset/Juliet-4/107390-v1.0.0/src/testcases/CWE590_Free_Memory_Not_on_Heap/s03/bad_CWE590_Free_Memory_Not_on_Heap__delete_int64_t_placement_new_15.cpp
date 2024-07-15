namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        char buffer[sizeof(int64_t)];
        int64_t * dataBuffer = new(buffer) int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
