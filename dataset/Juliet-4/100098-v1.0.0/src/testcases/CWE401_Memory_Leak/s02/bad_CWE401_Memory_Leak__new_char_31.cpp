namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
