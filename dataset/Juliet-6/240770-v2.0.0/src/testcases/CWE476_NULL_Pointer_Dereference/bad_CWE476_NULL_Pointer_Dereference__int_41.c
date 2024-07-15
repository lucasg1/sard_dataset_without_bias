void FUN0(int * data)
{
<START>
    printIntLine(*data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
}
