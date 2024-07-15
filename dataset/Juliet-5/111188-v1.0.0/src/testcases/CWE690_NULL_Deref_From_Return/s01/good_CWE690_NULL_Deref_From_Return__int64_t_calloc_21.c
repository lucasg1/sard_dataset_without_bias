static int VAR0 = 0;
static int VAR1 = 0;
void FUN0(int64_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            data[0] = 5LL;
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data)
{
    if(VAR1)
    {
        if (data != NULL)
        {
            data[0] = 5LL;
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    VAR1 = 1; 
    FUN2(data);
}
