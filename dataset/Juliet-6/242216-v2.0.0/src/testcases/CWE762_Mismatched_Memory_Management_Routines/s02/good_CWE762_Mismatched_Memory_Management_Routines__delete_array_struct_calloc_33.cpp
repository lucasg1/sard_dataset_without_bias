namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct[100];
    {
        twoIntsStruct * data = dataRef;
        delete [] data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        twoIntsStruct * data = dataRef;
        free(data);
    }
}
} 
