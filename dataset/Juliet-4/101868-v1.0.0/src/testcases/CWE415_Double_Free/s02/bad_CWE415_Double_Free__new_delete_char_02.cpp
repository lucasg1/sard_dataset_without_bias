namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char;
        delete data;
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
