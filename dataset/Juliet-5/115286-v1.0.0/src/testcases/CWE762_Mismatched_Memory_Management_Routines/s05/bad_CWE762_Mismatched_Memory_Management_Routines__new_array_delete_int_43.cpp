namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[100];
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
