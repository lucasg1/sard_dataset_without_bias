namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int[100];
    funcPtr(data);
}
} 
