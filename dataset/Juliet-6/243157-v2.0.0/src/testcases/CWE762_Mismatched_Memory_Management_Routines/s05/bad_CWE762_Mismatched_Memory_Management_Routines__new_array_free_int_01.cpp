namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int[100];
<START>
    free(data);
<END>
}
} 
