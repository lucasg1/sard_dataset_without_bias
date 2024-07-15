namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalTrue)
    {
        free(data);
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
        data = new char[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
} 
