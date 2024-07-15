namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
    }
    if(globalReturnsTrue())
    {
<START>
        free(data);
<END>
    }
}
} 
