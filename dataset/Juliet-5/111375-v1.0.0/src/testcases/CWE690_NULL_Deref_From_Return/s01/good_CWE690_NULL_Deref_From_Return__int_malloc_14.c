void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    if(globalFive==5)
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
