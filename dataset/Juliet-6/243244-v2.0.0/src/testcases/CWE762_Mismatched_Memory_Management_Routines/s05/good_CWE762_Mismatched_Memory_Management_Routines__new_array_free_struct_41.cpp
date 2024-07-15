namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
void FUN2(twoIntsStruct * data)
{
    delete [] data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN2(data);
}
} 
