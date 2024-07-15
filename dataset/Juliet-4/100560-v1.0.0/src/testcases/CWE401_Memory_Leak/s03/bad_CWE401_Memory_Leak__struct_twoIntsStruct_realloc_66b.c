void FUN0(struct _twoIntsStruct * dataArray[]);
void FUN1()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * dataArray[5];
    data = NULL;
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(struct _twoIntsStruct * dataArray[])
{
    struct _twoIntsStruct * data = dataArray[2];
<START>
<END>
    ; 
}
