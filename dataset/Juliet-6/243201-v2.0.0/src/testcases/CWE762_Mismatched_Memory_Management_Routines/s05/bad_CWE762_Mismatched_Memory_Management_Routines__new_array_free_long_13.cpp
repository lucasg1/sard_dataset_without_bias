namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new long[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 
