namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int;
    delete data;
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
