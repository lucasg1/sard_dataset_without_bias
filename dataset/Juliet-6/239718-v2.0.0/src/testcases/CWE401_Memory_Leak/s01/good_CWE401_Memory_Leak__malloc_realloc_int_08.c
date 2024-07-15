static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN3()
{
    if(FUN0())
    {
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
    }
}
