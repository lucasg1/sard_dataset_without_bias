void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        free(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
