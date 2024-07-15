static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR0;
<START>
    free(data);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = data;
    FUN0();
}
