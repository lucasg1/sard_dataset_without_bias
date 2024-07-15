void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalReturnsTrue())
    {
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
    }
}
