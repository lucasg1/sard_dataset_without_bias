namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
