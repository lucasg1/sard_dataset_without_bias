namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
