void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
<START>
        data = (int *)realloc(data, (130000)*sizeof(int));
<END>
        if (data != NULL)
        {
            data[0] = 10;
            printIntLine(data[0]);
            free(data);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
