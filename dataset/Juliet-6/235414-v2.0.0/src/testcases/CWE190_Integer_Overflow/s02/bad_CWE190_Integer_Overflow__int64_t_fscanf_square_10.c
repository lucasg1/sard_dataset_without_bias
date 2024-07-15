void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalTrue)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
