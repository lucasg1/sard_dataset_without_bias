namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = new char;
        delete data;
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
