void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
    }
}
