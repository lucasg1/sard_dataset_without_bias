namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
