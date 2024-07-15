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
        delete data;
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char;
        *data = 'A';
        break;
    }
    while(1)
    {
        printHexCharLine(*data);
        break;
    }
}
} 
