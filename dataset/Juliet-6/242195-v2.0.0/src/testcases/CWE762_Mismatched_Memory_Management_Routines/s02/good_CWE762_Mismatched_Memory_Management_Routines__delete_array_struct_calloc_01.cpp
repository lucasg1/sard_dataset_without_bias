namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
}
} 
