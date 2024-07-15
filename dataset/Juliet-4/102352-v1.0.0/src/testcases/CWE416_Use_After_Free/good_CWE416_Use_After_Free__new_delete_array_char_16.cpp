namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
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
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        break;
    }
    while(1)
    {
        printLine(data);
        break;
    }
}
} 
