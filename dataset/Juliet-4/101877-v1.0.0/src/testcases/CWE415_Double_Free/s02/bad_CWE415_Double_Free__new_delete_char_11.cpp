namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
