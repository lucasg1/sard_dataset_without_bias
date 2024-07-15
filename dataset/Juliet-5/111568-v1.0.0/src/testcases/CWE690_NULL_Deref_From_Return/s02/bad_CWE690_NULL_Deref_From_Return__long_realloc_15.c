void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    switch(6)
    {
    case 6:
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
