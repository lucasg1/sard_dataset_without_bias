void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
}
void FUN0(long * data)
{
<START>
    printLongLine(*data);
<END>
}
