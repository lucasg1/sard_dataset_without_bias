namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(char * data)
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
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(char * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(char * data)
{
    if(VAR3)
    {
        ; 
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    char VAR4;
    data = &VAR4;
    *data = 'A';
    printHexCharLine(*data);
    VAR3 = 1; 
    FUN4(data);
}
} 
