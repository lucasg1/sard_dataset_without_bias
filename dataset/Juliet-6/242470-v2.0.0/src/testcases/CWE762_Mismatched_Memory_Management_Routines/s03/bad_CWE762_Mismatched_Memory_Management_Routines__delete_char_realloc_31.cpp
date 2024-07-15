namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
