namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
<START>
    delete data;
<END>
}
} 
