namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
