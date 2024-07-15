int VAR0 = 0;
int VAR1 = 0;
int64_t * FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    printLongLongLine(*data);
    free(data);
}
int64_t * FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    printLongLongLine(*data);
    free(data);
}
extern int VAR0;
extern int VAR1;
int64_t * FUN0(int64_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    return data;
}
int64_t * FUN2(int64_t * data)
{
    if(VAR1)
    {
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    return data;
}
