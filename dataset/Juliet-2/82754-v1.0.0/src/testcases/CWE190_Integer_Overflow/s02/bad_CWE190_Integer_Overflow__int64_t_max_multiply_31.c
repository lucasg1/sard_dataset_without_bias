void FUN0()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        if(data > 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
