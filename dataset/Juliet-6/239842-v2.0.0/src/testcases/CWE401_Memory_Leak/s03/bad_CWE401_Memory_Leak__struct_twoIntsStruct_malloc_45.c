static struct _twoIntsStruct * VAR0;
static struct _twoIntsStruct * VAR1;
static struct _twoIntsStruct * VAR2;
void FUN0()
{
    struct _twoIntsStruct * data = VAR0;
<START>
<END>
    ; 
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR0 = data;
    FUN0();
}
