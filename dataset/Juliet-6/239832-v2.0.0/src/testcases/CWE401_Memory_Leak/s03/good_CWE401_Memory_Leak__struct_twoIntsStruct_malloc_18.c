void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    goto sink;
sink:
    ; 
}
