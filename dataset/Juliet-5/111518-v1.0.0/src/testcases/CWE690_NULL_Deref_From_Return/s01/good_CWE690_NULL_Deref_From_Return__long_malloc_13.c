void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    if(GLOBAL_CONST_FIVE==5)
    {
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
