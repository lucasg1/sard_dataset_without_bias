void FUN0()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
