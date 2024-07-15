namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
