void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
<START>
<END>
        ; 
    }
}
