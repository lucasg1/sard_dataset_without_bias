namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    else
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
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
    if(globalReturnsTrueOrFalse())
    {
        data = new char;
        *data = 'A';
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(globalReturnsTrueOrFalse())
    {
        printHexCharLine(*data);
    }
    else
    {
        printHexCharLine(*data);
    }
}
} 
