static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    if(staticFalse)
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
    data = (long *)realloc(data, 1*sizeof(long));
    if(staticTrue)
    {
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
