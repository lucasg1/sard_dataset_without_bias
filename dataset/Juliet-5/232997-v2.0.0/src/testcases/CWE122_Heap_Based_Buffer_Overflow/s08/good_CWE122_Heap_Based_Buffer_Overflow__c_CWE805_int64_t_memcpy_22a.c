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
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
int64_t * FUN1(int64_t * data)
{
    if(VAR1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
int64_t * FUN0(int64_t * data);
void FUN3()
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
int64_t * FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN1(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
