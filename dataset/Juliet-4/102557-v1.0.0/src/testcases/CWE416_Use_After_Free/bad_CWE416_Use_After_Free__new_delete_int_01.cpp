namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    delete data;
<START>
    printIntLine(*data);
<END>
}
} 
