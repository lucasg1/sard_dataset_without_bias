void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(data);
}
void FUN4(int * data);
void FUN2(int * data)
{
    FUN4(data);
}
void FUN1(int * data);
void FUN4(int * data)
{
    FUN1(data);
}
void FUN0(int * data)
{
<START>
    printIntLine(*data);
<END>
}
