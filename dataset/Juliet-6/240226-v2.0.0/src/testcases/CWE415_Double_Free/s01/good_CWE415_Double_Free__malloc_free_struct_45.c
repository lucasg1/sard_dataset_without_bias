static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR2;
    ; 
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}
