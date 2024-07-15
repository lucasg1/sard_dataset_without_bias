namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(5!=5)
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
    if(5==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(5==5)
    {
        free(data);
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
        data = new char[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 
