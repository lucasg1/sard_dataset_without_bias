namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data)
{
    if(VAR3)
    {
        delete [] data;
    }
}
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    VAR3 = 1; 
    FUN4(data);
}
} 
