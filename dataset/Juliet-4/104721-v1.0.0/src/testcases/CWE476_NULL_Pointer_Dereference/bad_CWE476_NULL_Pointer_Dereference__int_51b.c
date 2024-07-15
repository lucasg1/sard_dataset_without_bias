void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
}
void FUN0(int * data)
{
<START>
    printIntLine(*data);
<END>
}
