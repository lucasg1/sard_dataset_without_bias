static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    if(STATIC_CONST_FIVE!=5)
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
    data = (int *)realloc(data, 1*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
