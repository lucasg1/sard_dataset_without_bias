void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
