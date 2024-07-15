static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int64_t * data)
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
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN4(data);
}
