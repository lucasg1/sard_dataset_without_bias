void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
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
        printLongLine(data[0]);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
