void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    goto sink;
sink:
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
