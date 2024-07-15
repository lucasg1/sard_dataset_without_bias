namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        free(data);
    }
}
} 
