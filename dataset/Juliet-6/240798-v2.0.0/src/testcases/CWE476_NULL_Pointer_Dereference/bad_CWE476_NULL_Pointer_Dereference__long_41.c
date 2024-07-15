void FUN0(long * data)
{
<START>
    printLongLine(*data);
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
}
