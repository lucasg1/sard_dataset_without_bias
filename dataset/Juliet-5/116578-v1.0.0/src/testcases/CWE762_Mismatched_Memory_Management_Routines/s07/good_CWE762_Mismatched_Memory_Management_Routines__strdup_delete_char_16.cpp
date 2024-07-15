namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
        break;
    }
    while(1)
    {
        free(data);
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
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
