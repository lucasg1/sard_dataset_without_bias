namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
    }
    if(globalReturnsTrue())
    {
<START>
        free(data);
<END>
    }
}
} 
