namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
