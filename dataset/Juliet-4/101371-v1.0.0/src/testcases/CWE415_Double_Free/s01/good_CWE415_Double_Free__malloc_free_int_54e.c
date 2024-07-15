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
void FUN1(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN1(data);
}
void FUN3(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    FUN3(data);
}
void FUN9(int * data);
void FUN10(int * data)
{
    FUN9(data);
}
void FUN11(int * data);
void FUN12(int * data)
{
    FUN11(data);
}
void FUN10(int * data);
void FUN0(int * data)
{
    FUN10(data);
}
void FUN12(int * data);
void FUN2(int * data)
{
    FUN12(data);
}
void FUN9(int * data)
{
    free(data);
}
void FUN11(int * data)
{
    ; 
}
