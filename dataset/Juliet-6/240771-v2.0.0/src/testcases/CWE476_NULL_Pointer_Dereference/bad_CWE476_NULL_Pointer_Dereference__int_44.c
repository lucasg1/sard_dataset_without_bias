void FUN0(int * data)
{
<START>
    printIntLine(*data);
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    funcPtr(data);
}
