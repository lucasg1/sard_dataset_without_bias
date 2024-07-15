void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN1(twoIntsStruct * data);
void FUN9()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN11()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
    FUN3(data);
}
void FUN4(twoIntsStruct * data)
{
    free(data);
}
void FUN6(twoIntsStruct * data)
{
    ; 
}
