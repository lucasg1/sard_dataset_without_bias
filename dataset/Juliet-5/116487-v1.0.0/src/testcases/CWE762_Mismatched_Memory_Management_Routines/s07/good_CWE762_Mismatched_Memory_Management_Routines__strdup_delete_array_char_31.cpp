namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[100];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        free(data);
    }
}
} 
