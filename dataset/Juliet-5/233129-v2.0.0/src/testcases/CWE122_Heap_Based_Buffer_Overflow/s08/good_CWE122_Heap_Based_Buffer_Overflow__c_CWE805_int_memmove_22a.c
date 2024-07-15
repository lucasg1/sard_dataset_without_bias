extern int VAR0;
extern int VAR1;
int * FUN0(int * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
int * FUN1(int * data)
{
    if(VAR1)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
int * FUN0(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
int * FUN1(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN1(data);
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
