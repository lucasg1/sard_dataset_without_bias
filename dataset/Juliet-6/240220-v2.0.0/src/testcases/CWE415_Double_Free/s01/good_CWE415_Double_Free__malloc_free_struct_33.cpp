namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        twoIntsStruct * data = dataRef;
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        twoIntsStruct * data = dataRef;
        ; 
    }
}
} 
