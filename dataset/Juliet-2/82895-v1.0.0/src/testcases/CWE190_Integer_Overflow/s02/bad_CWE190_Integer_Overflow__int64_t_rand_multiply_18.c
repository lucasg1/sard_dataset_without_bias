void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = (int64_t)RAND64();
    goto sink;
sink:
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
