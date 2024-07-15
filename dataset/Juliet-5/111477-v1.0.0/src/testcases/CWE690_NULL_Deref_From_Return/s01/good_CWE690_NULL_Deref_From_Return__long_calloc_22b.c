int VAR0 = 0;
int VAR1 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(long * data)
{
    if(VAR0)
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
void FUN2(long * data)
{
    if(VAR1)
    {
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
