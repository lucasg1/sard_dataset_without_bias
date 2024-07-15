static char *FUN0()
{
    char charString[] = "FUN0 string";
<START>
    return charString; 
<END>
}
void FUN1() 
{
    printLine(FUN0());
}
