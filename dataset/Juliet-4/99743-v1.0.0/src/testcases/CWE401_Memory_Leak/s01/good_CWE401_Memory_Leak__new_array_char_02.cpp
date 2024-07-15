namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(1)
    {
        delete[] data;
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
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(1)
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(1)
    {
        ; 
    }
}
} 
