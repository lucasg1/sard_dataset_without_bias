namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        break;
    }
    while(1)
    {
<START>
        free(data);
<END>
        break;
    }
}
} 
