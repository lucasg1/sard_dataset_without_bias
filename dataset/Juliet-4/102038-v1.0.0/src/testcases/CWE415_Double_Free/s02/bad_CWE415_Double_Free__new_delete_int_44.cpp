namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int;
    delete data;
    funcPtr(data);
}
} 
