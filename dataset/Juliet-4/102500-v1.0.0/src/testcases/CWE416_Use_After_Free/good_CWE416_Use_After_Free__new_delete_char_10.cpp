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
        delete data;
    }
    if(globalFalse)
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
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalTrue)
    {
        ; 
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
        data = new char;
        *data = 'A';
    }
    if(globalTrue)
    {
        printHexCharLine(*data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char;
        *data = 'A';
    }
    if(globalTrue)
    {
        printHexCharLine(*data);
    }
}
} 
