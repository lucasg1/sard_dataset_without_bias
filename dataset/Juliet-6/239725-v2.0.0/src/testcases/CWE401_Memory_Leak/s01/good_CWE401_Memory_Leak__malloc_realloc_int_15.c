void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        int * tmpData;
        data[0] = 5;
        printIntLine(data[0]);
        tmpData = (int *)realloc(data, (130000)*sizeof(int));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0] = 10;
            printIntLine(data[0]);
        }
        free(data);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        int * tmpData;
        data[0] = 5;
        printIntLine(data[0]);
        tmpData = (int *)realloc(data, (130000)*sizeof(int));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0] = 10;
            printIntLine(data[0]);
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
