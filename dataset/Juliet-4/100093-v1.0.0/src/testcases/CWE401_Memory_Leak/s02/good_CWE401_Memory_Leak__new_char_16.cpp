namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
