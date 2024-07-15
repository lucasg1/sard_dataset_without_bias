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
void FUN1(twoIntsStruct * data);
void FUN5(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN5(twoIntsStruct * data);
void FUN9()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN11()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN7(data);
}
void FUN0(twoIntsStruct * data)
{
    ; 
}
void FUN2(twoIntsStruct * data)
{
    free(data);
}
