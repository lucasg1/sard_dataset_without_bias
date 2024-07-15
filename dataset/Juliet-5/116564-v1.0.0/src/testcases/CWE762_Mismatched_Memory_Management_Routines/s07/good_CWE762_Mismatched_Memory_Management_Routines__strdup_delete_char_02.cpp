namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(1)
    {
        free(data);
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
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char;
    }
    if(1)
    {
        delete data;
    }
}
} 
