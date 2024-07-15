namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
