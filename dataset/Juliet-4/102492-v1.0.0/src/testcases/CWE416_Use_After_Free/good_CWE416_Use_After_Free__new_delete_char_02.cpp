namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(0)
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
    if(1)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(1)
    {
        printHexCharLine(*data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char;
        *data = 'A';
    }
    if(1)
    {
        printHexCharLine(*data);
    }
}
} 
