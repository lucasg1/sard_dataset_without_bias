void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN5(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    FUN5(data);
}
void FUN0(char * data)
{
<START>
    printHexCharLine(data[0]);
<END>
}
