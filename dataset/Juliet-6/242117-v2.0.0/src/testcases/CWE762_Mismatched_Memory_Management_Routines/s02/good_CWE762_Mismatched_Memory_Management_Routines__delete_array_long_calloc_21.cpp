namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(long * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(long * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(long * data)
{
    if(VAR3)
    {
        delete [] data;
    }
}
void FUN5()
{
    long * data;
    data = NULL;
    data = new long[100];
    VAR3 = 1; 
    FUN4(data);
}
} 
