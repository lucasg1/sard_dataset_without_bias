namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    else
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        free(data);
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
    if(globalReturnsTrueOrFalse())
    {
        data = new char[100];
    }
    else
    {
        data = new char[100];
    }
    if(globalReturnsTrueOrFalse())
    {
        delete [] data;
    }
    else
    {
        delete [] data;
    }
}
} 
