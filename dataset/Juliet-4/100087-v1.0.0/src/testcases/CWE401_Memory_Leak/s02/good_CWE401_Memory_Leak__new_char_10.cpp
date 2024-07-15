namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalTrue)
    {
        delete data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalTrue)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalTrue)
    {
        ; 
    }
}
} 
