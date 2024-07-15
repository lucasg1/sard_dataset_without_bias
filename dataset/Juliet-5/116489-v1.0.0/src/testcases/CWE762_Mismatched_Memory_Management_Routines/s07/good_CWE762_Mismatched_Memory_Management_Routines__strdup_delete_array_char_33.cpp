namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[100];
    {
        char * data = dataRef;
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    {
        char * data = dataRef;
        free(data);
    }
}
} 
