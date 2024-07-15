int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
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
void FUN2(int64_t * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN4(int64_t * data)
{
    if(VAR2)
    {
        free(data);
    }
}
