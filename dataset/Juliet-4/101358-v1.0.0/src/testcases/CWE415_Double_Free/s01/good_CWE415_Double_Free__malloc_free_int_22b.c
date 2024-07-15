int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
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
void FUN2(int * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN4(int * data)
{
    if(VAR2)
    {
        free(data);
    }
}
