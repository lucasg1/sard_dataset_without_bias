namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(int * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int * data)
{
    if(VAR2)
    {
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int * data)
{
    if(VAR3)
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
    VAR3 = 1; 
    FUN4(data);
}
} 
