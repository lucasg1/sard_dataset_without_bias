static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(long * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(long * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(long * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN5()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN4(data);
}
