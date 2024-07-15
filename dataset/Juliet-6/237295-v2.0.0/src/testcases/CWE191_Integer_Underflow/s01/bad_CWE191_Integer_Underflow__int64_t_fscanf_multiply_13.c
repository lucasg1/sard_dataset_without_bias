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
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
