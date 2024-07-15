namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete data;
<END>
}
} 
