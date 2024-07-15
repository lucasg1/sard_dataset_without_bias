namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int;
    *data = 5;
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
<START>
    printIntLine(*data);
<END>
}
} 
