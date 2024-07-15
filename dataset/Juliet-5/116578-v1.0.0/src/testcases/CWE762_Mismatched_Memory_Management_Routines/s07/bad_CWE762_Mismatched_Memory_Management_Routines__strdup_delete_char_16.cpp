namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
