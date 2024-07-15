void FUN0()
{
    int j;
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    for(j = 0; j < 1; j++)
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
