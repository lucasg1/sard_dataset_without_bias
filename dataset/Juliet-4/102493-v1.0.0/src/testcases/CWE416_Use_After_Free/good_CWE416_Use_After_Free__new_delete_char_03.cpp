namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(5!=5)
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
    if(5==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(5==5)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(5==5)
    {
        printHexCharLine(*data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
    }
    if(5==5)
    {
        printHexCharLine(*data);
    }
}
} 
