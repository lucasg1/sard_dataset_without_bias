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
    data = new twoIntsStruct;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        delete data;
    }
}
} 
