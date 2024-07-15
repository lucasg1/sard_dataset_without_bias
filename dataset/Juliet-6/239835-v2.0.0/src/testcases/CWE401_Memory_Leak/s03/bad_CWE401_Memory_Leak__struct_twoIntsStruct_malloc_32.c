void FUN0()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * *dataPtr1 = &data;
    struct _twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        struct _twoIntsStruct * data = *dataPtr1;
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        *dataPtr1 = data;
    }
    {
        struct _twoIntsStruct * data = *dataPtr2;
<START>
<END>
        ; 
    }
}
