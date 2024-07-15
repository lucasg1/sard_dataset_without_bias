namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char;
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 
