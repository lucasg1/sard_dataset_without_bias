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
    *data = 5LL;
    printLongLongLine(*data);
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
    *data = 5LL;
    printLongLongLine(*data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data)
{
    if(VAR3)
    {
        ; 
    }
}
void FUN5()
{
    int64_t * data;
    data = NULL;
    int64_t VAR4;
    data = &VAR4;
    *data = 5LL;
    printLongLongLine(*data);
    VAR3 = 1; 
    FUN4(data);
}
} 
