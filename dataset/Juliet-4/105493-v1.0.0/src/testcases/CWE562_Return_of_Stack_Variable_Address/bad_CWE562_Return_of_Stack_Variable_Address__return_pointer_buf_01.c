static char *FUN0()
{
    char charString[] = "FUN0 string";
    char *ptrCharString;
    ptrCharString = &charString[1];
<START>
    return ptrCharString; 
<END>
}
void FUN1() 
{
    printLine(FUN0());
}
