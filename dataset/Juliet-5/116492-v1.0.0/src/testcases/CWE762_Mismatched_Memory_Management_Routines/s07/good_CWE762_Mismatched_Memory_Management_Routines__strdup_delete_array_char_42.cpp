namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[100];
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    delete [] data;
}
static char * FUN2(char * data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
} 
