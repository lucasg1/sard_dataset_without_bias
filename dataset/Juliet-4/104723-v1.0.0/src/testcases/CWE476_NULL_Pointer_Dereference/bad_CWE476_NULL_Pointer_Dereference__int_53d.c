void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    FUN1(data);
}
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
void FUN4(int * data)
{
<START>
    printIntLine(*data);
<END>
}
