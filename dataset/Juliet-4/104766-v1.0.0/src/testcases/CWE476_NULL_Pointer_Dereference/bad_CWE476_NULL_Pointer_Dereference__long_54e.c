void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(data);
}
void FUN1(long * data);
void FUN5(long * data)
{
    FUN1(data);
}
void FUN5(long * data);
void FUN2(long * data)
{
    FUN5(data);
}
void FUN0(long * data)
{
<START>
    printLongLine(*data);
<END>
}
