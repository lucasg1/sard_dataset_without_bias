void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3(int * data)
{
    FUN1(data);
}
void FUN3(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN3(data);
}
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
void FUN6(int * data)
{
<START>
<END>
    ; 
}
