void FUN0()
{
    int i,j;
    int64_t data;
    data = 0LL;
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    for(j = 0; j < 1; j++)
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
