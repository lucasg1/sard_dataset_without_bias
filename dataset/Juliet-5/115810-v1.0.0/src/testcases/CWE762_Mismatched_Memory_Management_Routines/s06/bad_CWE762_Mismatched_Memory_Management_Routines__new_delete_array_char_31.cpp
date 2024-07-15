namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char;
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        delete [] data;
<END>
    }
}
} 
