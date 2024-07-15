namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
        break;
    }
    while(1)
    {
        delete[] data;
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
