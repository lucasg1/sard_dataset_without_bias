void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(twoIntsStruct * dataArray[]);
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    free(data);
}
void FUN2(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    ; 
}
