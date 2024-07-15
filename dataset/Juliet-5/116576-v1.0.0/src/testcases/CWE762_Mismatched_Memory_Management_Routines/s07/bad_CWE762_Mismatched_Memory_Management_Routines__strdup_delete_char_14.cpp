namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(globalFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
