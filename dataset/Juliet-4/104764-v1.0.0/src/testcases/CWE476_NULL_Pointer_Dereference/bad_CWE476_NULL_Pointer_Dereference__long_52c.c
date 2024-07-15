void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
}
void FUN2(long * data);
void FUN0(long * data)
{
    FUN2(data);
}
void FUN2(long * data)
{
<START>
    printLongLine(*data);
<END>
}
