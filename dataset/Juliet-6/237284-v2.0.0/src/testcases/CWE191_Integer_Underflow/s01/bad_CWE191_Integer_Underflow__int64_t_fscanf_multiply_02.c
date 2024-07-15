void FUN0()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(1)
    {
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
