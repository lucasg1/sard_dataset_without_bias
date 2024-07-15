namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 
