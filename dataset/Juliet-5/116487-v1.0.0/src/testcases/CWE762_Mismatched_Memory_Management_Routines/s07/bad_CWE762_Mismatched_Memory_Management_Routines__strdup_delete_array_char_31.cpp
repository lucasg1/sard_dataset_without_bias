namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        delete [] data;
<END>
    }
}
} 
