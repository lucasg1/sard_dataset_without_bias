twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    return data;
}
twoIntsStruct * FUN1(twoIntsStruct * data)
{
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    return data;
}
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
twoIntsStruct * FUN1(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}
