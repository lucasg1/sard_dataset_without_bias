void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN2(data);
}
void FUN5(twoIntsStruct * data);
void FUN6(twoIntsStruct * data)
{
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN8(twoIntsStruct * data)
{
    FUN7(data);
}
void FUN6(twoIntsStruct * data);
void FUN10(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN8(twoIntsStruct * data);
void FUN12(twoIntsStruct * data)
{
    FUN8(data);
}
void FUN10(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN10(data);
}
void FUN12(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN12(data);
}
void FUN5(twoIntsStruct * data)
{
    ; 
}
void FUN7(twoIntsStruct * data)
{
    free(data);
}
