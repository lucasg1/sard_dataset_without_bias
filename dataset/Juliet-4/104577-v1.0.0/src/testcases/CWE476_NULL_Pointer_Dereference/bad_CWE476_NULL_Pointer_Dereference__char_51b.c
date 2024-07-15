void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
}
void FUN0(char * data)
{
<START>
    printHexCharLine(data[0]);
<END>
}
