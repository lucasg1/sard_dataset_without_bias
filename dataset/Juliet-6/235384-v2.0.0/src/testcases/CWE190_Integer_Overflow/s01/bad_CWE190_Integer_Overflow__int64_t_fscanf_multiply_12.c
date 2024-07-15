void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        if(data > 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
    else
    {
        if(data > 0) 
        {
            if (data < (LLONG_MAX/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
