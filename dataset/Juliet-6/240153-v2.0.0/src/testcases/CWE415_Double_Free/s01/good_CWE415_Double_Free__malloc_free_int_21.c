static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int * data)
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
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN4(data);
}
