void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    if(globalFive==5)
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
