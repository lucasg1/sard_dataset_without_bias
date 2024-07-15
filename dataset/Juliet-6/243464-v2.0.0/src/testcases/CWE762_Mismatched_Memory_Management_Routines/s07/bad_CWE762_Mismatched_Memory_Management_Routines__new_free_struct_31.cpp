namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
<START>
        free(data);
<END>
    }
}
} 
