namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 
