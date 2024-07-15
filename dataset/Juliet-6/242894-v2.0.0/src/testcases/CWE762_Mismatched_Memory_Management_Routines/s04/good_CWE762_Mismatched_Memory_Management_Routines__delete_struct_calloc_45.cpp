namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
static twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR2;
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR3;
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR3 = data;
    FUN2();
}
} 
