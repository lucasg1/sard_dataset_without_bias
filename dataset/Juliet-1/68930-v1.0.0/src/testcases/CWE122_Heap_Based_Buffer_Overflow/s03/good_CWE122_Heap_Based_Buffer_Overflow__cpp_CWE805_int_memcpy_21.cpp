namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int * FUN0(int * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
    ;
}
static int * FUN2(int * data)
{
    if(VAR2)
    {
        data = new int[100];
    }
    return data;
}
void FUN3()
{
    int * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN2(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
    ;
}
} 
