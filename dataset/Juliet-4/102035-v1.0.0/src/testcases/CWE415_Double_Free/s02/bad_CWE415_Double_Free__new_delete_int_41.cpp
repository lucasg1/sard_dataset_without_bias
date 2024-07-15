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
    data = NULL;
    data = new int;
    delete data;
    FUN0(data);
}
} 
