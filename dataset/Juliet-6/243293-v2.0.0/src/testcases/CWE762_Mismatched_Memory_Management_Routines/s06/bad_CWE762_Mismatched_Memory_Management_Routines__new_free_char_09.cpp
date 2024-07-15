namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new char;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 
