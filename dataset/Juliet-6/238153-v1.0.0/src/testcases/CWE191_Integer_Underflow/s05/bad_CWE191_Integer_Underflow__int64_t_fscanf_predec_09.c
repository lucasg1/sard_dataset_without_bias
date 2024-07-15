void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            --data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
