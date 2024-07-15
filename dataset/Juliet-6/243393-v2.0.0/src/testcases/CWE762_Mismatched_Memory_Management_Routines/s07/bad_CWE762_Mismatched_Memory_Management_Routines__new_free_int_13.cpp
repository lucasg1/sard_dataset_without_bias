namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 
