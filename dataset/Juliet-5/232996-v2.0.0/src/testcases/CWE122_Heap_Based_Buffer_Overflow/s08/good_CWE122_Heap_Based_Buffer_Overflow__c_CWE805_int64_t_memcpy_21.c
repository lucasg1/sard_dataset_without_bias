static int VAR0 = 0;
static int VAR1 = 0;
static int64_t * FUN0(int64_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
static int64_t * FUN2(int64_t * data)
{
    if(VAR1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
