namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
