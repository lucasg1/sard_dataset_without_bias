void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    if(globalReturnsTrue())
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
