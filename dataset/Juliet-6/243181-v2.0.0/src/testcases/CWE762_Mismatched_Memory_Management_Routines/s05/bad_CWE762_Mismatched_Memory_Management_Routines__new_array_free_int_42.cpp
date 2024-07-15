namespace NAMESPACE0
{
static int * FUN0(int * data)
{
    data = new int[100];
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 
