namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    goto sink;
sink:
    delete data;
}
} 
