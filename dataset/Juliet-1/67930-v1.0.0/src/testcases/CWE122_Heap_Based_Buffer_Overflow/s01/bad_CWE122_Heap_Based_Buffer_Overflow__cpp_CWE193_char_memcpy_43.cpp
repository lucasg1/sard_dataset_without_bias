namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[10];
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
        delete [] data;
    }
}
} 
