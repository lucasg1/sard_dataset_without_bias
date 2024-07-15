void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN1(long * data);
void FUN3(long * data)
{
    FUN1(data);
}
void FUN3(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    FUN3(data);
}
void FUN0(long * data)
{
<START>
    printLongLine(*data);
<END>
}
