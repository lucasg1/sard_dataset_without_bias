void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalFive==5)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
