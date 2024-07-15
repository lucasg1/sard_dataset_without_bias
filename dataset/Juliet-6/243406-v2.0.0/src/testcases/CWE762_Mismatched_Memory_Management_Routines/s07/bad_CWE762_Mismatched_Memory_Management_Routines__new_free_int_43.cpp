namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int;
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 
