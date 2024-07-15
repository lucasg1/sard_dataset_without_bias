void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN4(data);
}
void FUN6(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN6(data);
}
void FUN1(int * data);
void FUN10(int * data)
{
    FUN1(data);
}
void FUN3(int * data);
void FUN12(int * data)
{
    FUN3(data);
}
void FUN10(int * data);
void FUN4(int * data)
{
    FUN10(data);
}
void FUN12(int * data);
void FUN6(int * data)
{
    FUN12(data);
}
void FUN0(int * data)
{
    ; 
}
void FUN2(int * data)
{
    free(data);
}
